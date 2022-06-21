// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedVcd;


//----------

VL_MODULE(Vtop___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(en,0,0);
    VL_IN8(in_a,3,0);
    VL_IN8(in_b,3,0);
    VL_IN8(btn,2,0);
    VL_OUT8(out,3,0);
    VL_OUT8(HEX0,7,0);
    VL_IN16(sw,9,0);
    VL_OUT16(led,15,0);

    // LOCAL SIGNALS
    CData/*3:0*/ top__DOT__alu1__DOT__Result;
    CData/*0:0*/ top__DOT__alu1__DOT__Cin;
    CData/*3:0*/ top__DOT__alu1__DOT__t_no_Cin;
    CData/*3:0*/ top__DOT__alu1__DOT__i0__DOT__i0__DOT__lut_out;
    CData/*0:0*/ top__DOT__alu1__DOT__i0__DOT__i0__DOT__hit;
    VlUnpacked<CData/*6:0*/, 8> top__DOT__alu1__DOT__i0__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*2:0*/, 8> top__DOT__alu1__DOT__i0__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*3:0*/, 8> top__DOT__alu1__DOT__i0__DOT__i0__DOT__data_list;

    // LOCAL VARIABLES
    QData/*55:0*/ top__DOT__alu1__DOT____Vcellinp__i0____pinNumber3;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop___024root);  ///< Copying not allowed
  public:
    Vtop___024root(const char* name);
    ~Vtop___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
