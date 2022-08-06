// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

//==========

VL_INLINE_OPT void Vtop___024root___sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__3\n"); );
    // Variables
    CData/*2:0*/ __Vdly__top__DOT__pkb__DOT__ps2_clk_sync;
    CData/*3:0*/ __Vdly__top__DOT__pkb__DOT__count;
    CData/*2:0*/ __Vdly__top__DOT__pkb__DOT__r_ptr;
    CData/*0:0*/ __Vdly__overflow;
    CData/*0:0*/ __Vdly__ready;
    CData/*7:0*/ __Vdly__top__DOT__count;
    // Body
    __Vdly__top__DOT__pkb__DOT__ps2_clk_sync = vlSelf->top__DOT__pkb__DOT__ps2_clk_sync;
    __Vdly__top__DOT__pkb__DOT__r_ptr = vlSelf->top__DOT__pkb__DOT__r_ptr;
    __Vdly__top__DOT__pkb__DOT__count = vlSelf->top__DOT__pkb__DOT__count;
    __Vdly__ready = vlSelf->ready;
    __Vdly__overflow = vlSelf->overflow;
    __Vdly__top__DOT__count = vlSelf->top__DOT__count;
    __Vdly__top__DOT__pkb__DOT__ps2_clk_sync = ((6U 
                                                 & ((IData)(vlSelf->top__DOT__pkb__DOT__ps2_clk_sync) 
                                                    << 1U)) 
                                                | (IData)(vlSelf->ps2_clk));
    if (VL_UNLIKELY(((IData)(vlSelf->ready) & ((IData)(vlSelf->top__DOT__vram__DOT__oldaddr) 
                                               != (IData)(vlSelf->top__DOT__count))))) {
        vlSelf->top__DOT__vram__DOT__all_cnt = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__vram__DOT__all_cnt)));
        vlSelf->top__DOT__vram__DOT__line_cnt = (0xfffU 
                                                 & ((0U 
                                                     == 
                                                     VL_MODDIV_III(32, 
                                                                   ((IData)(1U) 
                                                                    + (IData)(vlSelf->top__DOT__vram__DOT__all_cnt)), (IData)(0x47U)))
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__vram__DOT__line_cnt))
                                                     : (IData)(vlSelf->top__DOT__vram__DOT__line_cnt)));
        vlSelf->top__DOT__vram__DOT__oldaddr = vlSelf->top__DOT__count;
        vlSelf->top__DOT__vram__DOT__key_addr = (0xfffU 
                                                 & (((((IData)(1U) 
                                                       + (IData)(vlSelf->top__DOT__vram__DOT__line_cnt)) 
                                                      << 7U) 
                                                     + (IData)(vlSelf->top__DOT__vram__DOT__all_cnt)) 
                                                    - 
                                                    ((IData)(0x46U) 
                                                     * (IData)(vlSelf->top__DOT__vram__DOT__line_cnt))));
        vlSelf->top__DOT__vram__DOT__key_ram[vlSelf->top__DOT__vram__DOT__key_addr] 
            = vlSelf->top__DOT__vram__DOT__ram[vlSelf->scancode];
        VL_WRITEF("key_ram[%x]:%x\n",8,vlSelf->top__DOT__count,
                  8,vlSelf->top__DOT__vram__DOT__key_ram
                  [vlSelf->top__DOT__vram__DOT__key_addr]);
    } else {
        vlSelf->asciicode = vlSelf->top__DOT__vram__DOT__ram
            [vlSelf->scancode];
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
        vlSelf->top__DOT__pkb__DOT__w_ptr = 0U;
        __Vdly__top__DOT__pkb__DOT__count = 0U;
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
            if (((0xf0U != vlSelf->top__DOT__pkb__DOT__fifo
                  [vlSelf->top__DOT__pkb__DOT__r_ptr]) 
                 & (0xf0U != vlSelf->top__DOT__pkb__DOT__fifo
                    [(7U & ((IData)(vlSelf->top__DOT__pkb__DOT__r_ptr) 
                            - (IData)(1U)))]))) {
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
                    vlSelf->top__DOT__pkb__DOT__fifo[vlSelf->top__DOT__pkb__DOT__w_ptr] 
                        = (0xffU & ((IData)(vlSelf->top__DOT__pkb__DOT__buffer) 
                                    >> 1U));
                    vlSelf->top__DOT__pkb__DOT__w_ptr 
                        = (7U & ((IData)(1U) + (IData)(vlSelf->top__DOT__pkb__DOT__w_ptr)));
                    __Vdly__ready = 1U;
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
    vlSelf->top__DOT__pkb__DOT__r_ptr = __Vdly__top__DOT__pkb__DOT__r_ptr;
    vlSelf->top__DOT__pkb__DOT__ps2_clk_sync = __Vdly__top__DOT__pkb__DOT__ps2_clk_sync;
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

VL_INLINE_OPT void Vtop___024root___combo__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__4\n"); );
    // Body
    vlSelf->VGA_CLK = vlSelf->clk;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__5\n"); );
    // Variables
    CData/*3:0*/ __Vdly__top__DOT__vgac__DOT__y_ascii;
    CData/*4:0*/ __Vdly__top__DOT__vgac__DOT__h_count_n;
    CData/*3:0*/ __Vdly__top__DOT__vgac__DOT__x_ascii;
    CData/*6:0*/ __Vdly__top__DOT__vgac__DOT__v_count_n;
    SData/*9:0*/ __Vdly__top__DOT__vgac__DOT__y_cnt;
    SData/*9:0*/ __Vdly__top__DOT__vgac__DOT__x_cnt;
    // Body
    __Vdly__top__DOT__vgac__DOT__x_cnt = vlSelf->top__DOT__vgac__DOT__x_cnt;
    __Vdly__top__DOT__vgac__DOT__y_cnt = vlSelf->top__DOT__vgac__DOT__y_cnt;
    __Vdly__top__DOT__vgac__DOT__x_ascii = vlSelf->top__DOT__vgac__DOT__x_ascii;
    __Vdly__top__DOT__vgac__DOT__v_count_n = vlSelf->top__DOT__vgac__DOT__v_count_n;
    __Vdly__top__DOT__vgac__DOT__h_count_n = vlSelf->top__DOT__vgac__DOT__h_count_n;
    __Vdly__top__DOT__vgac__DOT__y_ascii = vlSelf->top__DOT__vgac__DOT__y_ascii;
    if (vlSelf->rst) {
        __Vdly__top__DOT__vgac__DOT__y_cnt = 1U;
        __Vdly__top__DOT__vgac__DOT__x_cnt = 1U;
    } else if ((0x320U == (IData)(vlSelf->top__DOT__vgac__DOT__x_cnt))) {
        __Vdly__top__DOT__vgac__DOT__y_cnt = ((0x20dU 
                                               == (IData)(vlSelf->top__DOT__vgac__DOT__y_cnt))
                                               ? 1U
                                               : (0x3ffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__vgac__DOT__y_cnt))));
        __Vdly__top__DOT__vgac__DOT__x_cnt = 1U;
    } else {
        __Vdly__top__DOT__vgac__DOT__x_cnt = (0x3ffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__vgac__DOT__x_cnt)));
    }
    if (vlSelf->rst) {
        __Vdly__top__DOT__vgac__DOT__x_ascii = 0U;
        __Vdly__top__DOT__vgac__DOT__v_count_n = 0U;
    } else if ((0x306U == (IData)(vlSelf->top__DOT__vgac__DOT__x_cnt))) {
        __Vdly__top__DOT__vgac__DOT__x_ascii = 0U;
        __Vdly__top__DOT__vgac__DOT__v_count_n = 0U;
    } else if (((0x90U < (IData)(vlSelf->top__DOT__vgac__DOT__x_cnt)) 
                & (0x306U > (IData)(vlSelf->top__DOT__vgac__DOT__x_cnt)))) {
        if ((8U == (IData)(vlSelf->top__DOT__vgac__DOT__x_ascii))) {
            __Vdly__top__DOT__vgac__DOT__v_count_n 
                = (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__vgac__DOT__v_count_n)));
            __Vdly__top__DOT__vgac__DOT__x_ascii = 0U;
        } else {
            __Vdly__top__DOT__vgac__DOT__x_ascii = 
                (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__vgac__DOT__x_ascii)));
        }
    }
    if (vlSelf->rst) {
        __Vdly__top__DOT__vgac__DOT__y_ascii = 0U;
        __Vdly__top__DOT__vgac__DOT__h_count_n = 0U;
    } else if ((0x306U == (IData)(vlSelf->top__DOT__vgac__DOT__x_cnt))) {
        if ((0x203U == (IData)(vlSelf->top__DOT__vgac__DOT__y_cnt))) {
            __Vdly__top__DOT__vgac__DOT__y_ascii = 0U;
            __Vdly__top__DOT__vgac__DOT__h_count_n = 0U;
        } else if ((((0xfU == (IData)(vlSelf->top__DOT__vgac__DOT__y_ascii)) 
                     & (0x23U < (IData)(vlSelf->top__DOT__vgac__DOT__y_cnt))) 
                    & (0x203U > (IData)(vlSelf->top__DOT__vgac__DOT__y_cnt)))) {
            __Vdly__top__DOT__vgac__DOT__h_count_n 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__vgac__DOT__h_count_n)));
            __Vdly__top__DOT__vgac__DOT__y_ascii = 0U;
        } else {
            __Vdly__top__DOT__vgac__DOT__y_ascii = 
                (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__vgac__DOT__y_ascii)));
        }
    }
    vlSelf->top__DOT__vgac__DOT__x_ascii = __Vdly__top__DOT__vgac__DOT__x_ascii;
    vlSelf->top__DOT__vgac__DOT__v_count_n = __Vdly__top__DOT__vgac__DOT__v_count_n;
    vlSelf->top__DOT__vgac__DOT__y_cnt = __Vdly__top__DOT__vgac__DOT__y_cnt;
    vlSelf->top__DOT__vgac__DOT__x_cnt = __Vdly__top__DOT__vgac__DOT__x_cnt;
    vlSelf->top__DOT__vgac__DOT__y_ascii = __Vdly__top__DOT__vgac__DOT__y_ascii;
    vlSelf->top__DOT__vgac__DOT__h_count_n = __Vdly__top__DOT__vgac__DOT__h_count_n;
    vlSelf->VGA_VSYNC = (2U < (IData)(vlSelf->top__DOT__vgac__DOT__y_cnt));
    vlSelf->VGA_HSYNC = (0x60U < (IData)(vlSelf->top__DOT__vgac__DOT__x_cnt));
    vlSelf->VGA_VALID = (((0x90U < (IData)(vlSelf->top__DOT__vgac__DOT__x_cnt)) 
                          & (0x310U >= (IData)(vlSelf->top__DOT__vgac__DOT__x_cnt))) 
                         & ((0x23U < (IData)(vlSelf->top__DOT__vgac__DOT__y_cnt)) 
                            & (0x203U >= (IData)(vlSelf->top__DOT__vgac__DOT__y_cnt))));
}

VL_INLINE_OPT void Vtop___024root___multiclk__TOP__6(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___multiclk__TOP__6\n"); );
    // Body
    vlSelf->top__DOT__asci2dot0__DOT__y_dot = (0xfffU 
                                               & ((vlSelf->top__DOT__vram__DOT__key_ram
                                                   [
                                                   (((IData)(vlSelf->top__DOT__vgac__DOT__h_count_n) 
                                                     << 7U) 
                                                    | (IData)(vlSelf->top__DOT__vgac__DOT__v_count_n))] 
                                                   << 4U) 
                                                  + (IData)(vlSelf->top__DOT__vgac__DOT__y_ascii)));
    vlSelf->top__DOT__vga_data = (((8U >= (IData)(vlSelf->top__DOT__vgac__DOT__x_ascii)) 
                                   & (vlSelf->top__DOT__asci2dot0__DOT__lattice
                                      [vlSelf->top__DOT__asci2dot0__DOT__y_dot] 
                                      >> (IData)(vlSelf->top__DOT__vgac__DOT__x_ascii)))
                                   ? 0xffffffU : 0U);
    vlSelf->VGA_R = (0xffU & (vlSelf->top__DOT__vga_data 
                              >> 0x10U));
    vlSelf->VGA_G = (0xffU & (vlSelf->top__DOT__vga_data 
                              >> 8U));
    vlSelf->VGA_B = (0xffU & vlSelf->top__DOT__vga_data);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vtop___024root___combo__TOP__4(vlSelf);
    if ((((IData)(vlSelf->VGA_CLK) & (~ (IData)(vlSelf->__Vclklast__TOP__VGA_CLK))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vtop___024root___sequent__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (((((IData)(vlSelf->VGA_CLK) & (~ (IData)(vlSelf->__Vclklast__TOP__VGA_CLK))) 
          | ((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vtop___024root___multiclk__TOP__6(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__VGA_CLK = vlSelf->VGA_CLK;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
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
