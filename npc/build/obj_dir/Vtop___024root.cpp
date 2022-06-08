// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

//==========

VL_INLINE_OPT void Vtop___024root___combo__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->led = ((0xfffeU & (IData)(vlSelf->led)) 
                   | (1U & (((IData)(vlSelf->sw) >> 1U) 
                            ^ (IData)(vlSelf->sw))));
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__3\n"); );
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
        __Vdly__top__DOT__light1__DOT__count = ((0x2710U 
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

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    Vtop___024root___combo__TOP__1(vlSelf);
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__3(vlSelf);
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
    if (VL_UNLIKELY((vlSelf->sw & 0xfcU))) {
        Verilated::overWidthError("sw");}
}
#endif  // VL_DEBUG
