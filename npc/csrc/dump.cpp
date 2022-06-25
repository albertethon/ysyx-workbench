#include "dump.h"

using namespace std;
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

inline void passtime(int n){
    while (n--)
    {
        dutptr->clk=0;step_and_dump_wave();
        dutptr->clk=1;step_and_dump_wave();

    }
}

int oddParity(int code){
    bool parity=false;
    while(code){
        parity=!parity;
        code = code & (code-1);
    }
    return parity?0:1;
}

void kbd_sendcode(int code){
    int period=60;
    short int send_buffer=0;
    send_buffer = (code << 1) | (oddParity(code) << 9) | 1<<10;
    for (int i = 0; i < 11; i++)
    {
        dutptr->ps2_data = (send_buffer & (1<<i))>0;
        passtime(period/2);dutptr->ps2_clk=0;
        passtime(period/2);dutptr->ps2_clk=1;
    }
}

void sim_exit(){
    step_and_dump_wave();
    tfp->close();
}

void dump_and_test(){
    Verilated::mkdir("logs");
    sim_init();
    passtime(10);
    dutptr->we=0;
    // dutptr->inaddr=0;
    dutptr->din=0;
    
    dutptr->ps2_clk=1;
    // dutptr->nextdata_n=1;

/*     dutptr->clrn=0b0;passtime(20);
    dutptr->clrn=0b1;passtime(20);

    kbd_sendcode(0x1c);passtime(20);
    dutptr->nextdata_n=0b0;step_and_dump_wave();
    printf("%x\n",dutptr->data);passtime(20);
    dutptr->nextdata_n=0b1;passtime(20); */
    

/*     VL_PRINTF("[%" VL_PRI64 "d] in_a=%x in_b=%x "
            "btn=%x\t out=%x\n",
            contextp->time(), dutptr->in_a, dutptr->in_b,
            dutptr->btn,dutptr->out); */


    dutptr->final();
    sim_exit();

    
}
