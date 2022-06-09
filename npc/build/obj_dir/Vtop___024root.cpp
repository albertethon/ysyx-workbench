// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

//==========

VL_INLINE_OPT void Vtop___024root___sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*7:0*/ __Vdly__top__DOT____Vcellout__light1__led;
    SData/*15:0*/ __Vdly__top__DOT__light1__DOT__count;
    // Body
    __Vdly__top__DOT__light1__DOT__count = vlSelf->top__DOT__light1__DOT__count;
    __Vdly__top__DOT____Vcellout__light1__led = vlSelf->top__DOT____Vcellout__light1__led;
    if (vlSelf->rst) {
        __Vdly__top__DOT____Vcellout__light1__led = 1U;
        __Vdly__top__DOT__light1__DOT__count = 0U;
    } else {
        if ((0U == (IData)(vlSelf->top__DOT__light1__DOT__count))) {
            __Vdly__top__DOT____Vcellout__light1__led 
                = ((0xfeU & ((IData)(vlSelf->top__DOT____Vcellout__light1__led) 
                             << 1U)) | (1U & ((IData)(vlSelf->top__DOT____Vcellout__light1__led) 
                                              >> 7U)));
        }
        __Vdly__top__DOT__light1__DOT__count = ((0xc350U 
                                                 <= (IData)(vlSelf->top__DOT__light1__DOT__count))
                                                 ? 0U
                                                 : 
                                                (0xffffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__light1__DOT__count))));
    }
    vlSelf->top__DOT__light1__DOT__count = __Vdly__top__DOT__light1__DOT__count;
    vlSelf->top__DOT____Vcellout__light1__led = __Vdly__top__DOT____Vcellout__light1__led;
    vlSelf->led = ((0xffU & (IData)(vlSelf->led)) | 
                   ((IData)(vlSelf->top__DOT____Vcellout__light1__led) 
                    << 8U));
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__2\n"); );
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

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__1(vlSelf);
    }
    Vtop___024root___combo__TOP__2(vlSelf);
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
    if (VL_UNLIKELY((vlSelf->sw & 0xfc00U))) {
        Verilated::overWidthError("sw");}
}
#endif  // VL_DEBUG
