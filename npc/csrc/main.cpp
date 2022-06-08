#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <verilated.h>
#include <Vtop.h>
#include <nvboard.h>

static TOP_NAME dut;
void nvboard_bind_all_pins(Vtop* top);


int main(int argc, char** argv, char** env) {
  nvboard_bind_all_pins(&dut);
  nvboard_init();


  while(1) {
    nvboard_update();
    dut.eval();
  }
  nvboard_quit();

  /**
  Verilated::mkdir("logs");
  const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};
  contextp->debug(0);
  contextp->randReset(2);
  contextp->traceEverOn(true);
  contextp->commandArgs(argc,argv);

  const std::unique_ptr<Vtop> top{new Vtop{contextp.get(),"TOP"}};

  while(!contextp->gotFinish()){
    for(int i=0;i<11;i++){
        contextp->timeInc(1);
        int a = rand() & 1;
        int b = rand() & 1;
        top->a = a;
        top->b = b;
        top->eval();
        printf("a = %d, b = %d, f = %d\n", a, b, top->f);
        assert(top->f == a ^ b);
    }
  }
  top->final();
#if VM_COVERAGE
  Verilated::mkdir("logs");
  contextp->coveragep()->write("logs/coverage.dat");
#endif
  return 0;
  **/
}
