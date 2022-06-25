#ifndef DUMP_AND_TEST_H
#define DUMP_AND_TEST_H

#include <verilated.h>
#include <verilated_vcd_c.h>
#include <Vtop.h>
#include <iostream>


void sim_init();
void step_and_dump_wave();
void sim_exit();
void dump_and_test();
inline void passtime(int n);
void kbd_sendcode(char code);
int isParity(char code);

#endif