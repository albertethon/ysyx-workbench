#include "cputest.h"
#include "common.h"
using namespace std;

TOP_NAME *dutptr=NULL;
VerilatedVcdC *tfp = NULL;
const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};
uint32_t instMem[40] = {
    /**
     * s0:8
     * sp:2
     * s2-s11:18~27
     * 
    */
    0x80000000,0x00000413,//li	s0,0
	0x80000004,0xffc10113,//addi	sp,sp,-4
	0x80000008,0x00000413,//li	s0,0
	0x8000000c,0xff010113,//addi	sp,sp,-16
	0x80000010,0x200b8b93,//addi	s7,s7,512
	0x80000014,0xfb010113,//addi	sp,sp,-80
	0x80000018,0x0d4b0b13,//addi	s6,s6,212
	0x8000001c,0x1e498993,//addi	s3,s3,484
	0x80000020,0x04000c13,//li	s8,64
	0x80000024,0x00440413,//addi	s0,s0,4
    0x80000028,0x00100073//ebreak
};

void sim_init(){
    tfp = new VerilatedVcdC;
    dutptr = new Vcpu;
    contextp->traceEverOn(true);
    dutptr->trace(tfp, 0);
    tfp->open("logs/cpu_dump.vcd");
}

/*步进并记录一个波形*/
void step_and_dump_wave(){
    dutptr->eval();
    contextp->timeInc(100000);
    tfp->dump(contextp->time());
}

/* void single_cycle(){
    dutptr->clk = 0; dutptr->eval();
    dutptr->clk = 1; dutptr->eval();
} */

inline void passtime(int n){
    while (n--)
    {
        dutptr->clk=0;step_and_dump_wave();
        dutptr->clk=1;step_and_dump_wave();

    }
}

void sim_exit(){
    step_and_dump_wave();
    tfp->close();
}

void cputest(){
    Verilated::mkdir("logs");
    sim_init();
    int i=0;
    while (instMem[i*2]!='\0')
    {
        paddr_write(instMem[i*2],4,instMem[i*2+1]);
        i++;
    }
    
    
    // dutptr->pc=0x80000000;
    step_and_dump_wave();
    i=0;
    while (!contextp->gotFinish())
    {
        dutptr->clk = !dutptr->clk;
        // if(dutptr->clk > 0)
        dutptr->eval();
        dutptr->instruction=paddr_read(dutptr->pc,4);
        step_and_dump_wave();
    }
    
    dutptr->final();
    sim_exit();
}
