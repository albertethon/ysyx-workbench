#include "dump.h"

TOP_NAME *dutptr=NULL;
VerilatedContext *contextp = NULL;
VerilatedVcdC *tfp = NULL;

void sim_init(){
    contextp = new VerilatedContext;
    tfp = new VerilatedVcdC;
    dutptr = new Vtop;
    contextp->traceEverOn(true);
    dutptr->trace(tfp, 0);
    tfp->open("logs/dump.vcd");
}

void step_and_dump_wave(){
    dutptr->eval();
    contextp->timeInc(1);
    tfp->dump(contextp->time());
}

void sim_exit(){
    step_and_dump_wave();
    tfp->close();
}

void dump_and_test(){
    Verilated::mkdir("logs");
    
    sim_init();

    for(int i=0;i< 1<<11 ;i++){
    //遍历所有输入情况
    int a = i & 0x00f;
    int b = i & 0x0f0;
    int btn=i & 0x300;
    dutptr->in_a = a;
    dutptr->in_b = b;
    dutptr->btn = btn;

    step_and_dump_wave();
    //验证
/*     VL_PRINTF("[%" VL_PRI64 "d] in_a=%x in_b=%x "
            "btn=%x\t out=%x\n",
            contextp->time(), dutptr->in_a, dutptr->in_b,  
            dutptr->btn,dutptr->out); */

    }

    dutptr->final();
    sim_exit();

    
}
