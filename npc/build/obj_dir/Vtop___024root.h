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
    VL_OUT8(VGA_CLK,0,0);
    VL_IN8(clrn,0,0);
    VL_IN8(ps2_clk,0,0);
    VL_IN8(ps2_data,0,0);
    VL_IN8(we,0,0);
    VL_IN8(din,7,0);
    VL_IN8(btn,3,0);
    VL_OUT8(scancode,7,0);
    VL_OUT8(asciicode,7,0);
    VL_OUT8(ready,0,0);
    VL_OUT8(overflow,0,0);
    VL_OUT8(VGA_HSYNC,0,0);
    VL_OUT8(VGA_VSYNC,0,0);
    VL_OUT8(VGA_VALID,0,0);
    VL_OUT8(VGA_R,7,0);
    VL_OUT8(VGA_G,7,0);
    VL_OUT8(VGA_B,7,0);
    VL_OUT8(out,3,0);
    VL_OUT8(HEX0,7,0);
    VL_OUT8(HEX1,7,0);
    VL_OUT8(HEX2,7,0);
    VL_OUT8(HEX3,7,0);
    VL_OUT8(HEX4,7,0);
    VL_OUT8(HEX5,7,0);
    VL_IN16(sw,15,0);
    VL_OUT16(led,15,0);

    // LOCAL SIGNALS
    CData/*0:0*/ top__DOT__sigwe;
    CData/*7:0*/ top__DOT__count;
    CData/*2:0*/ top__DOT__pkb__DOT__w_ptr;
    CData/*2:0*/ top__DOT__pkb__DOT__r_ptr;
    CData/*3:0*/ top__DOT__pkb__DOT__count;
    CData/*2:0*/ top__DOT__pkb__DOT__ps2_clk_sync;
    CData/*7:0*/ top__DOT__vram__DOT__oldaddr;
    CData/*6:0*/ top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__lut_out;
    CData/*0:0*/ top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__hit;
    CData/*6:0*/ top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__lut_out;
    CData/*0:0*/ top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__hit;
    CData/*6:0*/ top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__lut_out;
    CData/*0:0*/ top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__hit;
    CData/*6:0*/ top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__lut_out;
    CData/*0:0*/ top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__hit;
    CData/*6:0*/ top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__lut_out;
    CData/*0:0*/ top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__hit;
    CData/*6:0*/ top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__lut_out;
    CData/*0:0*/ top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__hit;
    CData/*3:0*/ top__DOT__vgac__DOT__x_ascii;
    CData/*3:0*/ top__DOT__vgac__DOT__y_ascii;
    CData/*4:0*/ top__DOT__vgac__DOT__h_count_n;
    CData/*6:0*/ top__DOT__vgac__DOT__v_count_n;
    SData/*9:0*/ top__DOT__pkb__DOT__buffer;
    SData/*11:0*/ top__DOT__asci2dot0__DOT__y_dot;
    SData/*9:0*/ top__DOT__vgac__DOT__x_cnt;
    SData/*9:0*/ top__DOT__vgac__DOT__y_cnt;
    IData/*23:0*/ top__DOT__vga_data;
    VlUnpacked<CData/*7:0*/, 8> top__DOT__pkb__DOT__fifo;
    VlUnpacked<CData/*7:0*/, 256> top__DOT__vram__DOT__ram;
    VlUnpacked<CData/*7:0*/, 4096> top__DOT__vram__DOT__key_ram;
    VlUnpacked<CData/*6:0*/, 16> top__DOT__b2seg0__DOT__chars;
    VlUnpacked<SData/*10:0*/, 16> top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*3:0*/, 16> top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*6:0*/, 16> top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list;
    VlUnpacked<CData/*6:0*/, 16> top__DOT__b2seg1__DOT__chars;
    VlUnpacked<SData/*10:0*/, 16> top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*3:0*/, 16> top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*6:0*/, 16> top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list;
    VlUnpacked<CData/*6:0*/, 16> top__DOT__b2seg2__DOT__chars;
    VlUnpacked<SData/*10:0*/, 16> top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*3:0*/, 16> top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*6:0*/, 16> top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list;
    VlUnpacked<CData/*6:0*/, 16> top__DOT__b2seg3__DOT__chars;
    VlUnpacked<SData/*10:0*/, 16> top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*3:0*/, 16> top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*6:0*/, 16> top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list;
    VlUnpacked<CData/*6:0*/, 16> top__DOT__b2seg4__DOT__chars;
    VlUnpacked<SData/*10:0*/, 16> top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*3:0*/, 16> top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*6:0*/, 16> top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list;
    VlUnpacked<CData/*6:0*/, 16> top__DOT__b2seg5__DOT__chars;
    VlUnpacked<SData/*10:0*/, 16> top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*3:0*/, 16> top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*6:0*/, 16> top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list;
    VlUnpacked<SData/*8:0*/, 4096> top__DOT__asci2dot0__DOT__lattice;

    // LOCAL VARIABLES
    CData/*6:0*/ top__DOT____Vcellout__b2seg0__seg_out;
    CData/*6:0*/ top__DOT____Vcellout__b2seg1__seg_out;
    CData/*6:0*/ top__DOT____Vcellout__b2seg2__seg_out;
    CData/*6:0*/ top__DOT____Vcellout__b2seg3__seg_out;
    CData/*6:0*/ top__DOT____Vcellout__b2seg4__seg_out;
    CData/*6:0*/ top__DOT____Vcellout__b2seg5__seg_out;
    CData/*0:0*/ top__DOT__pkb__DOT____Vlvbound1;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__VGA_CLK;
    CData/*0:0*/ __Vclklast__TOP__rst;
    VlWide<6>/*175:0*/ top__DOT__b2seg0__DOT____Vcellinp__i0____pinNumber4;
    VlWide<6>/*175:0*/ top__DOT__b2seg1__DOT____Vcellinp__i0____pinNumber4;
    VlWide<6>/*175:0*/ top__DOT__b2seg2__DOT____Vcellinp__i0____pinNumber4;
    VlWide<6>/*175:0*/ top__DOT__b2seg3__DOT____Vcellinp__i0____pinNumber4;
    VlWide<6>/*175:0*/ top__DOT__b2seg4__DOT____Vcellinp__i0____pinNumber4;
    VlWide<6>/*175:0*/ top__DOT__b2seg5__DOT____Vcellinp__i0____pinNumber4;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

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
