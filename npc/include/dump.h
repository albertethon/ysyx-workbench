#ifndef DUMP_AND_TEST_H
#define DUMP_AND_TEST_H

#include <verilated.h>
#include <verilated_vcd_c.h>
#include <Vtop.h>



void sim_init();
void step_and_dump_wave();
void sim_exit();
void dump_and_test();

#endif