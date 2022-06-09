// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

//==========


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(Vtop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtop___024root::~Vtop___024root() {
}

void Vtop___024root___settle__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__3\n"); );
    // Variables
    CData/*1:0*/ top__DOT____Vcellout__mux41_2test__out;
    CData/*1:0*/ top__DOT__mux41_2test__DOT__i0__DOT__i0__DOT__lut_out;
    CData/*0:0*/ top__DOT__mux41_2test__DOT__i0__DOT__i0__DOT__hit;
    SData/*15:0*/ top__DOT__mux41_2test__DOT____Vcellinp__i0____pinNumber4;
    // Body
    top__DOT__mux41_2test__DOT____Vcellinp__i0____pinNumber4 
        = (0x48cU | ((0x3000U & ((IData)(vlSelf->sw) 
                                 << 0xaU)) | ((0x300U 
                                               & ((IData)(vlSelf->sw) 
                                                  << 4U)) 
                                              | ((0x30U 
                                                  & ((IData)(vlSelf->sw) 
                                                     >> 2U)) 
                                                 | (3U 
                                                    & ((IData)(vlSelf->sw) 
                                                       >> 8U))))));
    vlSelf->led = ((0xffU & (IData)(vlSelf->led)) | 
                   ((IData)(vlSelf->top__DOT____Vcellout__light1__led) 
                    << 8U));
    vlSelf->top__DOT__mux41_2test__DOT__i0__DOT__i0__DOT__pair_list[0U] 
        = (0xfU & (IData)(top__DOT__mux41_2test__DOT____Vcellinp__i0____pinNumber4));
    vlSelf->top__DOT__mux41_2test__DOT__i0__DOT__i0__DOT__pair_list[1U] 
        = (0xfU & ((IData)(top__DOT__mux41_2test__DOT____Vcellinp__i0____pinNumber4) 
                   >> 4U));
    vlSelf->top__DOT__mux41_2test__DOT__i0__DOT__i0__DOT__pair_list[2U] 
        = (0xfU & ((IData)(top__DOT__mux41_2test__DOT____Vcellinp__i0____pinNumber4) 
                   >> 8U));
    vlSelf->top__DOT__mux41_2test__DOT__i0__DOT__i0__DOT__pair_list[3U] 
        = (0xfU & ((IData)(top__DOT__mux41_2test__DOT____Vcellinp__i0____pinNumber4) 
                   >> 0xcU));
    vlSelf->top__DOT__mux41_2test__DOT__i0__DOT__i0__DOT__data_list[0U] 
        = (3U & vlSelf->top__DOT__mux41_2test__DOT__i0__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->top__DOT__mux41_2test__DOT__i0__DOT__i0__DOT__key_list[0U] 
        = (3U & (vlSelf->top__DOT__mux41_2test__DOT__i0__DOT__i0__DOT__pair_list
                 [0U] >> 2U));
    vlSelf->top__DOT__mux41_2test__DOT__i0__DOT__i0__DOT__data_list[1U] 
        = (3U & vlSelf->top__DOT__mux41_2test__DOT__i0__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->top__DOT__mux41_2test__DOT__i0__DOT__i0__DOT__key_list[1U] 
        = (3U & (vlSelf->top__DOT__mux41_2test__DOT__i0__DOT__i0__DOT__pair_list
                 [1U] >> 2U));
    vlSelf->top__DOT__mux41_2test__DOT__i0__DOT__i0__DOT__data_list[2U] 
        = (3U & vlSelf->top__DOT__mux41_2test__DOT__i0__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->top__DOT__mux41_2test__DOT__i0__DOT__i0__DOT__key_list[2U] 
        = (3U & (vlSelf->top__DOT__mux41_2test__DOT__i0__DOT__i0__DOT__pair_list
                 [2U] >> 2U));
    vlSelf->top__DOT__mux41_2test__DOT__i0__DOT__i0__DOT__data_list[3U] 
        = (3U & vlSelf->top__DOT__mux41_2test__DOT__i0__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->top__DOT__mux41_2test__DOT__i0__DOT__i0__DOT__key_list[3U] 
        = (3U & (vlSelf->top__DOT__mux41_2test__DOT__i0__DOT__i0__DOT__pair_list
                 [3U] >> 2U));
    top__DOT__mux41_2test__DOT__i0__DOT__i0__DOT__lut_out 
        = ((- (IData)(((3U & (IData)(vlSelf->sw)) == 
                       vlSelf->top__DOT__mux41_2test__DOT__i0__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__mux41_2test__DOT__i0__DOT__i0__DOT__data_list
           [0U]);
    top__DOT__mux41_2test__DOT__i0__DOT__i0__DOT__hit 
        = ((3U & (IData)(vlSelf->sw)) == vlSelf->top__DOT__mux41_2test__DOT__i0__DOT__i0__DOT__key_list
           [0U]);
    top__DOT__mux41_2test__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(top__DOT__mux41_2test__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((3U & (IData)(vlSelf->sw)) 
                          == vlSelf->top__DOT__mux41_2test__DOT__i0__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__mux41_2test__DOT__i0__DOT__i0__DOT__data_list
              [1U]));
    top__DOT__mux41_2test__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(top__DOT__mux41_2test__DOT__i0__DOT__i0__DOT__hit) 
           | ((3U & (IData)(vlSelf->sw)) == vlSelf->top__DOT__mux41_2test__DOT__i0__DOT__i0__DOT__key_list
              [1U]));
    top__DOT__mux41_2test__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(top__DOT__mux41_2test__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((3U & (IData)(vlSelf->sw)) 
                          == vlSelf->top__DOT__mux41_2test__DOT__i0__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__mux41_2test__DOT__i0__DOT__i0__DOT__data_list
              [2U]));
    top__DOT__mux41_2test__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(top__DOT__mux41_2test__DOT__i0__DOT__i0__DOT__hit) 
           | ((3U & (IData)(vlSelf->sw)) == vlSelf->top__DOT__mux41_2test__DOT__i0__DOT__i0__DOT__key_list
              [2U]));
    top__DOT__mux41_2test__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(top__DOT__mux41_2test__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((3U & (IData)(vlSelf->sw)) 
                          == vlSelf->top__DOT__mux41_2test__DOT__i0__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__mux41_2test__DOT__i0__DOT__i0__DOT__data_list
              [3U]));
    top__DOT__mux41_2test__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(top__DOT__mux41_2test__DOT__i0__DOT__i0__DOT__hit) 
           | ((3U & (IData)(vlSelf->sw)) == vlSelf->top__DOT__mux41_2test__DOT__i0__DOT__i0__DOT__key_list
              [3U]));
    top__DOT____Vcellout__mux41_2test__out = ((IData)(top__DOT__mux41_2test__DOT__i0__DOT__i0__DOT__hit)
                                               ? (IData)(top__DOT__mux41_2test__DOT__i0__DOT__i0__DOT__lut_out)
                                               : 0U);
    vlSelf->led = ((0xfffcU & (IData)(vlSelf->led)) 
                   | (IData)(top__DOT____Vcellout__mux41_2test__out));
}

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__3(vlSelf);
}

void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rst = 0;
    vlSelf->sw = 0;
    vlSelf->led = 0;
    vlSelf->top__DOT____Vcellout__light1__led = 0;
    vlSelf->top__DOT__light1__DOT__count = 0;
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__mux41_2test__DOT__i0__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__mux41_2test__DOT__i0__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__mux41_2test__DOT__i0__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
}
