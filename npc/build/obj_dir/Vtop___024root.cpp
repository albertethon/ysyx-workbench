// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

//==========

VL_INLINE_OPT void Vtop___024root___sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__2\n"); );
    // Variables
    CData/*2:0*/ __Vdly__top__DOT__pkb__DOT__ps2_clk_sync;
    CData/*3:0*/ __Vdly__top__DOT__pkb__DOT__count;
    CData/*2:0*/ __Vdly__top__DOT__pkb__DOT__w_ptr;
    CData/*2:0*/ __Vdly__top__DOT__pkb__DOT__r_ptr;
    CData/*0:0*/ __Vdly__overflow;
    CData/*0:0*/ __Vdly__ready;
    CData/*7:0*/ __Vdly__top__DOT__count;
    CData/*2:0*/ __Vdlyvdim0__top__DOT__pkb__DOT__fifo__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__pkb__DOT__fifo__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__pkb__DOT__fifo__v0;
    CData/*7:0*/ __Vdlyvdim0__top__DOT__vram__DOT__ram__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__vram__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__vram__DOT__ram__v0;
    // Body
    __Vdly__top__DOT__pkb__DOT__ps2_clk_sync = vlSelf->top__DOT__pkb__DOT__ps2_clk_sync;
    __Vdlyvset__top__DOT__vram__DOT__ram__v0 = 0U;
    __Vdly__top__DOT__pkb__DOT__r_ptr = vlSelf->top__DOT__pkb__DOT__r_ptr;
    __Vdly__top__DOT__pkb__DOT__w_ptr = vlSelf->top__DOT__pkb__DOT__w_ptr;
    __Vdly__top__DOT__pkb__DOT__count = vlSelf->top__DOT__pkb__DOT__count;
    __Vdlyvset__top__DOT__pkb__DOT__fifo__v0 = 0U;
    __Vdly__ready = vlSelf->ready;
    __Vdly__overflow = vlSelf->overflow;
    __Vdly__top__DOT__count = vlSelf->top__DOT__count;
    __Vdly__top__DOT__pkb__DOT__ps2_clk_sync = ((6U 
                                                 & ((IData)(vlSelf->top__DOT__pkb__DOT__ps2_clk_sync) 
                                                    << 1U)) 
                                                | (IData)(vlSelf->ps2_clk));
    if (vlSelf->top__DOT__sigwe) {
        __Vdlyvval__top__DOT__vram__DOT__ram__v0 = vlSelf->top__DOT__vram__DOT__din;
        __Vdlyvset__top__DOT__vram__DOT__ram__v0 = 1U;
        __Vdlyvdim0__top__DOT__vram__DOT__ram__v0 = vlSelf->top__DOT__vram__DOT__inaddr;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__sigwe)))) {
        vlSelf->asciicode = vlSelf->top__DOT__vram__DOT__ram
            [vlSelf->scancode];
    }
    if (__Vdlyvset__top__DOT__vram__DOT__ram__v0) {
        vlSelf->top__DOT__vram__DOT__ram[__Vdlyvdim0__top__DOT__vram__DOT__ram__v0] 
            = __Vdlyvval__top__DOT__vram__DOT__ram__v0;
    }
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0xfU & (IData)(vlSelf->asciicode)) 
                       == vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__hit 
        = ((0xfU & (IData)(vlSelf->asciicode)) == vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (IData)(vlSelf->asciicode)) 
                          == vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & (IData)(vlSelf->asciicode)) == 
              vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (IData)(vlSelf->asciicode)) 
                          == vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & (IData)(vlSelf->asciicode)) == 
              vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (IData)(vlSelf->asciicode)) 
                          == vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & (IData)(vlSelf->asciicode)) == 
              vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (IData)(vlSelf->asciicode)) 
                          == vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & (IData)(vlSelf->asciicode)) == 
              vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (IData)(vlSelf->asciicode)) 
                          == vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & (IData)(vlSelf->asciicode)) == 
              vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (IData)(vlSelf->asciicode)) 
                          == vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & (IData)(vlSelf->asciicode)) == 
              vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (IData)(vlSelf->asciicode)) 
                          == vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & (IData)(vlSelf->asciicode)) == 
              vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (IData)(vlSelf->asciicode)) 
                          == vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & (IData)(vlSelf->asciicode)) == 
              vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (IData)(vlSelf->asciicode)) 
                          == vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & (IData)(vlSelf->asciicode)) == 
              vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (IData)(vlSelf->asciicode)) 
                          == vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & (IData)(vlSelf->asciicode)) == 
              vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (IData)(vlSelf->asciicode)) 
                          == vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list
                          [0xbU]))) & vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & (IData)(vlSelf->asciicode)) == 
              vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (IData)(vlSelf->asciicode)) 
                          == vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list
                          [0xcU]))) & vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & (IData)(vlSelf->asciicode)) == 
              vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (IData)(vlSelf->asciicode)) 
                          == vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list
                          [0xdU]))) & vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & (IData)(vlSelf->asciicode)) == 
              vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (IData)(vlSelf->asciicode)) 
                          == vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list
                          [0xeU]))) & vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & (IData)(vlSelf->asciicode)) == 
              vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (IData)(vlSelf->asciicode)) 
                          == vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list
                          [0xfU]))) & vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & (IData)(vlSelf->asciicode)) == 
              vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelf->top__DOT____Vcellout__b2seg2__seg_out = 
        ((IData)(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__hit)
          ? (IData)(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__lut_out)
          : vlSelf->top__DOT__b2seg2__DOT__chars[0U]);
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0xfU & ((IData)(vlSelf->asciicode) 
                                >> 4U)) == vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__hit 
        = ((0xfU & ((IData)(vlSelf->asciicode) >> 4U)) 
           == vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & ((IData)(vlSelf->asciicode) 
                                   >> 4U)) == vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & ((IData)(vlSelf->asciicode) >> 4U)) 
              == vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & ((IData)(vlSelf->asciicode) 
                                   >> 4U)) == vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & ((IData)(vlSelf->asciicode) >> 4U)) 
              == vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & ((IData)(vlSelf->asciicode) 
                                   >> 4U)) == vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & ((IData)(vlSelf->asciicode) >> 4U)) 
              == vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & ((IData)(vlSelf->asciicode) 
                                   >> 4U)) == vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & ((IData)(vlSelf->asciicode) >> 4U)) 
              == vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & ((IData)(vlSelf->asciicode) 
                                   >> 4U)) == vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & ((IData)(vlSelf->asciicode) >> 4U)) 
              == vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & ((IData)(vlSelf->asciicode) 
                                   >> 4U)) == vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & ((IData)(vlSelf->asciicode) >> 4U)) 
              == vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & ((IData)(vlSelf->asciicode) 
                                   >> 4U)) == vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & ((IData)(vlSelf->asciicode) >> 4U)) 
              == vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & ((IData)(vlSelf->asciicode) 
                                   >> 4U)) == vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & ((IData)(vlSelf->asciicode) >> 4U)) 
              == vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & ((IData)(vlSelf->asciicode) 
                                   >> 4U)) == vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & ((IData)(vlSelf->asciicode) >> 4U)) 
              == vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & ((IData)(vlSelf->asciicode) 
                                   >> 4U)) == vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & ((IData)(vlSelf->asciicode) >> 4U)) 
              == vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & ((IData)(vlSelf->asciicode) 
                                   >> 4U)) == vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list
                          [0xbU]))) & vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & ((IData)(vlSelf->asciicode) >> 4U)) 
              == vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & ((IData)(vlSelf->asciicode) 
                                   >> 4U)) == vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list
                          [0xcU]))) & vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & ((IData)(vlSelf->asciicode) >> 4U)) 
              == vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & ((IData)(vlSelf->asciicode) 
                                   >> 4U)) == vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list
                          [0xdU]))) & vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & ((IData)(vlSelf->asciicode) >> 4U)) 
              == vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & ((IData)(vlSelf->asciicode) 
                                   >> 4U)) == vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list
                          [0xeU]))) & vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & ((IData)(vlSelf->asciicode) >> 4U)) 
              == vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & ((IData)(vlSelf->asciicode) 
                                   >> 4U)) == vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list
                          [0xfU]))) & vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & ((IData)(vlSelf->asciicode) >> 4U)) 
              == vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelf->top__DOT____Vcellout__b2seg3__seg_out = 
        ((IData)(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__hit)
          ? (IData)(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__lut_out)
          : vlSelf->top__DOT__b2seg3__DOT__chars[0U]);
    if (vlSelf->rst) {
        __Vdly__top__DOT__pkb__DOT__count = 0U;
        __Vdly__top__DOT__pkb__DOT__w_ptr = 0U;
        __Vdly__top__DOT__pkb__DOT__r_ptr = 0U;
        __Vdly__overflow = 0U;
        __Vdly__ready = 0U;
        __Vdly__top__DOT__count = 0U;
    } else {
        if (vlSelf->ready) {
            if (((IData)(vlSelf->top__DOT__pkb__DOT__w_ptr) 
                 == (7U & ((IData)(1U) + (IData)(vlSelf->top__DOT__pkb__DOT__r_ptr))))) {
                __Vdly__ready = 0U;
            }
            vlSelf->scancode = vlSelf->top__DOT__pkb__DOT__fifo
                [vlSelf->top__DOT__pkb__DOT__r_ptr];
            __Vdly__top__DOT__pkb__DOT__r_ptr = (7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__pkb__DOT__r_ptr)));
            if ((0xf0U == vlSelf->top__DOT__pkb__DOT__fifo
                 [vlSelf->top__DOT__pkb__DOT__r_ptr])) {
                __Vdly__top__DOT__count = (0xffU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__count)));
            }
        }
        if ((IData)((4U == (6U & (IData)(vlSelf->top__DOT__pkb__DOT__ps2_clk_sync))))) {
            if ((0xaU == (IData)(vlSelf->top__DOT__pkb__DOT__count))) {
                if (VL_LIKELY((((~ (IData)(vlSelf->top__DOT__pkb__DOT__buffer)) 
                                & (IData)(vlSelf->ps2_data)) 
                               & VL_REDXOR_32((0x1ffU 
                                               & ((IData)(vlSelf->top__DOT__pkb__DOT__buffer) 
                                                  >> 1U)))))) {
                    __Vdlyvval__top__DOT__pkb__DOT__fifo__v0 
                        = (0xffU & ((IData)(vlSelf->top__DOT__pkb__DOT__buffer) 
                                    >> 1U));
                    __Vdlyvset__top__DOT__pkb__DOT__fifo__v0 = 1U;
                    __Vdlyvdim0__top__DOT__pkb__DOT__fifo__v0 
                        = vlSelf->top__DOT__pkb__DOT__w_ptr;
                    __Vdly__ready = 1U;
                    __Vdly__top__DOT__pkb__DOT__w_ptr 
                        = (7U & ((IData)(1U) + (IData)(vlSelf->top__DOT__pkb__DOT__w_ptr)));
                    __Vdly__overflow = ((IData)(vlSelf->overflow) 
                                        | ((IData)(vlSelf->top__DOT__pkb__DOT__r_ptr) 
                                           == (7U & 
                                               ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__pkb__DOT__w_ptr)))));
                } else {
                    VL_WRITEF("failed\n");
                }
                __Vdly__top__DOT__pkb__DOT__count = 0U;
            } else {
                vlSelf->top__DOT__pkb__DOT____Vlvbound1 
                    = vlSelf->ps2_data;
                if (VL_LIKELY((9U >= (IData)(vlSelf->top__DOT__pkb__DOT__count)))) {
                    vlSelf->top__DOT__pkb__DOT__buffer 
                        = (((~ ((IData)(1U) << (IData)(vlSelf->top__DOT__pkb__DOT__count))) 
                            & (IData)(vlSelf->top__DOT__pkb__DOT__buffer)) 
                           | (0x3ffU & ((IData)(vlSelf->top__DOT__pkb__DOT____Vlvbound1) 
                                        << (IData)(vlSelf->top__DOT__pkb__DOT__count))));
                }
                __Vdly__top__DOT__pkb__DOT__count = 
                    (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__pkb__DOT__count)));
            }
        }
    }
    vlSelf->HEX2 = ((1U & (IData)(vlSelf->HEX2)) | 
                    ((IData)(vlSelf->top__DOT____Vcellout__b2seg2__seg_out) 
                     << 1U));
    vlSelf->HEX3 = ((1U & (IData)(vlSelf->HEX3)) | 
                    ((IData)(vlSelf->top__DOT____Vcellout__b2seg3__seg_out) 
                     << 1U));
    vlSelf->top__DOT__pkb__DOT__count = __Vdly__top__DOT__pkb__DOT__count;
    vlSelf->top__DOT__pkb__DOT__w_ptr = __Vdly__top__DOT__pkb__DOT__w_ptr;
    vlSelf->top__DOT__pkb__DOT__r_ptr = __Vdly__top__DOT__pkb__DOT__r_ptr;
    vlSelf->top__DOT__pkb__DOT__ps2_clk_sync = __Vdly__top__DOT__pkb__DOT__ps2_clk_sync;
    if (__Vdlyvset__top__DOT__pkb__DOT__fifo__v0) {
        vlSelf->top__DOT__pkb__DOT__fifo[__Vdlyvdim0__top__DOT__pkb__DOT__fifo__v0] 
            = __Vdlyvval__top__DOT__pkb__DOT__fifo__v0;
    }
    vlSelf->overflow = __Vdly__overflow;
    vlSelf->ready = __Vdly__ready;
    vlSelf->top__DOT__count = __Vdly__top__DOT__count;
    vlSelf->led = ((0xfffcU & (IData)(vlSelf->led)) 
                   | (((IData)(vlSelf->ready) << 1U) 
                      | (IData)(vlSelf->overflow)));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0xfU & (IData)(vlSelf->scancode)) 
                       == vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__hit 
        = ((0xfU & (IData)(vlSelf->scancode)) == vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (IData)(vlSelf->scancode)) 
                          == vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & (IData)(vlSelf->scancode)) == 
              vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (IData)(vlSelf->scancode)) 
                          == vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & (IData)(vlSelf->scancode)) == 
              vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (IData)(vlSelf->scancode)) 
                          == vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & (IData)(vlSelf->scancode)) == 
              vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (IData)(vlSelf->scancode)) 
                          == vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & (IData)(vlSelf->scancode)) == 
              vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (IData)(vlSelf->scancode)) 
                          == vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & (IData)(vlSelf->scancode)) == 
              vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (IData)(vlSelf->scancode)) 
                          == vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & (IData)(vlSelf->scancode)) == 
              vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (IData)(vlSelf->scancode)) 
                          == vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & (IData)(vlSelf->scancode)) == 
              vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (IData)(vlSelf->scancode)) 
                          == vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & (IData)(vlSelf->scancode)) == 
              vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (IData)(vlSelf->scancode)) 
                          == vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & (IData)(vlSelf->scancode)) == 
              vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (IData)(vlSelf->scancode)) 
                          == vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & (IData)(vlSelf->scancode)) == 
              vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (IData)(vlSelf->scancode)) 
                          == vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list
                          [0xbU]))) & vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & (IData)(vlSelf->scancode)) == 
              vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (IData)(vlSelf->scancode)) 
                          == vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list
                          [0xcU]))) & vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & (IData)(vlSelf->scancode)) == 
              vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (IData)(vlSelf->scancode)) 
                          == vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list
                          [0xdU]))) & vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & (IData)(vlSelf->scancode)) == 
              vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (IData)(vlSelf->scancode)) 
                          == vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list
                          [0xeU]))) & vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & (IData)(vlSelf->scancode)) == 
              vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (IData)(vlSelf->scancode)) 
                          == vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list
                          [0xfU]))) & vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & (IData)(vlSelf->scancode)) == 
              vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelf->top__DOT____Vcellout__b2seg0__seg_out = 
        ((IData)(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__hit)
          ? (IData)(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__lut_out)
          : vlSelf->top__DOT__b2seg0__DOT__chars[0U]);
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0xfU & ((IData)(vlSelf->scancode) 
                                >> 4U)) == vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__hit 
        = ((0xfU & ((IData)(vlSelf->scancode) >> 4U)) 
           == vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & ((IData)(vlSelf->scancode) 
                                   >> 4U)) == vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & ((IData)(vlSelf->scancode) >> 4U)) 
              == vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & ((IData)(vlSelf->scancode) 
                                   >> 4U)) == vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & ((IData)(vlSelf->scancode) >> 4U)) 
              == vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & ((IData)(vlSelf->scancode) 
                                   >> 4U)) == vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & ((IData)(vlSelf->scancode) >> 4U)) 
              == vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & ((IData)(vlSelf->scancode) 
                                   >> 4U)) == vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & ((IData)(vlSelf->scancode) >> 4U)) 
              == vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & ((IData)(vlSelf->scancode) 
                                   >> 4U)) == vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & ((IData)(vlSelf->scancode) >> 4U)) 
              == vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & ((IData)(vlSelf->scancode) 
                                   >> 4U)) == vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & ((IData)(vlSelf->scancode) >> 4U)) 
              == vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & ((IData)(vlSelf->scancode) 
                                   >> 4U)) == vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & ((IData)(vlSelf->scancode) >> 4U)) 
              == vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & ((IData)(vlSelf->scancode) 
                                   >> 4U)) == vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & ((IData)(vlSelf->scancode) >> 4U)) 
              == vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & ((IData)(vlSelf->scancode) 
                                   >> 4U)) == vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & ((IData)(vlSelf->scancode) >> 4U)) 
              == vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & ((IData)(vlSelf->scancode) 
                                   >> 4U)) == vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & ((IData)(vlSelf->scancode) >> 4U)) 
              == vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & ((IData)(vlSelf->scancode) 
                                   >> 4U)) == vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list
                          [0xbU]))) & vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & ((IData)(vlSelf->scancode) >> 4U)) 
              == vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & ((IData)(vlSelf->scancode) 
                                   >> 4U)) == vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list
                          [0xcU]))) & vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & ((IData)(vlSelf->scancode) >> 4U)) 
              == vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & ((IData)(vlSelf->scancode) 
                                   >> 4U)) == vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list
                          [0xdU]))) & vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & ((IData)(vlSelf->scancode) >> 4U)) 
              == vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & ((IData)(vlSelf->scancode) 
                                   >> 4U)) == vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list
                          [0xeU]))) & vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & ((IData)(vlSelf->scancode) >> 4U)) 
              == vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & ((IData)(vlSelf->scancode) 
                                   >> 4U)) == vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list
                          [0xfU]))) & vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & ((IData)(vlSelf->scancode) >> 4U)) 
              == vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelf->top__DOT____Vcellout__b2seg1__seg_out = 
        ((IData)(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__hit)
          ? (IData)(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__lut_out)
          : vlSelf->top__DOT__b2seg1__DOT__chars[0U]);
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0xfU & (IData)(vlSelf->top__DOT__count)) 
                       == vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__hit 
        = ((0xfU & (IData)(vlSelf->top__DOT__count)) 
           == vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (IData)(vlSelf->top__DOT__count)) 
                          == vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & (IData)(vlSelf->top__DOT__count)) 
              == vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (IData)(vlSelf->top__DOT__count)) 
                          == vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & (IData)(vlSelf->top__DOT__count)) 
              == vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (IData)(vlSelf->top__DOT__count)) 
                          == vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & (IData)(vlSelf->top__DOT__count)) 
              == vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (IData)(vlSelf->top__DOT__count)) 
                          == vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & (IData)(vlSelf->top__DOT__count)) 
              == vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (IData)(vlSelf->top__DOT__count)) 
                          == vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & (IData)(vlSelf->top__DOT__count)) 
              == vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (IData)(vlSelf->top__DOT__count)) 
                          == vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & (IData)(vlSelf->top__DOT__count)) 
              == vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (IData)(vlSelf->top__DOT__count)) 
                          == vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & (IData)(vlSelf->top__DOT__count)) 
              == vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (IData)(vlSelf->top__DOT__count)) 
                          == vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & (IData)(vlSelf->top__DOT__count)) 
              == vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (IData)(vlSelf->top__DOT__count)) 
                          == vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & (IData)(vlSelf->top__DOT__count)) 
              == vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (IData)(vlSelf->top__DOT__count)) 
                          == vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & (IData)(vlSelf->top__DOT__count)) 
              == vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (IData)(vlSelf->top__DOT__count)) 
                          == vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list
                          [0xbU]))) & vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & (IData)(vlSelf->top__DOT__count)) 
              == vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (IData)(vlSelf->top__DOT__count)) 
                          == vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list
                          [0xcU]))) & vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & (IData)(vlSelf->top__DOT__count)) 
              == vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (IData)(vlSelf->top__DOT__count)) 
                          == vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list
                          [0xdU]))) & vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & (IData)(vlSelf->top__DOT__count)) 
              == vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (IData)(vlSelf->top__DOT__count)) 
                          == vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list
                          [0xeU]))) & vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & (IData)(vlSelf->top__DOT__count)) 
              == vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (IData)(vlSelf->top__DOT__count)) 
                          == vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list
                          [0xfU]))) & vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & (IData)(vlSelf->top__DOT__count)) 
              == vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelf->top__DOT____Vcellout__b2seg4__seg_out = 
        ((IData)(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__hit)
          ? (IData)(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__lut_out)
          : vlSelf->top__DOT__b2seg4__DOT__chars[0U]);
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0xfU & ((IData)(vlSelf->top__DOT__count) 
                                >> 4U)) == vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__hit 
        = ((0xfU & ((IData)(vlSelf->top__DOT__count) 
                    >> 4U)) == vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & ((IData)(vlSelf->top__DOT__count) 
                                   >> 4U)) == vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & ((IData)(vlSelf->top__DOT__count) 
                       >> 4U)) == vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & ((IData)(vlSelf->top__DOT__count) 
                                   >> 4U)) == vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & ((IData)(vlSelf->top__DOT__count) 
                       >> 4U)) == vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & ((IData)(vlSelf->top__DOT__count) 
                                   >> 4U)) == vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & ((IData)(vlSelf->top__DOT__count) 
                       >> 4U)) == vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & ((IData)(vlSelf->top__DOT__count) 
                                   >> 4U)) == vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & ((IData)(vlSelf->top__DOT__count) 
                       >> 4U)) == vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & ((IData)(vlSelf->top__DOT__count) 
                                   >> 4U)) == vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & ((IData)(vlSelf->top__DOT__count) 
                       >> 4U)) == vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & ((IData)(vlSelf->top__DOT__count) 
                                   >> 4U)) == vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & ((IData)(vlSelf->top__DOT__count) 
                       >> 4U)) == vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & ((IData)(vlSelf->top__DOT__count) 
                                   >> 4U)) == vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & ((IData)(vlSelf->top__DOT__count) 
                       >> 4U)) == vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & ((IData)(vlSelf->top__DOT__count) 
                                   >> 4U)) == vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & ((IData)(vlSelf->top__DOT__count) 
                       >> 4U)) == vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & ((IData)(vlSelf->top__DOT__count) 
                                   >> 4U)) == vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & ((IData)(vlSelf->top__DOT__count) 
                       >> 4U)) == vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & ((IData)(vlSelf->top__DOT__count) 
                                   >> 4U)) == vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & ((IData)(vlSelf->top__DOT__count) 
                       >> 4U)) == vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & ((IData)(vlSelf->top__DOT__count) 
                                   >> 4U)) == vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list
                          [0xbU]))) & vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & ((IData)(vlSelf->top__DOT__count) 
                       >> 4U)) == vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & ((IData)(vlSelf->top__DOT__count) 
                                   >> 4U)) == vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list
                          [0xcU]))) & vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & ((IData)(vlSelf->top__DOT__count) 
                       >> 4U)) == vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & ((IData)(vlSelf->top__DOT__count) 
                                   >> 4U)) == vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list
                          [0xdU]))) & vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & ((IData)(vlSelf->top__DOT__count) 
                       >> 4U)) == vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & ((IData)(vlSelf->top__DOT__count) 
                                   >> 4U)) == vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list
                          [0xeU]))) & vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & ((IData)(vlSelf->top__DOT__count) 
                       >> 4U)) == vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & ((IData)(vlSelf->top__DOT__count) 
                                   >> 4U)) == vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list
                          [0xfU]))) & vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__hit) 
           | ((0xfU & ((IData)(vlSelf->top__DOT__count) 
                       >> 4U)) == vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelf->top__DOT____Vcellout__b2seg5__seg_out = 
        ((IData)(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__hit)
          ? (IData)(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__lut_out)
          : vlSelf->top__DOT__b2seg5__DOT__chars[0U]);
    vlSelf->HEX0 = ((1U & (IData)(vlSelf->HEX0)) | 
                    ((IData)(vlSelf->top__DOT____Vcellout__b2seg0__seg_out) 
                     << 1U));
    vlSelf->HEX1 = ((1U & (IData)(vlSelf->HEX1)) | 
                    ((IData)(vlSelf->top__DOT____Vcellout__b2seg1__seg_out) 
                     << 1U));
    vlSelf->HEX4 = ((1U & (IData)(vlSelf->HEX4)) | 
                    ((IData)(vlSelf->top__DOT____Vcellout__b2seg4__seg_out) 
                     << 1U));
    vlSelf->HEX5 = ((1U & (IData)(vlSelf->HEX5)) | 
                    ((IData)(vlSelf->top__DOT____Vcellout__b2seg5__seg_out) 
                     << 1U));
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vtop___024root___change_request_1(Vtop___024root* vlSelf);

VL_INLINE_OPT QData Vtop___024root___change_request(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request\n"); );
    // Body
    return (Vtop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop___024root___change_request_1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->clrn & 0xfeU))) {
        Verilated::overWidthError("clrn");}
    if (VL_UNLIKELY((vlSelf->ps2_clk & 0xfeU))) {
        Verilated::overWidthError("ps2_clk");}
    if (VL_UNLIKELY((vlSelf->ps2_data & 0xfeU))) {
        Verilated::overWidthError("ps2_data");}
    if (VL_UNLIKELY((vlSelf->we & 0xfeU))) {
        Verilated::overWidthError("we");}
    if (VL_UNLIKELY((vlSelf->btn & 0xf0U))) {
        Verilated::overWidthError("btn");}
}
#endif  // VL_DEBUG
