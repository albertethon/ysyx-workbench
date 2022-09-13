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

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>
#define MAXN_EXPR 32

//TODO generate long expr but less than 32
// this should be enough
static char buf[65536] = {};
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  word_t result = %s; "
"  printf(\"%%ld\", result); "
"  return 0; "
"}";
static int len_tokens = 0;

static void gen_num(){
  int num = rand();
  char s[32]={};
  sprintf(s,"%du",num);
  strcat(buf,s);
}

static inline void gen(char* c){
  strcat(buf,c);
}

static void gen_rand_op(){
  int choose = rand()%4;
  switch (choose)
  {
  case 0:
    strcat(buf,"+");
    break;
  case 1:
    strcat(buf,"-");
    break;
  case 2:
    strcat(buf,"*");
    break;
  case 3:
    strcat(buf,"/");
    break;
  default:
    break;
  }
}

static void gen_rand_expr() {
  int choose = rand()%4;
  int len = strlen(buf);
  if (len > sizeof(buf)-10000){
    gen("1u");
    len_tokens++;
  }
  else{
    if((MAXN_EXPR - len_tokens) >= 3){
      switch (choose)
      {
        case 0:
          len_tokens += 3;
          gen_rand_expr();gen_rand_op();gen_rand_expr();
          break;
        case 1:
          len_tokens += 3;
          gen("(");gen_rand_expr();gen(")");
          break;
        case 2:
          if(buf[len-1] != ' '){
            len_tokens ++;
            gen_num();
          }
          break;
        case 3:
          len_tokens ++;
          gen_rand_expr();gen(" ");
          break;
        default:
          break;
      }
    }else if((MAXN_EXPR - len_tokens) >= 1){
      if(choose < 1){
        len_tokens++;
        gen_rand_expr();
        gen(" ");
      }else if(buf[len-1]!=' '){
        gen_num();
      }
    }else if(buf[len-1]!=' '){
      gen_num();
    }
  }
}

int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 5000;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);
  }
  int i;
  for (i = 0; i < loop; i ++) {
    gen_rand_expr();

    sprintf(code_buf, code_format, buf);

    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    int ret = system("gcc /tmp/.code.c -o /tmp/.expr");
    if (ret != 0) continue;

    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);

    int result;
    int fresult;
    fresult = fscanf(fp, "%d", &result);// get the result of c print
    if(fresult != EOF){  // split the expr that divide 0
      printf("%u %s\n", result, buf);
    }

    pclose(fp);
    memset(buf,'\0',sizeof(buf));
    len_tokens = 0;
    
  }
  return 0;
}
