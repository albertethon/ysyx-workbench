#ifndef CPUTEST_H
#define CPUTEST_H

#include <verilated.h>
#include <verilated_vcd_c.h>
#include <Vcpu.h>
#include <iostream>
#include "paddr.h"

void sim_init();
void step_and_dump_wave();
void sim_exit();
inline void passtime(int n);
void cputest();

#endif