/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include "local-include/reg.h"
#include <cpu/cpu.h>
#include <cpu/ifetch.h>
#include <cpu/decode.h>

#define R(i) gpr(i)
#define Mr vaddr_read
#define Mw vaddr_write

enum {
  TYPE_R,TYPE_I, TYPE_S, TYPE_B, TYPE_U,  TYPE_J,
  TYPE_N, // none
};

#define src1R(n) do { *src1 = R(n); } while (0)
#define src2R(n) do { *src2 = R(n); } while (0)
#define destR(n) do { *dest = n; } while (0)
#define src1I(i) do { *src1 = i; } while (0)
#define src2I(i) do { *src2 = i; } while (0)
#define destI(i) do { *dest = i; } while (0)

static word_t immI(uint32_t i) { return SEXT(BITS(i, 31, 20), 12); }
static word_t immU(uint32_t i) { return SEXT(BITS(i, 31, 12), 20) << 12; }
static word_t immS(uint32_t i) { return (SEXT(BITS(i, 31, 25), 7) << 5) | SEXT(BITS(i, 11, 7),5); }
static word_t immJ(uint32_t i) { return (BITS(i,31,31) << 20) | (SEXT(BITS(i, 30, 21), 10) << 1) |\
                                        (BITS(i,20,20) << 11) | (SEXT(BITS(i, 19, 12), 8) << 12); }
static word_t immB(uint32_t i) { 
  printf("BITS(i,31,31) << 12 = %llx\n",BITS(i,31,31) << 12);
  printf("BITS(i, 30, 25) << 5 = %lx\n",UEXT(BITS(i, 30, 25), 6) << 5);
  printf("BITS(i, 11, 8) << 1 = %lx\n",(UEXT(BITS(i, 11, 8), 4) << 1));
  printf("BITS(i, 7, 7) << 11 = %llx\n",(BITS(i, 7, 7) << 11));
  printf("or:%llx\n",((BITS(i,31,31) << 12) | (UEXT(BITS(i, 30, 25), 6) << 5) |\
                                        (UEXT(BITS(i, 11, 8), 4) << 1) | (BITS(i, 7, 7) << 11)));
  return (BITS(i,31,31) << 12) | (SEXT(BITS(i, 30, 25), 6) << 5) |\
                                        (SEXT(BITS(i, 11, 8), 4) << 1) | (BITS(i, 7, 7) << 11); }

static void decode_operand(Decode *s, word_t *dest, word_t *src1, word_t *src2, int type) {
  uint32_t i = s->isa.inst.val;
  int rd  = BITS(i, 11, 7);
  int rs1 = BITS(i, 19, 15);
  int rs2 = BITS(i, 24, 20);
  destR(rd);
  switch (type) {
    case TYPE_R: src1R(rs1);     src2R(rs2); break;
    case TYPE_I: src1R(rs1);     src2I(immI(i)); break;
    case TYPE_S: destI(immS(i)); src1R(rs1); src2R(rs2); break;
    case TYPE_B: destI(immB(i)); src1R(rs1); src2R(rs2); break;
    case TYPE_U: src1I(immU(i)); break;
    case TYPE_J: src1I(immJ(i)); break;
  }
}

static int decode_exec(Decode *s) {
  word_t dest = 0, src1 = 0, src2 = 0;
  s->dnpc = s->snpc;

#define INSTPAT_INST(s) ((s)->isa.inst.val)
#define INSTPAT_MATCH(s, name, type, ... /* body */ ) { \
  decode_operand(s, &dest, &src1, &src2, concat(TYPE_, type)); \
  __VA_ARGS__ ; \
}

  INSTPAT_START();
  INSTPAT("0000000 00000 00001 000 00000 11001 11", ret    , I, s->dnpc = (src1+src2)&0xfffffffe);//ret
  
  INSTPAT("??????? ????? ????? ??? ????? 00101 11", auipc  , U, R(dest) = src1 + s->pc);
  INSTPAT("??????? ????? ????? 011 ????? 00000 11", ld     , I, R(dest) = Mr(src1 + src2, 8));
  INSTPAT("??????? ????? ????? 011 ????? 01000 11", sd     , S, Mw(src1 + dest, 8, src2));
/**
 * x0: should always be zero
 * li:  ->  lui,addi,slli,addi,slli,addi,slli,addi
 * mv:  ->  addi rd,rs1,0
 * j:   ->  jal x0,offset
 * ret: ->  jalr x0, 0(x1)
 * seqz:->  if not 0,sltiu rd, rs1, 1
 * beqz:->  beq rs1, x0, offset
 * snez:->  sltu rd, x0, rs2
 **/


  INSTPAT("0000000 ????? ????? 000 ????? 01100 11", add    , R, R(dest) = src1 + src2);//x[rd] = x[rs1] + x[rs2]
  INSTPAT("0000000 ????? ????? 000 ????? 01110 11", addw   , R, R(dest) = SEXT(BITS(src1 + src2,31,0), 64));//x[rd] = sext((x[rs1] + x[rs2])[31:0])
  INSTPAT("??????? ????? ????? 000 ????? 00100 11", addi   , I, R(dest) = src1 + src2);//x[rd] = x[rs1] + sext(imm)
  INSTPAT("??????? ????? ????? 000 ????? 00110 11", addiw  , I, R(dest) = SEXT(BITS(src1 + src2,31,0), 64));//x[rd] = sext((x[rs1] + sext(imm))[31:0])
  INSTPAT("??????? 00000 ????? 000 ????? 11000 11", beqz   , B, if(src1==0)   s->dnpc = s->pc + dest);//if(rs1==0)pc+=sext(offset)
  INSTPAT("??????? ????? ????? 000 ????? 11000 11", beq    , B, if(src1==src2)s->dnpc = s->pc + dest);//if(rs1==rs2)pc+=sext(offset)
  INSTPAT("??????? ????? ????? 001 ????? 11000 11", bne    , B, if(src1!=src2)s->dnpc = s->pc + dest;printf("src1:%lx\tsrc2:%lx\tdest:%lx\ts->dnpc:%lx\n",src1,src2,dest,s->dnpc));//if(rs1!=rs2) pc += sext(offset)
  INSTPAT("??????? ????? ????? ??? 00000 11011 11", j      , J, s->dnpc = src1 + s->pc);//pc+=sext(offset)
  INSTPAT("??????? ????? ????? ??? ????? 11011 11", jal    , J, R(dest) = s->snpc; s->dnpc = src1 + s->pc);//x[rd] = pc+4; pc+=sext(offset)
  INSTPAT("??????? ????? ????? 000 ????? 11001 11", jalr   , I, R(dest) = s->snpc; s->dnpc = (src1 + src2)&0xfffffffe);//t=pc+4;pc=(x[rs1]+sext(offset))&~1;x[rd]=t
  INSTPAT("??????? ????? ????? 010 ????? 00000 11", lw     , I, R(dest) = SEXT(BITS(Mr(src1 + src2, 4), 31, 0), 64));//load word:x[rd] = sext(M[x[rs1] + sext(offset)][31:0])
  INSTPAT("??????? ????? ????? ??? ????? 01101 11", lui    , U, R(dest) = src1);//x[rd] = sext(imm[31:12]<<12)
  INSTPAT("0000000 00000 ????? 000 ????? 00100 11", mv     , I, R(dest) = src1);//x[rd] = x[rs1]
  INSTPAT("0000000 00001 ????? 011 ????? 00100 11", seqz   , I, R(dest) = (src1!=0)?0:1);//if 0, x[rd]=1, else sltiu rd, rs1, 1
  INSTPAT("0000000 ????? 00000 011 ????? 01100 11", snez   , R, R(dest) = (src2!=0)?1:0);//if x[rs2]==0; x[rd]=0; otherwise x[rd]=1
  INSTPAT("??????? ????? ????? 011 ????? 00100 11", sltiu  , I, R(dest) = (src1 < src2)?1:0);//x[rd] = x[rs1] < imm
  INSTPAT("0000000 ????? ????? 011 ????? 01100 11", sltu   , R, R(dest) = (src1 < src2)?1:0);//x[rd] = x[rs1] < x[rs2]
  INSTPAT("0000000 ????? ????? 001 ????? 01110 11", sllw   , R, R(dest) = SEXT(BITS(src1 << BITS(src2,4,0), 31, 0),64));//x[rd] = sext((x[rs1] << x[rs2][4:0])[31:0])
  INSTPAT("0100000 ????? ????? 000 ????? 01100 11", sub    , R, R(dest) = src1 - src2);//x[rd] = x[rs1] - x[rs2]
  INSTPAT("??????? ????? ????? 001 ????? 01000 11", sh     , S, Mw(src1 + dest, 16, BITS(src2,15,0)));//store halfword:M[x[rs1] + sext(offset)] = x[rs2][15:0]
  INSTPAT("??????? ????? ????? 000 ????? 01000 11", sb     , S, Mw(src1 + dest, 8,  BITS(src2,7,0)));//store byte:M[x[rs1] + sext(offset)] = x[rs2][7:0]
  INSTPAT("0000000 ????? ????? 100 ????? 01100 11", xor    , R, R(dest) = src1 ^ src2);//x[rd] = x[rs1] ^ x[rs2]
  INSTPAT("??????? ????? ????? 100 ????? 00100 11", xori   , I, R(dest) = src1 ^ src2);//x[rd] = x[rs1] ^ imm


  INSTPAT("0000000 00001 00000 000 00000 11100 11", ebreak , N, NEMUTRAP(s->pc, R(10))); // R(10) is $a0, otherwise hit the bad trap
  INSTPAT("??????? ????? ????? ??? ????? ????? ??", inv    , N, INV(s->pc));
  INSTPAT_END();

  R(0) = 0; // reset $zero to 0

  return 0;
}

int isa_exec_once(Decode *s) {
  s->isa.inst.val = inst_fetch(&s->snpc, 4);
  return decode_exec(s);
}
