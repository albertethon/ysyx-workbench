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
    vlSelf->top__DOT__alu1__DOT__Cin = (((1U == (IData)(vlSelf->btn)) 
                                         | (6U == (IData)(vlSelf->btn))) 
                                        | (7U == (IData)(vlSelf->btn)));
    vlSelf->top__DOT__alu1__DOT__t_no_Cin = (0xfU & 
                                             ((- (IData)((IData)(vlSelf->top__DOT__alu1__DOT__Cin))) 
                                              ^ (IData)(vlSelf->in_b)));
    vlSelf->top__DOT__alu1__DOT__Result = (0xfU & (
                                                   ((IData)(vlSelf->in_a) 
                                                    + (IData)(vlSelf->top__DOT__alu1__DOT__t_no_Cin)) 
                                                   + (IData)(vlSelf->top__DOT__alu1__DOT__Cin)));
    vlSelf->top__DOT__alu1__DOT____Vcellinp__i0____pinNumber3 
        = (0x400000000000ULL | (((QData)((IData)(vlSelf->top__DOT__alu1__DOT__Result)) 
                                 << 0x31U) | (((QData)((IData)(
                                                               (0x40c2050U 
                                                                | (((IData)(vlSelf->top__DOT__alu1__DOT__Result) 
                                                                    << 0x1cU) 
                                                                   | ((0x1e00000U 
                                                                       & ((~ (IData)(vlSelf->in_a)) 
                                                                          << 0x15U)) 
                                                                      | ((((IData)(vlSelf->in_a) 
                                                                           & (IData)(vlSelf->in_b)) 
                                                                          << 0xeU) 
                                                                         | ((((IData)(vlSelf->in_a) 
                                                                              | (IData)(vlSelf->in_b)) 
                                                                             << 7U) 
                                                                            | ((IData)(vlSelf->in_a) 
                                                                               ^ (IData)(vlSelf->in_b))))))))) 
                                               << 0xeU) 
                                              | (QData)((IData)(
                                                                (0x3070U 
                                                                 | ((0x80U 
                                                                     & (((((1U 
                                                                            & ((IData)(vlSelf->in_a) 
                                                                               >> 3U)) 
                                                                           == 
                                                                           (1U 
                                                                            & ((IData)(vlSelf->top__DOT__alu1__DOT__t_no_Cin) 
                                                                               >> 3U))) 
                                                                          & ((1U 
                                                                              & ((IData)(vlSelf->top__DOT__alu1__DOT__Result) 
                                                                                >> 3U)) 
                                                                             != 
                                                                             (1U 
                                                                              & ((IData)(vlSelf->in_a) 
                                                                                >> 3U)))) 
                                                                         << 7U) 
                                                                        ^ 
                                                                        (0xffffff80U 
                                                                         & ((IData)(vlSelf->top__DOT__alu1__DOT__Result) 
                                                                            << 4U)))) 
                                                                    | (1U 
                                                                       & (~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->top__DOT__alu1__DOT__Result))))))))))));
    vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__pair_list[0U] 
        = (0x7fU & (IData)(vlSelf->top__DOT__alu1__DOT____Vcellinp__i0____pinNumber3));
    vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__pair_list[1U] 
        = (0x7fU & (IData)((vlSelf->top__DOT__alu1__DOT____Vcellinp__i0____pinNumber3 
                            >> 7U)));
    vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__pair_list[2U] 
        = (0x7fU & (IData)((vlSelf->top__DOT__alu1__DOT____Vcellinp__i0____pinNumber3 
                            >> 0xeU)));
    vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__pair_list[3U] 
        = (0x7fU & (IData)((vlSelf->top__DOT__alu1__DOT____Vcellinp__i0____pinNumber3 
                            >> 0x15U)));
    vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__pair_list[4U] 
        = (0x7fU & (IData)((vlSelf->top__DOT__alu1__DOT____Vcellinp__i0____pinNumber3 
                            >> 0x1cU)));
    vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__pair_list[5U] 
        = (0x7fU & (IData)((vlSelf->top__DOT__alu1__DOT____Vcellinp__i0____pinNumber3 
                            >> 0x23U)));
    vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__pair_list[6U] 
        = (0x7fU & (IData)((vlSelf->top__DOT__alu1__DOT____Vcellinp__i0____pinNumber3 
                            >> 0x2aU)));
    vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__pair_list[7U] 
        = (0x7fU & (IData)((vlSelf->top__DOT__alu1__DOT____Vcellinp__i0____pinNumber3 
                            >> 0x31U)));
    vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__data_list[0U] 
        = (0xfU & vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__data_list[1U] 
        = (0xfU & vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__data_list[2U] 
        = (0xfU & vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__data_list[3U] 
        = (0xfU & vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__data_list[4U] 
        = (0xfU & vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__data_list[5U] 
        = (0xfU & vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__pair_list
           [5U]);
    vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__data_list[6U] 
        = (0xfU & vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__pair_list
           [6U]);
    vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__data_list[7U] 
        = (0xfU & vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__pair_list
           [7U]);
    vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__key_list[0U] 
        = (7U & (vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__pair_list
                 [0U] >> 4U));
    vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__key_list[1U] 
        = (7U & (vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__pair_list
                 [1U] >> 4U));
    vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__key_list[2U] 
        = (7U & (vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__pair_list
                 [2U] >> 4U));
    vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__key_list[3U] 
        = (7U & (vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__pair_list
                 [3U] >> 4U));
    vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__key_list[4U] 
        = (7U & (vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__pair_list
                 [4U] >> 4U));
    vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__key_list[5U] 
        = (7U & (vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__pair_list
                 [5U] >> 4U));
    vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__key_list[6U] 
        = (7U & (vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__pair_list
                 [6U] >> 4U));
    vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__key_list[7U] 
        = (7U & (vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__pair_list
                 [7U] >> 4U));
    vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->btn) == vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->btn) == vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->btn) == vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->btn) == vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->btn) == vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->btn) == vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->btn) == vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->btn) == vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->btn) == vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->btn) == vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->btn) == vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->btn) == vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->btn) == vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->btn) == vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->btn) == vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->btn) == vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->out = vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__lut_out;
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    Vtop___024root___combo__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
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
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
    if (VL_UNLIKELY((vlSelf->sw & 0xfc00U))) {
        Verilated::overWidthError("sw");}
    if (VL_UNLIKELY((vlSelf->in_a & 0xf0U))) {
        Verilated::overWidthError("in_a");}
    if (VL_UNLIKELY((vlSelf->in_b & 0xf0U))) {
        Verilated::overWidthError("in_b");}
    if (VL_UNLIKELY((vlSelf->btn & 0xf8U))) {
        Verilated::overWidthError("btn");}
}
#endif  // VL_DEBUG
