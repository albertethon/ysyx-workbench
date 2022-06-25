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

void Vtop___024root___settle__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__1\n"); );
    // Variables
    VlWide<6>/*191:0*/ __Vtemp13;
    VlWide<6>/*191:0*/ __Vtemp28;
    VlWide<6>/*191:0*/ __Vtemp43;
    VlWide<6>/*191:0*/ __Vtemp58;
    VlWide<6>/*191:0*/ __Vtemp73;
    VlWide<6>/*191:0*/ __Vtemp88;
    // Body
    vlSelf->top__DOT__b2seg0__DOT__chars[0U] = 1U;
    vlSelf->top__DOT__b2seg0__DOT__chars[1U] = 0x4fU;
    vlSelf->top__DOT__b2seg0__DOT__chars[2U] = 0x12U;
    vlSelf->top__DOT__b2seg0__DOT__chars[3U] = 6U;
    vlSelf->top__DOT__b2seg0__DOT__chars[4U] = 0x4cU;
    vlSelf->top__DOT__b2seg0__DOT__chars[5U] = 0x24U;
    vlSelf->top__DOT__b2seg0__DOT__chars[6U] = 0x20U;
    vlSelf->top__DOT__b2seg0__DOT__chars[7U] = 0xfU;
    vlSelf->top__DOT__b2seg0__DOT__chars[8U] = 0U;
    vlSelf->top__DOT__b2seg0__DOT__chars[9U] = 4U;
    vlSelf->top__DOT__b2seg0__DOT__chars[0xaU] = 8U;
    vlSelf->top__DOT__b2seg0__DOT__chars[0xbU] = 0x60U;
    vlSelf->top__DOT__b2seg0__DOT__chars[0xcU] = 0x31U;
    vlSelf->top__DOT__b2seg0__DOT__chars[0xdU] = 0x42U;
    vlSelf->top__DOT__b2seg0__DOT__chars[0xeU] = 0x30U;
    vlSelf->top__DOT__b2seg0__DOT__chars[0xfU] = 0x38U;
    vlSelf->top__DOT__b2seg1__DOT__chars[0U] = 1U;
    vlSelf->top__DOT__b2seg1__DOT__chars[1U] = 0x4fU;
    vlSelf->top__DOT__b2seg1__DOT__chars[2U] = 0x12U;
    vlSelf->top__DOT__b2seg1__DOT__chars[3U] = 6U;
    vlSelf->top__DOT__b2seg1__DOT__chars[4U] = 0x4cU;
    vlSelf->top__DOT__b2seg1__DOT__chars[5U] = 0x24U;
    vlSelf->top__DOT__b2seg1__DOT__chars[6U] = 0x20U;
    vlSelf->top__DOT__b2seg1__DOT__chars[7U] = 0xfU;
    vlSelf->top__DOT__b2seg1__DOT__chars[8U] = 0U;
    vlSelf->top__DOT__b2seg1__DOT__chars[9U] = 4U;
    vlSelf->top__DOT__b2seg1__DOT__chars[0xaU] = 8U;
    vlSelf->top__DOT__b2seg1__DOT__chars[0xbU] = 0x60U;
    vlSelf->top__DOT__b2seg1__DOT__chars[0xcU] = 0x31U;
    vlSelf->top__DOT__b2seg1__DOT__chars[0xdU] = 0x42U;
    vlSelf->top__DOT__b2seg1__DOT__chars[0xeU] = 0x30U;
    vlSelf->top__DOT__b2seg1__DOT__chars[0xfU] = 0x38U;
    vlSelf->top__DOT__b2seg2__DOT__chars[0U] = 1U;
    vlSelf->top__DOT__b2seg2__DOT__chars[1U] = 0x4fU;
    vlSelf->top__DOT__b2seg2__DOT__chars[2U] = 0x12U;
    vlSelf->top__DOT__b2seg2__DOT__chars[3U] = 6U;
    vlSelf->top__DOT__b2seg2__DOT__chars[4U] = 0x4cU;
    vlSelf->top__DOT__b2seg2__DOT__chars[5U] = 0x24U;
    vlSelf->top__DOT__b2seg2__DOT__chars[6U] = 0x20U;
    vlSelf->top__DOT__b2seg2__DOT__chars[7U] = 0xfU;
    vlSelf->top__DOT__b2seg2__DOT__chars[8U] = 0U;
    vlSelf->top__DOT__b2seg2__DOT__chars[9U] = 4U;
    vlSelf->top__DOT__b2seg2__DOT__chars[0xaU] = 8U;
    vlSelf->top__DOT__b2seg2__DOT__chars[0xbU] = 0x60U;
    vlSelf->top__DOT__b2seg2__DOT__chars[0xcU] = 0x31U;
    vlSelf->top__DOT__b2seg2__DOT__chars[0xdU] = 0x42U;
    vlSelf->top__DOT__b2seg2__DOT__chars[0xeU] = 0x30U;
    vlSelf->top__DOT__b2seg2__DOT__chars[0xfU] = 0x38U;
    vlSelf->top__DOT__b2seg3__DOT__chars[0U] = 1U;
    vlSelf->top__DOT__b2seg3__DOT__chars[1U] = 0x4fU;
    vlSelf->top__DOT__b2seg3__DOT__chars[2U] = 0x12U;
    vlSelf->top__DOT__b2seg3__DOT__chars[3U] = 6U;
    vlSelf->top__DOT__b2seg3__DOT__chars[4U] = 0x4cU;
    vlSelf->top__DOT__b2seg3__DOT__chars[5U] = 0x24U;
    vlSelf->top__DOT__b2seg3__DOT__chars[6U] = 0x20U;
    vlSelf->top__DOT__b2seg3__DOT__chars[7U] = 0xfU;
    vlSelf->top__DOT__b2seg3__DOT__chars[8U] = 0U;
    vlSelf->top__DOT__b2seg3__DOT__chars[9U] = 4U;
    vlSelf->top__DOT__b2seg3__DOT__chars[0xaU] = 8U;
    vlSelf->top__DOT__b2seg3__DOT__chars[0xbU] = 0x60U;
    vlSelf->top__DOT__b2seg3__DOT__chars[0xcU] = 0x31U;
    vlSelf->top__DOT__b2seg3__DOT__chars[0xdU] = 0x42U;
    vlSelf->top__DOT__b2seg3__DOT__chars[0xeU] = 0x30U;
    vlSelf->top__DOT__b2seg3__DOT__chars[0xfU] = 0x38U;
    vlSelf->top__DOT__b2seg4__DOT__chars[0U] = 1U;
    vlSelf->top__DOT__b2seg4__DOT__chars[1U] = 0x4fU;
    vlSelf->top__DOT__b2seg4__DOT__chars[2U] = 0x12U;
    vlSelf->top__DOT__b2seg4__DOT__chars[3U] = 6U;
    vlSelf->top__DOT__b2seg4__DOT__chars[4U] = 0x4cU;
    vlSelf->top__DOT__b2seg4__DOT__chars[5U] = 0x24U;
    vlSelf->top__DOT__b2seg4__DOT__chars[6U] = 0x20U;
    vlSelf->top__DOT__b2seg4__DOT__chars[7U] = 0xfU;
    vlSelf->top__DOT__b2seg4__DOT__chars[8U] = 0U;
    vlSelf->top__DOT__b2seg4__DOT__chars[9U] = 4U;
    vlSelf->top__DOT__b2seg4__DOT__chars[0xaU] = 8U;
    vlSelf->top__DOT__b2seg4__DOT__chars[0xbU] = 0x60U;
    vlSelf->top__DOT__b2seg4__DOT__chars[0xcU] = 0x31U;
    vlSelf->top__DOT__b2seg4__DOT__chars[0xdU] = 0x42U;
    vlSelf->top__DOT__b2seg4__DOT__chars[0xeU] = 0x30U;
    vlSelf->top__DOT__b2seg4__DOT__chars[0xfU] = 0x38U;
    vlSelf->top__DOT__b2seg5__DOT__chars[0U] = 1U;
    vlSelf->top__DOT__b2seg5__DOT__chars[1U] = 0x4fU;
    vlSelf->top__DOT__b2seg5__DOT__chars[2U] = 0x12U;
    vlSelf->top__DOT__b2seg5__DOT__chars[3U] = 6U;
    vlSelf->top__DOT__b2seg5__DOT__chars[4U] = 0x4cU;
    vlSelf->top__DOT__b2seg5__DOT__chars[5U] = 0x24U;
    vlSelf->top__DOT__b2seg5__DOT__chars[6U] = 0x20U;
    vlSelf->top__DOT__b2seg5__DOT__chars[7U] = 0xfU;
    vlSelf->top__DOT__b2seg5__DOT__chars[8U] = 0U;
    vlSelf->top__DOT__b2seg5__DOT__chars[9U] = 4U;
    vlSelf->top__DOT__b2seg5__DOT__chars[0xaU] = 8U;
    vlSelf->top__DOT__b2seg5__DOT__chars[0xbU] = 0x60U;
    vlSelf->top__DOT__b2seg5__DOT__chars[0xcU] = 0x31U;
    vlSelf->top__DOT__b2seg5__DOT__chars[0xdU] = 0x42U;
    vlSelf->top__DOT__b2seg5__DOT__chars[0xeU] = 0x30U;
    vlSelf->top__DOT__b2seg5__DOT__chars[0xfU] = 0x38U;
    vlSelf->led = ((0xfffcU & (IData)(vlSelf->led)) 
                   | (((IData)(vlSelf->ready) << 1U) 
                      | (IData)(vlSelf->overflow)));
    __Vtemp13[1U] = (((IData)((0x40090140000000ULL 
                               | (((QData)((IData)(
                                                   vlSelf->top__DOT__b2seg0__DOT__chars
                                                   [7U])) 
                                   << 0x37U) | (((QData)((IData)(
                                                                 vlSelf->top__DOT__b2seg0__DOT__chars
                                                                 [8U])) 
                                                 << 0x2cU) 
                                                | (((QData)((IData)(
                                                                    vlSelf->top__DOT__b2seg0__DOT__chars
                                                                    [9U])) 
                                                    << 0x21U) 
                                                   | (QData)((IData)(
                                                                     (0x2c0600U 
                                                                      | ((vlSelf->top__DOT__b2seg0__DOT__chars
                                                                          [0xaU] 
                                                                          << 0x16U) 
                                                                         | ((vlSelf->top__DOT__b2seg0__DOT__chars
                                                                             [0xbU] 
                                                                             << 0xbU) 
                                                                            | vlSelf->top__DOT__b2seg0__DOT__chars
                                                                            [0xcU])))))))))) 
                      << 1U) | (IData)(((0x1a0000000ULL 
                                         | (QData)((IData)(
                                                           (0x380780U 
                                                            | ((vlSelf->top__DOT__b2seg0__DOT__chars
                                                                [0xdU] 
                                                                << 0x16U) 
                                                               | ((vlSelf->top__DOT__b2seg0__DOT__chars
                                                                   [0xeU] 
                                                                   << 0xbU) 
                                                                  | vlSelf->top__DOT__b2seg0__DOT__chars
                                                                  [0xfU])))))) 
                                        >> 0x20U)));
    __Vtemp13[2U] = (0x80000000U | (((IData)((0x40090140000000ULL 
                                              | (((QData)((IData)(
                                                                  vlSelf->top__DOT__b2seg0__DOT__chars
                                                                  [7U])) 
                                                  << 0x37U) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->top__DOT__b2seg0__DOT__chars
                                                                     [8U])) 
                                                     << 0x2cU) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->top__DOT__b2seg0__DOT__chars
                                                                        [9U])) 
                                                        << 0x21U) 
                                                       | (QData)((IData)(
                                                                         (0x2c0600U 
                                                                          | ((vlSelf->top__DOT__b2seg0__DOT__chars
                                                                              [0xaU] 
                                                                              << 0x16U) 
                                                                             | ((vlSelf->top__DOT__b2seg0__DOT__chars
                                                                                [0xbU] 
                                                                                << 0xbU) 
                                                                                | vlSelf->top__DOT__b2seg0__DOT__chars
                                                                                [0xcU])))))))))) 
                                     >> 0x1fU) | ((IData)(
                                                          ((0x40090140000000ULL 
                                                            | (((QData)((IData)(
                                                                                vlSelf->top__DOT__b2seg0__DOT__chars
                                                                                [7U])) 
                                                                << 0x37U) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->top__DOT__b2seg0__DOT__chars
                                                                                [8U])) 
                                                                   << 0x2cU) 
                                                                  | (((QData)((IData)(
                                                                                vlSelf->top__DOT__b2seg0__DOT__chars
                                                                                [9U])) 
                                                                      << 0x21U) 
                                                                     | (QData)((IData)(
                                                                                (0x2c0600U 
                                                                                | ((vlSelf->top__DOT__b2seg0__DOT__chars
                                                                                [0xaU] 
                                                                                << 0x16U) 
                                                                                | ((vlSelf->top__DOT__b2seg0__DOT__chars
                                                                                [0xbU] 
                                                                                << 0xbU) 
                                                                                | vlSelf->top__DOT__b2seg0__DOT__chars
                                                                                [0xcU]))))))))) 
                                                           >> 0x20U)) 
                                                  << 1U)));
    __Vtemp13[3U] = (1U | (((IData)(((0x40090140000000ULL 
                                      | (((QData)((IData)(
                                                          vlSelf->top__DOT__b2seg0__DOT__chars
                                                          [7U])) 
                                          << 0x37U) 
                                         | (((QData)((IData)(
                                                             vlSelf->top__DOT__b2seg0__DOT__chars
                                                             [8U])) 
                                             << 0x2cU) 
                                            | (((QData)((IData)(
                                                                vlSelf->top__DOT__b2seg0__DOT__chars
                                                                [9U])) 
                                                << 0x21U) 
                                               | (QData)((IData)(
                                                                 (0x2c0600U 
                                                                  | ((vlSelf->top__DOT__b2seg0__DOT__chars
                                                                      [0xaU] 
                                                                      << 0x16U) 
                                                                     | ((vlSelf->top__DOT__b2seg0__DOT__chars
                                                                         [0xbU] 
                                                                         << 0xbU) 
                                                                        | vlSelf->top__DOT__b2seg0__DOT__chars
                                                                        [0xcU]))))))))) 
                                     >> 0x20U)) >> 0x1fU) 
                           | (0xa01802U | ((vlSelf->top__DOT__b2seg0__DOT__chars
                                            [4U] << 0x19U) 
                                           | ((vlSelf->top__DOT__b2seg0__DOT__chars
                                               [5U] 
                                               << 0xeU) 
                                              | (vlSelf->top__DOT__b2seg0__DOT__chars
                                                 [6U] 
                                                 << 3U))))));
    vlSelf->top__DOT__b2seg0__DOT____Vcellinp__i0____pinNumber4[0U] 
        = (IData)((0x1a0000000ULL | (QData)((IData)(
                                                    (0x380780U 
                                                     | ((vlSelf->top__DOT__b2seg0__DOT__chars
                                                         [0xdU] 
                                                         << 0x16U) 
                                                        | ((vlSelf->top__DOT__b2seg0__DOT__chars
                                                            [0xeU] 
                                                            << 0xbU) 
                                                           | vlSelf->top__DOT__b2seg0__DOT__chars
                                                           [0xfU])))))));
    vlSelf->top__DOT__b2seg0__DOT____Vcellinp__i0____pinNumber4[1U] 
        = __Vtemp13[1U];
    vlSelf->top__DOT__b2seg0__DOT____Vcellinp__i0____pinNumber4[2U] 
        = __Vtemp13[2U];
    vlSelf->top__DOT__b2seg0__DOT____Vcellinp__i0____pinNumber4[3U] 
        = __Vtemp13[3U];
    vlSelf->top__DOT__b2seg0__DOT____Vcellinp__i0____pinNumber4[4U] 
        = (0x801804U | ((1U & ((vlSelf->top__DOT__b2seg0__DOT__chars
                                [4U] >> 7U) | ((vlSelf->top__DOT__b2seg0__DOT__chars
                                                [5U] 
                                                >> 0x12U) 
                                               | (vlSelf->top__DOT__b2seg0__DOT__chars
                                                  [6U] 
                                                  >> 0x1dU)))) 
                        | ((vlSelf->top__DOT__b2seg0__DOT__chars
                            [1U] << 0x1aU) | ((vlSelf->top__DOT__b2seg0__DOT__chars
                                               [2U] 
                                               << 0xfU) 
                                              | (vlSelf->top__DOT__b2seg0__DOT__chars
                                                 [3U] 
                                                 << 4U)))));
    vlSelf->top__DOT__b2seg0__DOT____Vcellinp__i0____pinNumber4[5U] 
        = (2U | ((vlSelf->top__DOT__b2seg0__DOT__chars
                  [0U] << 5U) | (1U & ((vlSelf->top__DOT__b2seg0__DOT__chars
                                        [1U] >> 6U) 
                                       | ((vlSelf->top__DOT__b2seg0__DOT__chars
                                           [2U] >> 0x11U) 
                                          | (vlSelf->top__DOT__b2seg0__DOT__chars
                                             [3U] >> 0x1cU))))));
    __Vtemp28[1U] = (((IData)((0x40090140000000ULL 
                               | (((QData)((IData)(
                                                   vlSelf->top__DOT__b2seg1__DOT__chars
                                                   [7U])) 
                                   << 0x37U) | (((QData)((IData)(
                                                                 vlSelf->top__DOT__b2seg1__DOT__chars
                                                                 [8U])) 
                                                 << 0x2cU) 
                                                | (((QData)((IData)(
                                                                    vlSelf->top__DOT__b2seg1__DOT__chars
                                                                    [9U])) 
                                                    << 0x21U) 
                                                   | (QData)((IData)(
                                                                     (0x2c0600U 
                                                                      | ((vlSelf->top__DOT__b2seg1__DOT__chars
                                                                          [0xaU] 
                                                                          << 0x16U) 
                                                                         | ((vlSelf->top__DOT__b2seg1__DOT__chars
                                                                             [0xbU] 
                                                                             << 0xbU) 
                                                                            | vlSelf->top__DOT__b2seg1__DOT__chars
                                                                            [0xcU])))))))))) 
                      << 1U) | (IData)(((0x1a0000000ULL 
                                         | (QData)((IData)(
                                                           (0x380780U 
                                                            | ((vlSelf->top__DOT__b2seg1__DOT__chars
                                                                [0xdU] 
                                                                << 0x16U) 
                                                               | ((vlSelf->top__DOT__b2seg1__DOT__chars
                                                                   [0xeU] 
                                                                   << 0xbU) 
                                                                  | vlSelf->top__DOT__b2seg1__DOT__chars
                                                                  [0xfU])))))) 
                                        >> 0x20U)));
    __Vtemp28[2U] = (0x80000000U | (((IData)((0x40090140000000ULL 
                                              | (((QData)((IData)(
                                                                  vlSelf->top__DOT__b2seg1__DOT__chars
                                                                  [7U])) 
                                                  << 0x37U) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->top__DOT__b2seg1__DOT__chars
                                                                     [8U])) 
                                                     << 0x2cU) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->top__DOT__b2seg1__DOT__chars
                                                                        [9U])) 
                                                        << 0x21U) 
                                                       | (QData)((IData)(
                                                                         (0x2c0600U 
                                                                          | ((vlSelf->top__DOT__b2seg1__DOT__chars
                                                                              [0xaU] 
                                                                              << 0x16U) 
                                                                             | ((vlSelf->top__DOT__b2seg1__DOT__chars
                                                                                [0xbU] 
                                                                                << 0xbU) 
                                                                                | vlSelf->top__DOT__b2seg1__DOT__chars
                                                                                [0xcU])))))))))) 
                                     >> 0x1fU) | ((IData)(
                                                          ((0x40090140000000ULL 
                                                            | (((QData)((IData)(
                                                                                vlSelf->top__DOT__b2seg1__DOT__chars
                                                                                [7U])) 
                                                                << 0x37U) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->top__DOT__b2seg1__DOT__chars
                                                                                [8U])) 
                                                                   << 0x2cU) 
                                                                  | (((QData)((IData)(
                                                                                vlSelf->top__DOT__b2seg1__DOT__chars
                                                                                [9U])) 
                                                                      << 0x21U) 
                                                                     | (QData)((IData)(
                                                                                (0x2c0600U 
                                                                                | ((vlSelf->top__DOT__b2seg1__DOT__chars
                                                                                [0xaU] 
                                                                                << 0x16U) 
                                                                                | ((vlSelf->top__DOT__b2seg1__DOT__chars
                                                                                [0xbU] 
                                                                                << 0xbU) 
                                                                                | vlSelf->top__DOT__b2seg1__DOT__chars
                                                                                [0xcU]))))))))) 
                                                           >> 0x20U)) 
                                                  << 1U)));
    __Vtemp28[3U] = (1U | (((IData)(((0x40090140000000ULL 
                                      | (((QData)((IData)(
                                                          vlSelf->top__DOT__b2seg1__DOT__chars
                                                          [7U])) 
                                          << 0x37U) 
                                         | (((QData)((IData)(
                                                             vlSelf->top__DOT__b2seg1__DOT__chars
                                                             [8U])) 
                                             << 0x2cU) 
                                            | (((QData)((IData)(
                                                                vlSelf->top__DOT__b2seg1__DOT__chars
                                                                [9U])) 
                                                << 0x21U) 
                                               | (QData)((IData)(
                                                                 (0x2c0600U 
                                                                  | ((vlSelf->top__DOT__b2seg1__DOT__chars
                                                                      [0xaU] 
                                                                      << 0x16U) 
                                                                     | ((vlSelf->top__DOT__b2seg1__DOT__chars
                                                                         [0xbU] 
                                                                         << 0xbU) 
                                                                        | vlSelf->top__DOT__b2seg1__DOT__chars
                                                                        [0xcU]))))))))) 
                                     >> 0x20U)) >> 0x1fU) 
                           | (0xa01802U | ((vlSelf->top__DOT__b2seg1__DOT__chars
                                            [4U] << 0x19U) 
                                           | ((vlSelf->top__DOT__b2seg1__DOT__chars
                                               [5U] 
                                               << 0xeU) 
                                              | (vlSelf->top__DOT__b2seg1__DOT__chars
                                                 [6U] 
                                                 << 3U))))));
    vlSelf->top__DOT__b2seg1__DOT____Vcellinp__i0____pinNumber4[0U] 
        = (IData)((0x1a0000000ULL | (QData)((IData)(
                                                    (0x380780U 
                                                     | ((vlSelf->top__DOT__b2seg1__DOT__chars
                                                         [0xdU] 
                                                         << 0x16U) 
                                                        | ((vlSelf->top__DOT__b2seg1__DOT__chars
                                                            [0xeU] 
                                                            << 0xbU) 
                                                           | vlSelf->top__DOT__b2seg1__DOT__chars
                                                           [0xfU])))))));
    vlSelf->top__DOT__b2seg1__DOT____Vcellinp__i0____pinNumber4[1U] 
        = __Vtemp28[1U];
    vlSelf->top__DOT__b2seg1__DOT____Vcellinp__i0____pinNumber4[2U] 
        = __Vtemp28[2U];
    vlSelf->top__DOT__b2seg1__DOT____Vcellinp__i0____pinNumber4[3U] 
        = __Vtemp28[3U];
    vlSelf->top__DOT__b2seg1__DOT____Vcellinp__i0____pinNumber4[4U] 
        = (0x801804U | ((1U & ((vlSelf->top__DOT__b2seg1__DOT__chars
                                [4U] >> 7U) | ((vlSelf->top__DOT__b2seg1__DOT__chars
                                                [5U] 
                                                >> 0x12U) 
                                               | (vlSelf->top__DOT__b2seg1__DOT__chars
                                                  [6U] 
                                                  >> 0x1dU)))) 
                        | ((vlSelf->top__DOT__b2seg1__DOT__chars
                            [1U] << 0x1aU) | ((vlSelf->top__DOT__b2seg1__DOT__chars
                                               [2U] 
                                               << 0xfU) 
                                              | (vlSelf->top__DOT__b2seg1__DOT__chars
                                                 [3U] 
                                                 << 4U)))));
    vlSelf->top__DOT__b2seg1__DOT____Vcellinp__i0____pinNumber4[5U] 
        = (2U | ((vlSelf->top__DOT__b2seg1__DOT__chars
                  [0U] << 5U) | (1U & ((vlSelf->top__DOT__b2seg1__DOT__chars
                                        [1U] >> 6U) 
                                       | ((vlSelf->top__DOT__b2seg1__DOT__chars
                                           [2U] >> 0x11U) 
                                          | (vlSelf->top__DOT__b2seg1__DOT__chars
                                             [3U] >> 0x1cU))))));
    __Vtemp43[1U] = (((IData)((0x40090140000000ULL 
                               | (((QData)((IData)(
                                                   vlSelf->top__DOT__b2seg2__DOT__chars
                                                   [7U])) 
                                   << 0x37U) | (((QData)((IData)(
                                                                 vlSelf->top__DOT__b2seg2__DOT__chars
                                                                 [8U])) 
                                                 << 0x2cU) 
                                                | (((QData)((IData)(
                                                                    vlSelf->top__DOT__b2seg2__DOT__chars
                                                                    [9U])) 
                                                    << 0x21U) 
                                                   | (QData)((IData)(
                                                                     (0x2c0600U 
                                                                      | ((vlSelf->top__DOT__b2seg2__DOT__chars
                                                                          [0xaU] 
                                                                          << 0x16U) 
                                                                         | ((vlSelf->top__DOT__b2seg2__DOT__chars
                                                                             [0xbU] 
                                                                             << 0xbU) 
                                                                            | vlSelf->top__DOT__b2seg2__DOT__chars
                                                                            [0xcU])))))))))) 
                      << 1U) | (IData)(((0x1a0000000ULL 
                                         | (QData)((IData)(
                                                           (0x380780U 
                                                            | ((vlSelf->top__DOT__b2seg2__DOT__chars
                                                                [0xdU] 
                                                                << 0x16U) 
                                                               | ((vlSelf->top__DOT__b2seg2__DOT__chars
                                                                   [0xeU] 
                                                                   << 0xbU) 
                                                                  | vlSelf->top__DOT__b2seg2__DOT__chars
                                                                  [0xfU])))))) 
                                        >> 0x20U)));
    __Vtemp43[2U] = (0x80000000U | (((IData)((0x40090140000000ULL 
                                              | (((QData)((IData)(
                                                                  vlSelf->top__DOT__b2seg2__DOT__chars
                                                                  [7U])) 
                                                  << 0x37U) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->top__DOT__b2seg2__DOT__chars
                                                                     [8U])) 
                                                     << 0x2cU) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->top__DOT__b2seg2__DOT__chars
                                                                        [9U])) 
                                                        << 0x21U) 
                                                       | (QData)((IData)(
                                                                         (0x2c0600U 
                                                                          | ((vlSelf->top__DOT__b2seg2__DOT__chars
                                                                              [0xaU] 
                                                                              << 0x16U) 
                                                                             | ((vlSelf->top__DOT__b2seg2__DOT__chars
                                                                                [0xbU] 
                                                                                << 0xbU) 
                                                                                | vlSelf->top__DOT__b2seg2__DOT__chars
                                                                                [0xcU])))))))))) 
                                     >> 0x1fU) | ((IData)(
                                                          ((0x40090140000000ULL 
                                                            | (((QData)((IData)(
                                                                                vlSelf->top__DOT__b2seg2__DOT__chars
                                                                                [7U])) 
                                                                << 0x37U) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->top__DOT__b2seg2__DOT__chars
                                                                                [8U])) 
                                                                   << 0x2cU) 
                                                                  | (((QData)((IData)(
                                                                                vlSelf->top__DOT__b2seg2__DOT__chars
                                                                                [9U])) 
                                                                      << 0x21U) 
                                                                     | (QData)((IData)(
                                                                                (0x2c0600U 
                                                                                | ((vlSelf->top__DOT__b2seg2__DOT__chars
                                                                                [0xaU] 
                                                                                << 0x16U) 
                                                                                | ((vlSelf->top__DOT__b2seg2__DOT__chars
                                                                                [0xbU] 
                                                                                << 0xbU) 
                                                                                | vlSelf->top__DOT__b2seg2__DOT__chars
                                                                                [0xcU]))))))))) 
                                                           >> 0x20U)) 
                                                  << 1U)));
    __Vtemp43[3U] = (1U | (((IData)(((0x40090140000000ULL 
                                      | (((QData)((IData)(
                                                          vlSelf->top__DOT__b2seg2__DOT__chars
                                                          [7U])) 
                                          << 0x37U) 
                                         | (((QData)((IData)(
                                                             vlSelf->top__DOT__b2seg2__DOT__chars
                                                             [8U])) 
                                             << 0x2cU) 
                                            | (((QData)((IData)(
                                                                vlSelf->top__DOT__b2seg2__DOT__chars
                                                                [9U])) 
                                                << 0x21U) 
                                               | (QData)((IData)(
                                                                 (0x2c0600U 
                                                                  | ((vlSelf->top__DOT__b2seg2__DOT__chars
                                                                      [0xaU] 
                                                                      << 0x16U) 
                                                                     | ((vlSelf->top__DOT__b2seg2__DOT__chars
                                                                         [0xbU] 
                                                                         << 0xbU) 
                                                                        | vlSelf->top__DOT__b2seg2__DOT__chars
                                                                        [0xcU]))))))))) 
                                     >> 0x20U)) >> 0x1fU) 
                           | (0xa01802U | ((vlSelf->top__DOT__b2seg2__DOT__chars
                                            [4U] << 0x19U) 
                                           | ((vlSelf->top__DOT__b2seg2__DOT__chars
                                               [5U] 
                                               << 0xeU) 
                                              | (vlSelf->top__DOT__b2seg2__DOT__chars
                                                 [6U] 
                                                 << 3U))))));
    vlSelf->top__DOT__b2seg2__DOT____Vcellinp__i0____pinNumber4[0U] 
        = (IData)((0x1a0000000ULL | (QData)((IData)(
                                                    (0x380780U 
                                                     | ((vlSelf->top__DOT__b2seg2__DOT__chars
                                                         [0xdU] 
                                                         << 0x16U) 
                                                        | ((vlSelf->top__DOT__b2seg2__DOT__chars
                                                            [0xeU] 
                                                            << 0xbU) 
                                                           | vlSelf->top__DOT__b2seg2__DOT__chars
                                                           [0xfU])))))));
    vlSelf->top__DOT__b2seg2__DOT____Vcellinp__i0____pinNumber4[1U] 
        = __Vtemp43[1U];
    vlSelf->top__DOT__b2seg2__DOT____Vcellinp__i0____pinNumber4[2U] 
        = __Vtemp43[2U];
    vlSelf->top__DOT__b2seg2__DOT____Vcellinp__i0____pinNumber4[3U] 
        = __Vtemp43[3U];
    vlSelf->top__DOT__b2seg2__DOT____Vcellinp__i0____pinNumber4[4U] 
        = (0x801804U | ((1U & ((vlSelf->top__DOT__b2seg2__DOT__chars
                                [4U] >> 7U) | ((vlSelf->top__DOT__b2seg2__DOT__chars
                                                [5U] 
                                                >> 0x12U) 
                                               | (vlSelf->top__DOT__b2seg2__DOT__chars
                                                  [6U] 
                                                  >> 0x1dU)))) 
                        | ((vlSelf->top__DOT__b2seg2__DOT__chars
                            [1U] << 0x1aU) | ((vlSelf->top__DOT__b2seg2__DOT__chars
                                               [2U] 
                                               << 0xfU) 
                                              | (vlSelf->top__DOT__b2seg2__DOT__chars
                                                 [3U] 
                                                 << 4U)))));
    vlSelf->top__DOT__b2seg2__DOT____Vcellinp__i0____pinNumber4[5U] 
        = (2U | ((vlSelf->top__DOT__b2seg2__DOT__chars
                  [0U] << 5U) | (1U & ((vlSelf->top__DOT__b2seg2__DOT__chars
                                        [1U] >> 6U) 
                                       | ((vlSelf->top__DOT__b2seg2__DOT__chars
                                           [2U] >> 0x11U) 
                                          | (vlSelf->top__DOT__b2seg2__DOT__chars
                                             [3U] >> 0x1cU))))));
    __Vtemp58[1U] = (((IData)((0x40090140000000ULL 
                               | (((QData)((IData)(
                                                   vlSelf->top__DOT__b2seg3__DOT__chars
                                                   [7U])) 
                                   << 0x37U) | (((QData)((IData)(
                                                                 vlSelf->top__DOT__b2seg3__DOT__chars
                                                                 [8U])) 
                                                 << 0x2cU) 
                                                | (((QData)((IData)(
                                                                    vlSelf->top__DOT__b2seg3__DOT__chars
                                                                    [9U])) 
                                                    << 0x21U) 
                                                   | (QData)((IData)(
                                                                     (0x2c0600U 
                                                                      | ((vlSelf->top__DOT__b2seg3__DOT__chars
                                                                          [0xaU] 
                                                                          << 0x16U) 
                                                                         | ((vlSelf->top__DOT__b2seg3__DOT__chars
                                                                             [0xbU] 
                                                                             << 0xbU) 
                                                                            | vlSelf->top__DOT__b2seg3__DOT__chars
                                                                            [0xcU])))))))))) 
                      << 1U) | (IData)(((0x1a0000000ULL 
                                         | (QData)((IData)(
                                                           (0x380780U 
                                                            | ((vlSelf->top__DOT__b2seg3__DOT__chars
                                                                [0xdU] 
                                                                << 0x16U) 
                                                               | ((vlSelf->top__DOT__b2seg3__DOT__chars
                                                                   [0xeU] 
                                                                   << 0xbU) 
                                                                  | vlSelf->top__DOT__b2seg3__DOT__chars
                                                                  [0xfU])))))) 
                                        >> 0x20U)));
    __Vtemp58[2U] = (0x80000000U | (((IData)((0x40090140000000ULL 
                                              | (((QData)((IData)(
                                                                  vlSelf->top__DOT__b2seg3__DOT__chars
                                                                  [7U])) 
                                                  << 0x37U) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->top__DOT__b2seg3__DOT__chars
                                                                     [8U])) 
                                                     << 0x2cU) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->top__DOT__b2seg3__DOT__chars
                                                                        [9U])) 
                                                        << 0x21U) 
                                                       | (QData)((IData)(
                                                                         (0x2c0600U 
                                                                          | ((vlSelf->top__DOT__b2seg3__DOT__chars
                                                                              [0xaU] 
                                                                              << 0x16U) 
                                                                             | ((vlSelf->top__DOT__b2seg3__DOT__chars
                                                                                [0xbU] 
                                                                                << 0xbU) 
                                                                                | vlSelf->top__DOT__b2seg3__DOT__chars
                                                                                [0xcU])))))))))) 
                                     >> 0x1fU) | ((IData)(
                                                          ((0x40090140000000ULL 
                                                            | (((QData)((IData)(
                                                                                vlSelf->top__DOT__b2seg3__DOT__chars
                                                                                [7U])) 
                                                                << 0x37U) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->top__DOT__b2seg3__DOT__chars
                                                                                [8U])) 
                                                                   << 0x2cU) 
                                                                  | (((QData)((IData)(
                                                                                vlSelf->top__DOT__b2seg3__DOT__chars
                                                                                [9U])) 
                                                                      << 0x21U) 
                                                                     | (QData)((IData)(
                                                                                (0x2c0600U 
                                                                                | ((vlSelf->top__DOT__b2seg3__DOT__chars
                                                                                [0xaU] 
                                                                                << 0x16U) 
                                                                                | ((vlSelf->top__DOT__b2seg3__DOT__chars
                                                                                [0xbU] 
                                                                                << 0xbU) 
                                                                                | vlSelf->top__DOT__b2seg3__DOT__chars
                                                                                [0xcU]))))))))) 
                                                           >> 0x20U)) 
                                                  << 1U)));
    __Vtemp58[3U] = (1U | (((IData)(((0x40090140000000ULL 
                                      | (((QData)((IData)(
                                                          vlSelf->top__DOT__b2seg3__DOT__chars
                                                          [7U])) 
                                          << 0x37U) 
                                         | (((QData)((IData)(
                                                             vlSelf->top__DOT__b2seg3__DOT__chars
                                                             [8U])) 
                                             << 0x2cU) 
                                            | (((QData)((IData)(
                                                                vlSelf->top__DOT__b2seg3__DOT__chars
                                                                [9U])) 
                                                << 0x21U) 
                                               | (QData)((IData)(
                                                                 (0x2c0600U 
                                                                  | ((vlSelf->top__DOT__b2seg3__DOT__chars
                                                                      [0xaU] 
                                                                      << 0x16U) 
                                                                     | ((vlSelf->top__DOT__b2seg3__DOT__chars
                                                                         [0xbU] 
                                                                         << 0xbU) 
                                                                        | vlSelf->top__DOT__b2seg3__DOT__chars
                                                                        [0xcU]))))))))) 
                                     >> 0x20U)) >> 0x1fU) 
                           | (0xa01802U | ((vlSelf->top__DOT__b2seg3__DOT__chars
                                            [4U] << 0x19U) 
                                           | ((vlSelf->top__DOT__b2seg3__DOT__chars
                                               [5U] 
                                               << 0xeU) 
                                              | (vlSelf->top__DOT__b2seg3__DOT__chars
                                                 [6U] 
                                                 << 3U))))));
    vlSelf->top__DOT__b2seg3__DOT____Vcellinp__i0____pinNumber4[0U] 
        = (IData)((0x1a0000000ULL | (QData)((IData)(
                                                    (0x380780U 
                                                     | ((vlSelf->top__DOT__b2seg3__DOT__chars
                                                         [0xdU] 
                                                         << 0x16U) 
                                                        | ((vlSelf->top__DOT__b2seg3__DOT__chars
                                                            [0xeU] 
                                                            << 0xbU) 
                                                           | vlSelf->top__DOT__b2seg3__DOT__chars
                                                           [0xfU])))))));
    vlSelf->top__DOT__b2seg3__DOT____Vcellinp__i0____pinNumber4[1U] 
        = __Vtemp58[1U];
    vlSelf->top__DOT__b2seg3__DOT____Vcellinp__i0____pinNumber4[2U] 
        = __Vtemp58[2U];
    vlSelf->top__DOT__b2seg3__DOT____Vcellinp__i0____pinNumber4[3U] 
        = __Vtemp58[3U];
    vlSelf->top__DOT__b2seg3__DOT____Vcellinp__i0____pinNumber4[4U] 
        = (0x801804U | ((1U & ((vlSelf->top__DOT__b2seg3__DOT__chars
                                [4U] >> 7U) | ((vlSelf->top__DOT__b2seg3__DOT__chars
                                                [5U] 
                                                >> 0x12U) 
                                               | (vlSelf->top__DOT__b2seg3__DOT__chars
                                                  [6U] 
                                                  >> 0x1dU)))) 
                        | ((vlSelf->top__DOT__b2seg3__DOT__chars
                            [1U] << 0x1aU) | ((vlSelf->top__DOT__b2seg3__DOT__chars
                                               [2U] 
                                               << 0xfU) 
                                              | (vlSelf->top__DOT__b2seg3__DOT__chars
                                                 [3U] 
                                                 << 4U)))));
    vlSelf->top__DOT__b2seg3__DOT____Vcellinp__i0____pinNumber4[5U] 
        = (2U | ((vlSelf->top__DOT__b2seg3__DOT__chars
                  [0U] << 5U) | (1U & ((vlSelf->top__DOT__b2seg3__DOT__chars
                                        [1U] >> 6U) 
                                       | ((vlSelf->top__DOT__b2seg3__DOT__chars
                                           [2U] >> 0x11U) 
                                          | (vlSelf->top__DOT__b2seg3__DOT__chars
                                             [3U] >> 0x1cU))))));
    __Vtemp73[1U] = (((IData)((0x40090140000000ULL 
                               | (((QData)((IData)(
                                                   vlSelf->top__DOT__b2seg4__DOT__chars
                                                   [7U])) 
                                   << 0x37U) | (((QData)((IData)(
                                                                 vlSelf->top__DOT__b2seg4__DOT__chars
                                                                 [8U])) 
                                                 << 0x2cU) 
                                                | (((QData)((IData)(
                                                                    vlSelf->top__DOT__b2seg4__DOT__chars
                                                                    [9U])) 
                                                    << 0x21U) 
                                                   | (QData)((IData)(
                                                                     (0x2c0600U 
                                                                      | ((vlSelf->top__DOT__b2seg4__DOT__chars
                                                                          [0xaU] 
                                                                          << 0x16U) 
                                                                         | ((vlSelf->top__DOT__b2seg4__DOT__chars
                                                                             [0xbU] 
                                                                             << 0xbU) 
                                                                            | vlSelf->top__DOT__b2seg4__DOT__chars
                                                                            [0xcU])))))))))) 
                      << 1U) | (IData)(((0x1a0000000ULL 
                                         | (QData)((IData)(
                                                           (0x380780U 
                                                            | ((vlSelf->top__DOT__b2seg4__DOT__chars
                                                                [0xdU] 
                                                                << 0x16U) 
                                                               | ((vlSelf->top__DOT__b2seg4__DOT__chars
                                                                   [0xeU] 
                                                                   << 0xbU) 
                                                                  | vlSelf->top__DOT__b2seg4__DOT__chars
                                                                  [0xfU])))))) 
                                        >> 0x20U)));
    __Vtemp73[2U] = (0x80000000U | (((IData)((0x40090140000000ULL 
                                              | (((QData)((IData)(
                                                                  vlSelf->top__DOT__b2seg4__DOT__chars
                                                                  [7U])) 
                                                  << 0x37U) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->top__DOT__b2seg4__DOT__chars
                                                                     [8U])) 
                                                     << 0x2cU) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->top__DOT__b2seg4__DOT__chars
                                                                        [9U])) 
                                                        << 0x21U) 
                                                       | (QData)((IData)(
                                                                         (0x2c0600U 
                                                                          | ((vlSelf->top__DOT__b2seg4__DOT__chars
                                                                              [0xaU] 
                                                                              << 0x16U) 
                                                                             | ((vlSelf->top__DOT__b2seg4__DOT__chars
                                                                                [0xbU] 
                                                                                << 0xbU) 
                                                                                | vlSelf->top__DOT__b2seg4__DOT__chars
                                                                                [0xcU])))))))))) 
                                     >> 0x1fU) | ((IData)(
                                                          ((0x40090140000000ULL 
                                                            | (((QData)((IData)(
                                                                                vlSelf->top__DOT__b2seg4__DOT__chars
                                                                                [7U])) 
                                                                << 0x37U) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->top__DOT__b2seg4__DOT__chars
                                                                                [8U])) 
                                                                   << 0x2cU) 
                                                                  | (((QData)((IData)(
                                                                                vlSelf->top__DOT__b2seg4__DOT__chars
                                                                                [9U])) 
                                                                      << 0x21U) 
                                                                     | (QData)((IData)(
                                                                                (0x2c0600U 
                                                                                | ((vlSelf->top__DOT__b2seg4__DOT__chars
                                                                                [0xaU] 
                                                                                << 0x16U) 
                                                                                | ((vlSelf->top__DOT__b2seg4__DOT__chars
                                                                                [0xbU] 
                                                                                << 0xbU) 
                                                                                | vlSelf->top__DOT__b2seg4__DOT__chars
                                                                                [0xcU]))))))))) 
                                                           >> 0x20U)) 
                                                  << 1U)));
    __Vtemp73[3U] = (1U | (((IData)(((0x40090140000000ULL 
                                      | (((QData)((IData)(
                                                          vlSelf->top__DOT__b2seg4__DOT__chars
                                                          [7U])) 
                                          << 0x37U) 
                                         | (((QData)((IData)(
                                                             vlSelf->top__DOT__b2seg4__DOT__chars
                                                             [8U])) 
                                             << 0x2cU) 
                                            | (((QData)((IData)(
                                                                vlSelf->top__DOT__b2seg4__DOT__chars
                                                                [9U])) 
                                                << 0x21U) 
                                               | (QData)((IData)(
                                                                 (0x2c0600U 
                                                                  | ((vlSelf->top__DOT__b2seg4__DOT__chars
                                                                      [0xaU] 
                                                                      << 0x16U) 
                                                                     | ((vlSelf->top__DOT__b2seg4__DOT__chars
                                                                         [0xbU] 
                                                                         << 0xbU) 
                                                                        | vlSelf->top__DOT__b2seg4__DOT__chars
                                                                        [0xcU]))))))))) 
                                     >> 0x20U)) >> 0x1fU) 
                           | (0xa01802U | ((vlSelf->top__DOT__b2seg4__DOT__chars
                                            [4U] << 0x19U) 
                                           | ((vlSelf->top__DOT__b2seg4__DOT__chars
                                               [5U] 
                                               << 0xeU) 
                                              | (vlSelf->top__DOT__b2seg4__DOT__chars
                                                 [6U] 
                                                 << 3U))))));
    vlSelf->top__DOT__b2seg4__DOT____Vcellinp__i0____pinNumber4[0U] 
        = (IData)((0x1a0000000ULL | (QData)((IData)(
                                                    (0x380780U 
                                                     | ((vlSelf->top__DOT__b2seg4__DOT__chars
                                                         [0xdU] 
                                                         << 0x16U) 
                                                        | ((vlSelf->top__DOT__b2seg4__DOT__chars
                                                            [0xeU] 
                                                            << 0xbU) 
                                                           | vlSelf->top__DOT__b2seg4__DOT__chars
                                                           [0xfU])))))));
    vlSelf->top__DOT__b2seg4__DOT____Vcellinp__i0____pinNumber4[1U] 
        = __Vtemp73[1U];
    vlSelf->top__DOT__b2seg4__DOT____Vcellinp__i0____pinNumber4[2U] 
        = __Vtemp73[2U];
    vlSelf->top__DOT__b2seg4__DOT____Vcellinp__i0____pinNumber4[3U] 
        = __Vtemp73[3U];
    vlSelf->top__DOT__b2seg4__DOT____Vcellinp__i0____pinNumber4[4U] 
        = (0x801804U | ((1U & ((vlSelf->top__DOT__b2seg4__DOT__chars
                                [4U] >> 7U) | ((vlSelf->top__DOT__b2seg4__DOT__chars
                                                [5U] 
                                                >> 0x12U) 
                                               | (vlSelf->top__DOT__b2seg4__DOT__chars
                                                  [6U] 
                                                  >> 0x1dU)))) 
                        | ((vlSelf->top__DOT__b2seg4__DOT__chars
                            [1U] << 0x1aU) | ((vlSelf->top__DOT__b2seg4__DOT__chars
                                               [2U] 
                                               << 0xfU) 
                                              | (vlSelf->top__DOT__b2seg4__DOT__chars
                                                 [3U] 
                                                 << 4U)))));
    vlSelf->top__DOT__b2seg4__DOT____Vcellinp__i0____pinNumber4[5U] 
        = (2U | ((vlSelf->top__DOT__b2seg4__DOT__chars
                  [0U] << 5U) | (1U & ((vlSelf->top__DOT__b2seg4__DOT__chars
                                        [1U] >> 6U) 
                                       | ((vlSelf->top__DOT__b2seg4__DOT__chars
                                           [2U] >> 0x11U) 
                                          | (vlSelf->top__DOT__b2seg4__DOT__chars
                                             [3U] >> 0x1cU))))));
    __Vtemp88[1U] = (((IData)((0x40090140000000ULL 
                               | (((QData)((IData)(
                                                   vlSelf->top__DOT__b2seg5__DOT__chars
                                                   [7U])) 
                                   << 0x37U) | (((QData)((IData)(
                                                                 vlSelf->top__DOT__b2seg5__DOT__chars
                                                                 [8U])) 
                                                 << 0x2cU) 
                                                | (((QData)((IData)(
                                                                    vlSelf->top__DOT__b2seg5__DOT__chars
                                                                    [9U])) 
                                                    << 0x21U) 
                                                   | (QData)((IData)(
                                                                     (0x2c0600U 
                                                                      | ((vlSelf->top__DOT__b2seg5__DOT__chars
                                                                          [0xaU] 
                                                                          << 0x16U) 
                                                                         | ((vlSelf->top__DOT__b2seg5__DOT__chars
                                                                             [0xbU] 
                                                                             << 0xbU) 
                                                                            | vlSelf->top__DOT__b2seg5__DOT__chars
                                                                            [0xcU])))))))))) 
                      << 1U) | (IData)(((0x1a0000000ULL 
                                         | (QData)((IData)(
                                                           (0x380780U 
                                                            | ((vlSelf->top__DOT__b2seg5__DOT__chars
                                                                [0xdU] 
                                                                << 0x16U) 
                                                               | ((vlSelf->top__DOT__b2seg5__DOT__chars
                                                                   [0xeU] 
                                                                   << 0xbU) 
                                                                  | vlSelf->top__DOT__b2seg5__DOT__chars
                                                                  [0xfU])))))) 
                                        >> 0x20U)));
    __Vtemp88[2U] = (0x80000000U | (((IData)((0x40090140000000ULL 
                                              | (((QData)((IData)(
                                                                  vlSelf->top__DOT__b2seg5__DOT__chars
                                                                  [7U])) 
                                                  << 0x37U) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->top__DOT__b2seg5__DOT__chars
                                                                     [8U])) 
                                                     << 0x2cU) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->top__DOT__b2seg5__DOT__chars
                                                                        [9U])) 
                                                        << 0x21U) 
                                                       | (QData)((IData)(
                                                                         (0x2c0600U 
                                                                          | ((vlSelf->top__DOT__b2seg5__DOT__chars
                                                                              [0xaU] 
                                                                              << 0x16U) 
                                                                             | ((vlSelf->top__DOT__b2seg5__DOT__chars
                                                                                [0xbU] 
                                                                                << 0xbU) 
                                                                                | vlSelf->top__DOT__b2seg5__DOT__chars
                                                                                [0xcU])))))))))) 
                                     >> 0x1fU) | ((IData)(
                                                          ((0x40090140000000ULL 
                                                            | (((QData)((IData)(
                                                                                vlSelf->top__DOT__b2seg5__DOT__chars
                                                                                [7U])) 
                                                                << 0x37U) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->top__DOT__b2seg5__DOT__chars
                                                                                [8U])) 
                                                                   << 0x2cU) 
                                                                  | (((QData)((IData)(
                                                                                vlSelf->top__DOT__b2seg5__DOT__chars
                                                                                [9U])) 
                                                                      << 0x21U) 
                                                                     | (QData)((IData)(
                                                                                (0x2c0600U 
                                                                                | ((vlSelf->top__DOT__b2seg5__DOT__chars
                                                                                [0xaU] 
                                                                                << 0x16U) 
                                                                                | ((vlSelf->top__DOT__b2seg5__DOT__chars
                                                                                [0xbU] 
                                                                                << 0xbU) 
                                                                                | vlSelf->top__DOT__b2seg5__DOT__chars
                                                                                [0xcU]))))))))) 
                                                           >> 0x20U)) 
                                                  << 1U)));
    __Vtemp88[3U] = (1U | (((IData)(((0x40090140000000ULL 
                                      | (((QData)((IData)(
                                                          vlSelf->top__DOT__b2seg5__DOT__chars
                                                          [7U])) 
                                          << 0x37U) 
                                         | (((QData)((IData)(
                                                             vlSelf->top__DOT__b2seg5__DOT__chars
                                                             [8U])) 
                                             << 0x2cU) 
                                            | (((QData)((IData)(
                                                                vlSelf->top__DOT__b2seg5__DOT__chars
                                                                [9U])) 
                                                << 0x21U) 
                                               | (QData)((IData)(
                                                                 (0x2c0600U 
                                                                  | ((vlSelf->top__DOT__b2seg5__DOT__chars
                                                                      [0xaU] 
                                                                      << 0x16U) 
                                                                     | ((vlSelf->top__DOT__b2seg5__DOT__chars
                                                                         [0xbU] 
                                                                         << 0xbU) 
                                                                        | vlSelf->top__DOT__b2seg5__DOT__chars
                                                                        [0xcU]))))))))) 
                                     >> 0x20U)) >> 0x1fU) 
                           | (0xa01802U | ((vlSelf->top__DOT__b2seg5__DOT__chars
                                            [4U] << 0x19U) 
                                           | ((vlSelf->top__DOT__b2seg5__DOT__chars
                                               [5U] 
                                               << 0xeU) 
                                              | (vlSelf->top__DOT__b2seg5__DOT__chars
                                                 [6U] 
                                                 << 3U))))));
    vlSelf->top__DOT__b2seg5__DOT____Vcellinp__i0____pinNumber4[0U] 
        = (IData)((0x1a0000000ULL | (QData)((IData)(
                                                    (0x380780U 
                                                     | ((vlSelf->top__DOT__b2seg5__DOT__chars
                                                         [0xdU] 
                                                         << 0x16U) 
                                                        | ((vlSelf->top__DOT__b2seg5__DOT__chars
                                                            [0xeU] 
                                                            << 0xbU) 
                                                           | vlSelf->top__DOT__b2seg5__DOT__chars
                                                           [0xfU])))))));
    vlSelf->top__DOT__b2seg5__DOT____Vcellinp__i0____pinNumber4[1U] 
        = __Vtemp88[1U];
    vlSelf->top__DOT__b2seg5__DOT____Vcellinp__i0____pinNumber4[2U] 
        = __Vtemp88[2U];
    vlSelf->top__DOT__b2seg5__DOT____Vcellinp__i0____pinNumber4[3U] 
        = __Vtemp88[3U];
    vlSelf->top__DOT__b2seg5__DOT____Vcellinp__i0____pinNumber4[4U] 
        = (0x801804U | ((1U & ((vlSelf->top__DOT__b2seg5__DOT__chars
                                [4U] >> 7U) | ((vlSelf->top__DOT__b2seg5__DOT__chars
                                                [5U] 
                                                >> 0x12U) 
                                               | (vlSelf->top__DOT__b2seg5__DOT__chars
                                                  [6U] 
                                                  >> 0x1dU)))) 
                        | ((vlSelf->top__DOT__b2seg5__DOT__chars
                            [1U] << 0x1aU) | ((vlSelf->top__DOT__b2seg5__DOT__chars
                                               [2U] 
                                               << 0xfU) 
                                              | (vlSelf->top__DOT__b2seg5__DOT__chars
                                                 [3U] 
                                                 << 4U)))));
    vlSelf->top__DOT__b2seg5__DOT____Vcellinp__i0____pinNumber4[5U] 
        = (2U | ((vlSelf->top__DOT__b2seg5__DOT__chars
                  [0U] << 5U) | (1U & ((vlSelf->top__DOT__b2seg5__DOT__chars
                                        [1U] >> 6U) 
                                       | ((vlSelf->top__DOT__b2seg5__DOT__chars
                                           [2U] >> 0x11U) 
                                          | (vlSelf->top__DOT__b2seg5__DOT__chars
                                             [3U] >> 0x1cU))))));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[0U] 
        = (0x7ffU & vlSelf->top__DOT__b2seg0__DOT____Vcellinp__i0____pinNumber4[0U]);
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[1U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg0__DOT____Vcellinp__i0____pinNumber4[0U] 
                     >> 0xbU));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[2U] 
        = (0x7ffU & ((vlSelf->top__DOT__b2seg0__DOT____Vcellinp__i0____pinNumber4[1U] 
                      << 0xaU) | (vlSelf->top__DOT__b2seg0__DOT____Vcellinp__i0____pinNumber4[0U] 
                                  >> 0x16U)));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[3U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg0__DOT____Vcellinp__i0____pinNumber4[1U] 
                     >> 1U));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[4U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg0__DOT____Vcellinp__i0____pinNumber4[1U] 
                     >> 0xcU));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[5U] 
        = (0x7ffU & ((vlSelf->top__DOT__b2seg0__DOT____Vcellinp__i0____pinNumber4[2U] 
                      << 9U) | (vlSelf->top__DOT__b2seg0__DOT____Vcellinp__i0____pinNumber4[1U] 
                                >> 0x17U)));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[6U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg0__DOT____Vcellinp__i0____pinNumber4[2U] 
                     >> 2U));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[7U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg0__DOT____Vcellinp__i0____pinNumber4[2U] 
                     >> 0xdU));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[8U] 
        = (0x7ffU & ((vlSelf->top__DOT__b2seg0__DOT____Vcellinp__i0____pinNumber4[3U] 
                      << 8U) | (vlSelf->top__DOT__b2seg0__DOT____Vcellinp__i0____pinNumber4[2U] 
                                >> 0x18U)));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[9U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg0__DOT____Vcellinp__i0____pinNumber4[3U] 
                     >> 3U));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[0xaU] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg0__DOT____Vcellinp__i0____pinNumber4[3U] 
                     >> 0xeU));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[0xbU] 
        = (0x7ffU & ((vlSelf->top__DOT__b2seg0__DOT____Vcellinp__i0____pinNumber4[4U] 
                      << 7U) | (vlSelf->top__DOT__b2seg0__DOT____Vcellinp__i0____pinNumber4[3U] 
                                >> 0x19U)));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[0xcU] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg0__DOT____Vcellinp__i0____pinNumber4[4U] 
                     >> 4U));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[0xdU] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg0__DOT____Vcellinp__i0____pinNumber4[4U] 
                     >> 0xfU));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[0xeU] 
        = (0x7ffU & ((vlSelf->top__DOT__b2seg0__DOT____Vcellinp__i0____pinNumber4[5U] 
                      << 6U) | (vlSelf->top__DOT__b2seg0__DOT____Vcellinp__i0____pinNumber4[4U] 
                                >> 0x1aU)));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[0xfU] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg0__DOT____Vcellinp__i0____pinNumber4[5U] 
                     >> 5U));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[0U] 
        = (0x7ffU & vlSelf->top__DOT__b2seg0__DOT____Vcellinp__i0____pinNumber4[0U]);
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[1U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg0__DOT____Vcellinp__i0____pinNumber4[0U] 
                     >> 0xbU));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[2U] 
        = (0x7ffU & ((vlSelf->top__DOT__b2seg0__DOT____Vcellinp__i0____pinNumber4[1U] 
                      << 0xaU) | (vlSelf->top__DOT__b2seg0__DOT____Vcellinp__i0____pinNumber4[0U] 
                                  >> 0x16U)));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[3U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg0__DOT____Vcellinp__i0____pinNumber4[1U] 
                     >> 1U));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[4U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg0__DOT____Vcellinp__i0____pinNumber4[1U] 
                     >> 0xcU));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[5U] 
        = (0x7ffU & ((vlSelf->top__DOT__b2seg0__DOT____Vcellinp__i0____pinNumber4[2U] 
                      << 9U) | (vlSelf->top__DOT__b2seg0__DOT____Vcellinp__i0____pinNumber4[1U] 
                                >> 0x17U)));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[6U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg0__DOT____Vcellinp__i0____pinNumber4[2U] 
                     >> 2U));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[7U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg0__DOT____Vcellinp__i0____pinNumber4[2U] 
                     >> 0xdU));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[8U] 
        = (0x7ffU & ((vlSelf->top__DOT__b2seg0__DOT____Vcellinp__i0____pinNumber4[3U] 
                      << 8U) | (vlSelf->top__DOT__b2seg0__DOT____Vcellinp__i0____pinNumber4[2U] 
                                >> 0x18U)));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[9U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg0__DOT____Vcellinp__i0____pinNumber4[3U] 
                     >> 3U));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[0xaU] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg0__DOT____Vcellinp__i0____pinNumber4[3U] 
                     >> 0xeU));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[0xbU] 
        = (0x7ffU & ((vlSelf->top__DOT__b2seg0__DOT____Vcellinp__i0____pinNumber4[4U] 
                      << 7U) | (vlSelf->top__DOT__b2seg0__DOT____Vcellinp__i0____pinNumber4[3U] 
                                >> 0x19U)));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[0xcU] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg0__DOT____Vcellinp__i0____pinNumber4[4U] 
                     >> 4U));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[0xdU] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg0__DOT____Vcellinp__i0____pinNumber4[4U] 
                     >> 0xfU));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[0xeU] 
        = (0x7ffU & ((vlSelf->top__DOT__b2seg0__DOT____Vcellinp__i0____pinNumber4[5U] 
                      << 6U) | (vlSelf->top__DOT__b2seg0__DOT____Vcellinp__i0____pinNumber4[4U] 
                                >> 0x1aU)));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[0xfU] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg0__DOT____Vcellinp__i0____pinNumber4[5U] 
                     >> 5U));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[0U] 
        = (0x7ffU & vlSelf->top__DOT__b2seg1__DOT____Vcellinp__i0____pinNumber4[0U]);
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[1U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg1__DOT____Vcellinp__i0____pinNumber4[0U] 
                     >> 0xbU));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[2U] 
        = (0x7ffU & ((vlSelf->top__DOT__b2seg1__DOT____Vcellinp__i0____pinNumber4[1U] 
                      << 0xaU) | (vlSelf->top__DOT__b2seg1__DOT____Vcellinp__i0____pinNumber4[0U] 
                                  >> 0x16U)));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[3U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg1__DOT____Vcellinp__i0____pinNumber4[1U] 
                     >> 1U));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[4U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg1__DOT____Vcellinp__i0____pinNumber4[1U] 
                     >> 0xcU));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[5U] 
        = (0x7ffU & ((vlSelf->top__DOT__b2seg1__DOT____Vcellinp__i0____pinNumber4[2U] 
                      << 9U) | (vlSelf->top__DOT__b2seg1__DOT____Vcellinp__i0____pinNumber4[1U] 
                                >> 0x17U)));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[6U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg1__DOT____Vcellinp__i0____pinNumber4[2U] 
                     >> 2U));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[7U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg1__DOT____Vcellinp__i0____pinNumber4[2U] 
                     >> 0xdU));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[8U] 
        = (0x7ffU & ((vlSelf->top__DOT__b2seg1__DOT____Vcellinp__i0____pinNumber4[3U] 
                      << 8U) | (vlSelf->top__DOT__b2seg1__DOT____Vcellinp__i0____pinNumber4[2U] 
                                >> 0x18U)));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[9U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg1__DOT____Vcellinp__i0____pinNumber4[3U] 
                     >> 3U));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[0xaU] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg1__DOT____Vcellinp__i0____pinNumber4[3U] 
                     >> 0xeU));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[0xbU] 
        = (0x7ffU & ((vlSelf->top__DOT__b2seg1__DOT____Vcellinp__i0____pinNumber4[4U] 
                      << 7U) | (vlSelf->top__DOT__b2seg1__DOT____Vcellinp__i0____pinNumber4[3U] 
                                >> 0x19U)));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[0xcU] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg1__DOT____Vcellinp__i0____pinNumber4[4U] 
                     >> 4U));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[0xdU] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg1__DOT____Vcellinp__i0____pinNumber4[4U] 
                     >> 0xfU));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[0xeU] 
        = (0x7ffU & ((vlSelf->top__DOT__b2seg1__DOT____Vcellinp__i0____pinNumber4[5U] 
                      << 6U) | (vlSelf->top__DOT__b2seg1__DOT____Vcellinp__i0____pinNumber4[4U] 
                                >> 0x1aU)));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[0xfU] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg1__DOT____Vcellinp__i0____pinNumber4[5U] 
                     >> 5U));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[0U] 
        = (0x7ffU & vlSelf->top__DOT__b2seg1__DOT____Vcellinp__i0____pinNumber4[0U]);
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[1U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg1__DOT____Vcellinp__i0____pinNumber4[0U] 
                     >> 0xbU));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[2U] 
        = (0x7ffU & ((vlSelf->top__DOT__b2seg1__DOT____Vcellinp__i0____pinNumber4[1U] 
                      << 0xaU) | (vlSelf->top__DOT__b2seg1__DOT____Vcellinp__i0____pinNumber4[0U] 
                                  >> 0x16U)));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[3U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg1__DOT____Vcellinp__i0____pinNumber4[1U] 
                     >> 1U));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[4U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg1__DOT____Vcellinp__i0____pinNumber4[1U] 
                     >> 0xcU));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[5U] 
        = (0x7ffU & ((vlSelf->top__DOT__b2seg1__DOT____Vcellinp__i0____pinNumber4[2U] 
                      << 9U) | (vlSelf->top__DOT__b2seg1__DOT____Vcellinp__i0____pinNumber4[1U] 
                                >> 0x17U)));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[6U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg1__DOT____Vcellinp__i0____pinNumber4[2U] 
                     >> 2U));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[7U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg1__DOT____Vcellinp__i0____pinNumber4[2U] 
                     >> 0xdU));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[8U] 
        = (0x7ffU & ((vlSelf->top__DOT__b2seg1__DOT____Vcellinp__i0____pinNumber4[3U] 
                      << 8U) | (vlSelf->top__DOT__b2seg1__DOT____Vcellinp__i0____pinNumber4[2U] 
                                >> 0x18U)));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[9U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg1__DOT____Vcellinp__i0____pinNumber4[3U] 
                     >> 3U));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[0xaU] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg1__DOT____Vcellinp__i0____pinNumber4[3U] 
                     >> 0xeU));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[0xbU] 
        = (0x7ffU & ((vlSelf->top__DOT__b2seg1__DOT____Vcellinp__i0____pinNumber4[4U] 
                      << 7U) | (vlSelf->top__DOT__b2seg1__DOT____Vcellinp__i0____pinNumber4[3U] 
                                >> 0x19U)));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[0xcU] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg1__DOT____Vcellinp__i0____pinNumber4[4U] 
                     >> 4U));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[0xdU] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg1__DOT____Vcellinp__i0____pinNumber4[4U] 
                     >> 0xfU));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[0xeU] 
        = (0x7ffU & ((vlSelf->top__DOT__b2seg1__DOT____Vcellinp__i0____pinNumber4[5U] 
                      << 6U) | (vlSelf->top__DOT__b2seg1__DOT____Vcellinp__i0____pinNumber4[4U] 
                                >> 0x1aU)));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[0xfU] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg1__DOT____Vcellinp__i0____pinNumber4[5U] 
                     >> 5U));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[0U] 
        = (0x7ffU & vlSelf->top__DOT__b2seg2__DOT____Vcellinp__i0____pinNumber4[0U]);
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[1U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg2__DOT____Vcellinp__i0____pinNumber4[0U] 
                     >> 0xbU));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[2U] 
        = (0x7ffU & ((vlSelf->top__DOT__b2seg2__DOT____Vcellinp__i0____pinNumber4[1U] 
                      << 0xaU) | (vlSelf->top__DOT__b2seg2__DOT____Vcellinp__i0____pinNumber4[0U] 
                                  >> 0x16U)));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[3U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg2__DOT____Vcellinp__i0____pinNumber4[1U] 
                     >> 1U));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[4U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg2__DOT____Vcellinp__i0____pinNumber4[1U] 
                     >> 0xcU));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[5U] 
        = (0x7ffU & ((vlSelf->top__DOT__b2seg2__DOT____Vcellinp__i0____pinNumber4[2U] 
                      << 9U) | (vlSelf->top__DOT__b2seg2__DOT____Vcellinp__i0____pinNumber4[1U] 
                                >> 0x17U)));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[6U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg2__DOT____Vcellinp__i0____pinNumber4[2U] 
                     >> 2U));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[7U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg2__DOT____Vcellinp__i0____pinNumber4[2U] 
                     >> 0xdU));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[8U] 
        = (0x7ffU & ((vlSelf->top__DOT__b2seg2__DOT____Vcellinp__i0____pinNumber4[3U] 
                      << 8U) | (vlSelf->top__DOT__b2seg2__DOT____Vcellinp__i0____pinNumber4[2U] 
                                >> 0x18U)));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[9U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg2__DOT____Vcellinp__i0____pinNumber4[3U] 
                     >> 3U));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[0xaU] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg2__DOT____Vcellinp__i0____pinNumber4[3U] 
                     >> 0xeU));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[0xbU] 
        = (0x7ffU & ((vlSelf->top__DOT__b2seg2__DOT____Vcellinp__i0____pinNumber4[4U] 
                      << 7U) | (vlSelf->top__DOT__b2seg2__DOT____Vcellinp__i0____pinNumber4[3U] 
                                >> 0x19U)));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[0xcU] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg2__DOT____Vcellinp__i0____pinNumber4[4U] 
                     >> 4U));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[0xdU] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg2__DOT____Vcellinp__i0____pinNumber4[4U] 
                     >> 0xfU));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[0xeU] 
        = (0x7ffU & ((vlSelf->top__DOT__b2seg2__DOT____Vcellinp__i0____pinNumber4[5U] 
                      << 6U) | (vlSelf->top__DOT__b2seg2__DOT____Vcellinp__i0____pinNumber4[4U] 
                                >> 0x1aU)));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[0xfU] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg2__DOT____Vcellinp__i0____pinNumber4[5U] 
                     >> 5U));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[0U] 
        = (0x7ffU & vlSelf->top__DOT__b2seg2__DOT____Vcellinp__i0____pinNumber4[0U]);
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[1U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg2__DOT____Vcellinp__i0____pinNumber4[0U] 
                     >> 0xbU));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[2U] 
        = (0x7ffU & ((vlSelf->top__DOT__b2seg2__DOT____Vcellinp__i0____pinNumber4[1U] 
                      << 0xaU) | (vlSelf->top__DOT__b2seg2__DOT____Vcellinp__i0____pinNumber4[0U] 
                                  >> 0x16U)));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[3U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg2__DOT____Vcellinp__i0____pinNumber4[1U] 
                     >> 1U));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[4U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg2__DOT____Vcellinp__i0____pinNumber4[1U] 
                     >> 0xcU));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[5U] 
        = (0x7ffU & ((vlSelf->top__DOT__b2seg2__DOT____Vcellinp__i0____pinNumber4[2U] 
                      << 9U) | (vlSelf->top__DOT__b2seg2__DOT____Vcellinp__i0____pinNumber4[1U] 
                                >> 0x17U)));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[6U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg2__DOT____Vcellinp__i0____pinNumber4[2U] 
                     >> 2U));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[7U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg2__DOT____Vcellinp__i0____pinNumber4[2U] 
                     >> 0xdU));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[8U] 
        = (0x7ffU & ((vlSelf->top__DOT__b2seg2__DOT____Vcellinp__i0____pinNumber4[3U] 
                      << 8U) | (vlSelf->top__DOT__b2seg2__DOT____Vcellinp__i0____pinNumber4[2U] 
                                >> 0x18U)));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[9U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg2__DOT____Vcellinp__i0____pinNumber4[3U] 
                     >> 3U));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[0xaU] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg2__DOT____Vcellinp__i0____pinNumber4[3U] 
                     >> 0xeU));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[0xbU] 
        = (0x7ffU & ((vlSelf->top__DOT__b2seg2__DOT____Vcellinp__i0____pinNumber4[4U] 
                      << 7U) | (vlSelf->top__DOT__b2seg2__DOT____Vcellinp__i0____pinNumber4[3U] 
                                >> 0x19U)));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[0xcU] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg2__DOT____Vcellinp__i0____pinNumber4[4U] 
                     >> 4U));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[0xdU] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg2__DOT____Vcellinp__i0____pinNumber4[4U] 
                     >> 0xfU));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[0xeU] 
        = (0x7ffU & ((vlSelf->top__DOT__b2seg2__DOT____Vcellinp__i0____pinNumber4[5U] 
                      << 6U) | (vlSelf->top__DOT__b2seg2__DOT____Vcellinp__i0____pinNumber4[4U] 
                                >> 0x1aU)));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[0xfU] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg2__DOT____Vcellinp__i0____pinNumber4[5U] 
                     >> 5U));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[0U] 
        = (0x7ffU & vlSelf->top__DOT__b2seg3__DOT____Vcellinp__i0____pinNumber4[0U]);
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[1U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg3__DOT____Vcellinp__i0____pinNumber4[0U] 
                     >> 0xbU));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[2U] 
        = (0x7ffU & ((vlSelf->top__DOT__b2seg3__DOT____Vcellinp__i0____pinNumber4[1U] 
                      << 0xaU) | (vlSelf->top__DOT__b2seg3__DOT____Vcellinp__i0____pinNumber4[0U] 
                                  >> 0x16U)));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[3U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg3__DOT____Vcellinp__i0____pinNumber4[1U] 
                     >> 1U));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[4U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg3__DOT____Vcellinp__i0____pinNumber4[1U] 
                     >> 0xcU));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[5U] 
        = (0x7ffU & ((vlSelf->top__DOT__b2seg3__DOT____Vcellinp__i0____pinNumber4[2U] 
                      << 9U) | (vlSelf->top__DOT__b2seg3__DOT____Vcellinp__i0____pinNumber4[1U] 
                                >> 0x17U)));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[6U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg3__DOT____Vcellinp__i0____pinNumber4[2U] 
                     >> 2U));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[7U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg3__DOT____Vcellinp__i0____pinNumber4[2U] 
                     >> 0xdU));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[8U] 
        = (0x7ffU & ((vlSelf->top__DOT__b2seg3__DOT____Vcellinp__i0____pinNumber4[3U] 
                      << 8U) | (vlSelf->top__DOT__b2seg3__DOT____Vcellinp__i0____pinNumber4[2U] 
                                >> 0x18U)));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[9U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg3__DOT____Vcellinp__i0____pinNumber4[3U] 
                     >> 3U));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[0xaU] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg3__DOT____Vcellinp__i0____pinNumber4[3U] 
                     >> 0xeU));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[0xbU] 
        = (0x7ffU & ((vlSelf->top__DOT__b2seg3__DOT____Vcellinp__i0____pinNumber4[4U] 
                      << 7U) | (vlSelf->top__DOT__b2seg3__DOT____Vcellinp__i0____pinNumber4[3U] 
                                >> 0x19U)));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[0xcU] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg3__DOT____Vcellinp__i0____pinNumber4[4U] 
                     >> 4U));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[0xdU] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg3__DOT____Vcellinp__i0____pinNumber4[4U] 
                     >> 0xfU));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[0xeU] 
        = (0x7ffU & ((vlSelf->top__DOT__b2seg3__DOT____Vcellinp__i0____pinNumber4[5U] 
                      << 6U) | (vlSelf->top__DOT__b2seg3__DOT____Vcellinp__i0____pinNumber4[4U] 
                                >> 0x1aU)));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[0xfU] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg3__DOT____Vcellinp__i0____pinNumber4[5U] 
                     >> 5U));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[0U] 
        = (0x7ffU & vlSelf->top__DOT__b2seg3__DOT____Vcellinp__i0____pinNumber4[0U]);
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[1U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg3__DOT____Vcellinp__i0____pinNumber4[0U] 
                     >> 0xbU));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[2U] 
        = (0x7ffU & ((vlSelf->top__DOT__b2seg3__DOT____Vcellinp__i0____pinNumber4[1U] 
                      << 0xaU) | (vlSelf->top__DOT__b2seg3__DOT____Vcellinp__i0____pinNumber4[0U] 
                                  >> 0x16U)));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[3U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg3__DOT____Vcellinp__i0____pinNumber4[1U] 
                     >> 1U));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[4U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg3__DOT____Vcellinp__i0____pinNumber4[1U] 
                     >> 0xcU));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[5U] 
        = (0x7ffU & ((vlSelf->top__DOT__b2seg3__DOT____Vcellinp__i0____pinNumber4[2U] 
                      << 9U) | (vlSelf->top__DOT__b2seg3__DOT____Vcellinp__i0____pinNumber4[1U] 
                                >> 0x17U)));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[6U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg3__DOT____Vcellinp__i0____pinNumber4[2U] 
                     >> 2U));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[7U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg3__DOT____Vcellinp__i0____pinNumber4[2U] 
                     >> 0xdU));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[8U] 
        = (0x7ffU & ((vlSelf->top__DOT__b2seg3__DOT____Vcellinp__i0____pinNumber4[3U] 
                      << 8U) | (vlSelf->top__DOT__b2seg3__DOT____Vcellinp__i0____pinNumber4[2U] 
                                >> 0x18U)));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[9U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg3__DOT____Vcellinp__i0____pinNumber4[3U] 
                     >> 3U));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[0xaU] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg3__DOT____Vcellinp__i0____pinNumber4[3U] 
                     >> 0xeU));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[0xbU] 
        = (0x7ffU & ((vlSelf->top__DOT__b2seg3__DOT____Vcellinp__i0____pinNumber4[4U] 
                      << 7U) | (vlSelf->top__DOT__b2seg3__DOT____Vcellinp__i0____pinNumber4[3U] 
                                >> 0x19U)));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[0xcU] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg3__DOT____Vcellinp__i0____pinNumber4[4U] 
                     >> 4U));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[0xdU] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg3__DOT____Vcellinp__i0____pinNumber4[4U] 
                     >> 0xfU));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[0xeU] 
        = (0x7ffU & ((vlSelf->top__DOT__b2seg3__DOT____Vcellinp__i0____pinNumber4[5U] 
                      << 6U) | (vlSelf->top__DOT__b2seg3__DOT____Vcellinp__i0____pinNumber4[4U] 
                                >> 0x1aU)));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[0xfU] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg3__DOT____Vcellinp__i0____pinNumber4[5U] 
                     >> 5U));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[0U] 
        = (0x7ffU & vlSelf->top__DOT__b2seg4__DOT____Vcellinp__i0____pinNumber4[0U]);
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[1U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg4__DOT____Vcellinp__i0____pinNumber4[0U] 
                     >> 0xbU));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[2U] 
        = (0x7ffU & ((vlSelf->top__DOT__b2seg4__DOT____Vcellinp__i0____pinNumber4[1U] 
                      << 0xaU) | (vlSelf->top__DOT__b2seg4__DOT____Vcellinp__i0____pinNumber4[0U] 
                                  >> 0x16U)));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[3U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg4__DOT____Vcellinp__i0____pinNumber4[1U] 
                     >> 1U));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[4U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg4__DOT____Vcellinp__i0____pinNumber4[1U] 
                     >> 0xcU));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[5U] 
        = (0x7ffU & ((vlSelf->top__DOT__b2seg4__DOT____Vcellinp__i0____pinNumber4[2U] 
                      << 9U) | (vlSelf->top__DOT__b2seg4__DOT____Vcellinp__i0____pinNumber4[1U] 
                                >> 0x17U)));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[6U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg4__DOT____Vcellinp__i0____pinNumber4[2U] 
                     >> 2U));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[7U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg4__DOT____Vcellinp__i0____pinNumber4[2U] 
                     >> 0xdU));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[8U] 
        = (0x7ffU & ((vlSelf->top__DOT__b2seg4__DOT____Vcellinp__i0____pinNumber4[3U] 
                      << 8U) | (vlSelf->top__DOT__b2seg4__DOT____Vcellinp__i0____pinNumber4[2U] 
                                >> 0x18U)));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[9U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg4__DOT____Vcellinp__i0____pinNumber4[3U] 
                     >> 3U));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[0xaU] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg4__DOT____Vcellinp__i0____pinNumber4[3U] 
                     >> 0xeU));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[0xbU] 
        = (0x7ffU & ((vlSelf->top__DOT__b2seg4__DOT____Vcellinp__i0____pinNumber4[4U] 
                      << 7U) | (vlSelf->top__DOT__b2seg4__DOT____Vcellinp__i0____pinNumber4[3U] 
                                >> 0x19U)));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[0xcU] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg4__DOT____Vcellinp__i0____pinNumber4[4U] 
                     >> 4U));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[0xdU] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg4__DOT____Vcellinp__i0____pinNumber4[4U] 
                     >> 0xfU));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[0xeU] 
        = (0x7ffU & ((vlSelf->top__DOT__b2seg4__DOT____Vcellinp__i0____pinNumber4[5U] 
                      << 6U) | (vlSelf->top__DOT__b2seg4__DOT____Vcellinp__i0____pinNumber4[4U] 
                                >> 0x1aU)));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[0xfU] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg4__DOT____Vcellinp__i0____pinNumber4[5U] 
                     >> 5U));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[0U] 
        = (0x7ffU & vlSelf->top__DOT__b2seg4__DOT____Vcellinp__i0____pinNumber4[0U]);
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[1U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg4__DOT____Vcellinp__i0____pinNumber4[0U] 
                     >> 0xbU));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[2U] 
        = (0x7ffU & ((vlSelf->top__DOT__b2seg4__DOT____Vcellinp__i0____pinNumber4[1U] 
                      << 0xaU) | (vlSelf->top__DOT__b2seg4__DOT____Vcellinp__i0____pinNumber4[0U] 
                                  >> 0x16U)));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[3U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg4__DOT____Vcellinp__i0____pinNumber4[1U] 
                     >> 1U));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[4U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg4__DOT____Vcellinp__i0____pinNumber4[1U] 
                     >> 0xcU));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[5U] 
        = (0x7ffU & ((vlSelf->top__DOT__b2seg4__DOT____Vcellinp__i0____pinNumber4[2U] 
                      << 9U) | (vlSelf->top__DOT__b2seg4__DOT____Vcellinp__i0____pinNumber4[1U] 
                                >> 0x17U)));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[6U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg4__DOT____Vcellinp__i0____pinNumber4[2U] 
                     >> 2U));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[7U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg4__DOT____Vcellinp__i0____pinNumber4[2U] 
                     >> 0xdU));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[8U] 
        = (0x7ffU & ((vlSelf->top__DOT__b2seg4__DOT____Vcellinp__i0____pinNumber4[3U] 
                      << 8U) | (vlSelf->top__DOT__b2seg4__DOT____Vcellinp__i0____pinNumber4[2U] 
                                >> 0x18U)));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[9U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg4__DOT____Vcellinp__i0____pinNumber4[3U] 
                     >> 3U));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[0xaU] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg4__DOT____Vcellinp__i0____pinNumber4[3U] 
                     >> 0xeU));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[0xbU] 
        = (0x7ffU & ((vlSelf->top__DOT__b2seg4__DOT____Vcellinp__i0____pinNumber4[4U] 
                      << 7U) | (vlSelf->top__DOT__b2seg4__DOT____Vcellinp__i0____pinNumber4[3U] 
                                >> 0x19U)));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[0xcU] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg4__DOT____Vcellinp__i0____pinNumber4[4U] 
                     >> 4U));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[0xdU] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg4__DOT____Vcellinp__i0____pinNumber4[4U] 
                     >> 0xfU));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[0xeU] 
        = (0x7ffU & ((vlSelf->top__DOT__b2seg4__DOT____Vcellinp__i0____pinNumber4[5U] 
                      << 6U) | (vlSelf->top__DOT__b2seg4__DOT____Vcellinp__i0____pinNumber4[4U] 
                                >> 0x1aU)));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[0xfU] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg4__DOT____Vcellinp__i0____pinNumber4[5U] 
                     >> 5U));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[0U] 
        = (0x7ffU & vlSelf->top__DOT__b2seg5__DOT____Vcellinp__i0____pinNumber4[0U]);
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[1U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg5__DOT____Vcellinp__i0____pinNumber4[0U] 
                     >> 0xbU));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[2U] 
        = (0x7ffU & ((vlSelf->top__DOT__b2seg5__DOT____Vcellinp__i0____pinNumber4[1U] 
                      << 0xaU) | (vlSelf->top__DOT__b2seg5__DOT____Vcellinp__i0____pinNumber4[0U] 
                                  >> 0x16U)));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[3U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg5__DOT____Vcellinp__i0____pinNumber4[1U] 
                     >> 1U));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[4U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg5__DOT____Vcellinp__i0____pinNumber4[1U] 
                     >> 0xcU));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[5U] 
        = (0x7ffU & ((vlSelf->top__DOT__b2seg5__DOT____Vcellinp__i0____pinNumber4[2U] 
                      << 9U) | (vlSelf->top__DOT__b2seg5__DOT____Vcellinp__i0____pinNumber4[1U] 
                                >> 0x17U)));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[6U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg5__DOT____Vcellinp__i0____pinNumber4[2U] 
                     >> 2U));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[7U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg5__DOT____Vcellinp__i0____pinNumber4[2U] 
                     >> 0xdU));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[8U] 
        = (0x7ffU & ((vlSelf->top__DOT__b2seg5__DOT____Vcellinp__i0____pinNumber4[3U] 
                      << 8U) | (vlSelf->top__DOT__b2seg5__DOT____Vcellinp__i0____pinNumber4[2U] 
                                >> 0x18U)));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[9U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg5__DOT____Vcellinp__i0____pinNumber4[3U] 
                     >> 3U));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[0xaU] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg5__DOT____Vcellinp__i0____pinNumber4[3U] 
                     >> 0xeU));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[0xbU] 
        = (0x7ffU & ((vlSelf->top__DOT__b2seg5__DOT____Vcellinp__i0____pinNumber4[4U] 
                      << 7U) | (vlSelf->top__DOT__b2seg5__DOT____Vcellinp__i0____pinNumber4[3U] 
                                >> 0x19U)));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[0xcU] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg5__DOT____Vcellinp__i0____pinNumber4[4U] 
                     >> 4U));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[0xdU] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg5__DOT____Vcellinp__i0____pinNumber4[4U] 
                     >> 0xfU));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[0xeU] 
        = (0x7ffU & ((vlSelf->top__DOT__b2seg5__DOT____Vcellinp__i0____pinNumber4[5U] 
                      << 6U) | (vlSelf->top__DOT__b2seg5__DOT____Vcellinp__i0____pinNumber4[4U] 
                                >> 0x1aU)));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[0xfU] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg5__DOT____Vcellinp__i0____pinNumber4[5U] 
                     >> 5U));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[0U] 
        = (0x7ffU & vlSelf->top__DOT__b2seg5__DOT____Vcellinp__i0____pinNumber4[0U]);
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[1U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg5__DOT____Vcellinp__i0____pinNumber4[0U] 
                     >> 0xbU));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[2U] 
        = (0x7ffU & ((vlSelf->top__DOT__b2seg5__DOT____Vcellinp__i0____pinNumber4[1U] 
                      << 0xaU) | (vlSelf->top__DOT__b2seg5__DOT____Vcellinp__i0____pinNumber4[0U] 
                                  >> 0x16U)));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[3U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg5__DOT____Vcellinp__i0____pinNumber4[1U] 
                     >> 1U));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[4U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg5__DOT____Vcellinp__i0____pinNumber4[1U] 
                     >> 0xcU));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[5U] 
        = (0x7ffU & ((vlSelf->top__DOT__b2seg5__DOT____Vcellinp__i0____pinNumber4[2U] 
                      << 9U) | (vlSelf->top__DOT__b2seg5__DOT____Vcellinp__i0____pinNumber4[1U] 
                                >> 0x17U)));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[6U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg5__DOT____Vcellinp__i0____pinNumber4[2U] 
                     >> 2U));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[7U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg5__DOT____Vcellinp__i0____pinNumber4[2U] 
                     >> 0xdU));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[8U] 
        = (0x7ffU & ((vlSelf->top__DOT__b2seg5__DOT____Vcellinp__i0____pinNumber4[3U] 
                      << 8U) | (vlSelf->top__DOT__b2seg5__DOT____Vcellinp__i0____pinNumber4[2U] 
                                >> 0x18U)));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[9U] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg5__DOT____Vcellinp__i0____pinNumber4[3U] 
                     >> 3U));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[0xaU] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg5__DOT____Vcellinp__i0____pinNumber4[3U] 
                     >> 0xeU));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[0xbU] 
        = (0x7ffU & ((vlSelf->top__DOT__b2seg5__DOT____Vcellinp__i0____pinNumber4[4U] 
                      << 7U) | (vlSelf->top__DOT__b2seg5__DOT____Vcellinp__i0____pinNumber4[3U] 
                                >> 0x19U)));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[0xcU] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg5__DOT____Vcellinp__i0____pinNumber4[4U] 
                     >> 4U));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[0xdU] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg5__DOT____Vcellinp__i0____pinNumber4[4U] 
                     >> 0xfU));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[0xeU] 
        = (0x7ffU & ((vlSelf->top__DOT__b2seg5__DOT____Vcellinp__i0____pinNumber4[5U] 
                      << 6U) | (vlSelf->top__DOT__b2seg5__DOT____Vcellinp__i0____pinNumber4[4U] 
                                >> 0x1aU)));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[0xfU] 
        = (0x7ffU & (vlSelf->top__DOT__b2seg5__DOT____Vcellinp__i0____pinNumber4[5U] 
                     >> 5U));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[0U] 
        = (0x7fU & vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[0U] 
        = (0xfU & (vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
                   [0U] >> 7U));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[1U] 
        = (0x7fU & vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[1U] 
        = (0xfU & (vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
                   [1U] >> 7U));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[2U] 
        = (0x7fU & vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[2U] 
        = (0xfU & (vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
                   [2U] >> 7U));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[3U] 
        = (0x7fU & vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[3U] 
        = (0xfU & (vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
                   [3U] >> 7U));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[4U] 
        = (0x7fU & vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[4U] 
        = (0xfU & (vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
                   [4U] >> 7U));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[5U] 
        = (0x7fU & vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
           [5U]);
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[5U] 
        = (0xfU & (vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
                   [5U] >> 7U));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[6U] 
        = (0x7fU & vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
           [6U]);
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[6U] 
        = (0xfU & (vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
                   [6U] >> 7U));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[7U] 
        = (0x7fU & vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
           [7U]);
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[7U] 
        = (0xfU & (vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
                   [7U] >> 7U));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[8U] 
        = (0x7fU & vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
           [8U]);
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[8U] 
        = (0xfU & (vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
                   [8U] >> 7U));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[9U] 
        = (0x7fU & vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
           [9U]);
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[9U] 
        = (0xfU & (vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
                   [9U] >> 7U));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[0xaU] 
        = (0x7fU & vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
           [0xaU]);
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[0xaU] 
        = (0xfU & (vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
                   [0xaU] >> 7U));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[0xbU] 
        = (0x7fU & vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
           [0xbU]);
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[0xbU] 
        = (0xfU & (vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
                   [0xbU] >> 7U));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[0xcU] 
        = (0x7fU & vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
           [0xcU]);
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[0xcU] 
        = (0xfU & (vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
                   [0xcU] >> 7U));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[0xdU] 
        = (0x7fU & vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
           [0xdU]);
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[0xdU] 
        = (0xfU & (vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
                   [0xdU] >> 7U));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[0xeU] 
        = (0x7fU & vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
           [0xeU]);
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[0xeU] 
        = (0xfU & (vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
                   [0xeU] >> 7U));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[0xfU] 
        = (0x7fU & vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
           [0xfU]);
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[0xfU] 
        = (0xfU & (vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
                   [0xfU] >> 7U));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[0U] 
        = (0x7fU & vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[0U] 
        = (0xfU & (vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
                   [0U] >> 7U));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[1U] 
        = (0x7fU & vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[1U] 
        = (0xfU & (vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
                   [1U] >> 7U));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[2U] 
        = (0x7fU & vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[2U] 
        = (0xfU & (vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
                   [2U] >> 7U));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[3U] 
        = (0x7fU & vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[3U] 
        = (0xfU & (vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
                   [3U] >> 7U));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[4U] 
        = (0x7fU & vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[4U] 
        = (0xfU & (vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
                   [4U] >> 7U));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[5U] 
        = (0x7fU & vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
           [5U]);
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[5U] 
        = (0xfU & (vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
                   [5U] >> 7U));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[6U] 
        = (0x7fU & vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
           [6U]);
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[6U] 
        = (0xfU & (vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
                   [6U] >> 7U));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[7U] 
        = (0x7fU & vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
           [7U]);
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[7U] 
        = (0xfU & (vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
                   [7U] >> 7U));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[8U] 
        = (0x7fU & vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
           [8U]);
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[8U] 
        = (0xfU & (vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
                   [8U] >> 7U));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[9U] 
        = (0x7fU & vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
           [9U]);
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[9U] 
        = (0xfU & (vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
                   [9U] >> 7U));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[0xaU] 
        = (0x7fU & vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
           [0xaU]);
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[0xaU] 
        = (0xfU & (vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
                   [0xaU] >> 7U));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[0xbU] 
        = (0x7fU & vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
           [0xbU]);
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[0xbU] 
        = (0xfU & (vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
                   [0xbU] >> 7U));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[0xcU] 
        = (0x7fU & vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
           [0xcU]);
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[0xcU] 
        = (0xfU & (vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
                   [0xcU] >> 7U));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[0xdU] 
        = (0x7fU & vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
           [0xdU]);
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[0xdU] 
        = (0xfU & (vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
                   [0xdU] >> 7U));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[0xeU] 
        = (0x7fU & vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
           [0xeU]);
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[0xeU] 
        = (0xfU & (vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
                   [0xeU] >> 7U));
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[0xfU] 
        = (0x7fU & vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
           [0xfU]);
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[0xfU] 
        = (0xfU & (vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list
                   [0xfU] >> 7U));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[0U] 
        = (0x7fU & vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[0U] 
        = (0xfU & (vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
                   [0U] >> 7U));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[1U] 
        = (0x7fU & vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[1U] 
        = (0xfU & (vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
                   [1U] >> 7U));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[2U] 
        = (0x7fU & vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[2U] 
        = (0xfU & (vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
                   [2U] >> 7U));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[3U] 
        = (0x7fU & vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[3U] 
        = (0xfU & (vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
                   [3U] >> 7U));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[4U] 
        = (0x7fU & vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[4U] 
        = (0xfU & (vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
                   [4U] >> 7U));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[5U] 
        = (0x7fU & vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
           [5U]);
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[5U] 
        = (0xfU & (vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
                   [5U] >> 7U));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[6U] 
        = (0x7fU & vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
           [6U]);
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[6U] 
        = (0xfU & (vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
                   [6U] >> 7U));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[7U] 
        = (0x7fU & vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
           [7U]);
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[7U] 
        = (0xfU & (vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
                   [7U] >> 7U));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[8U] 
        = (0x7fU & vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
           [8U]);
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[8U] 
        = (0xfU & (vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
                   [8U] >> 7U));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[9U] 
        = (0x7fU & vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
           [9U]);
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[9U] 
        = (0xfU & (vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
                   [9U] >> 7U));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[0xaU] 
        = (0x7fU & vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
           [0xaU]);
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[0xaU] 
        = (0xfU & (vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
                   [0xaU] >> 7U));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[0xbU] 
        = (0x7fU & vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
           [0xbU]);
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[0xbU] 
        = (0xfU & (vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
                   [0xbU] >> 7U));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[0xcU] 
        = (0x7fU & vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
           [0xcU]);
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[0xcU] 
        = (0xfU & (vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
                   [0xcU] >> 7U));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[0xdU] 
        = (0x7fU & vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
           [0xdU]);
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[0xdU] 
        = (0xfU & (vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
                   [0xdU] >> 7U));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[0xeU] 
        = (0x7fU & vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
           [0xeU]);
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[0xeU] 
        = (0xfU & (vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
                   [0xeU] >> 7U));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[0xfU] 
        = (0x7fU & vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
           [0xfU]);
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[0xfU] 
        = (0xfU & (vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
                   [0xfU] >> 7U));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[0U] 
        = (0x7fU & vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[0U] 
        = (0xfU & (vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
                   [0U] >> 7U));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[1U] 
        = (0x7fU & vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[1U] 
        = (0xfU & (vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
                   [1U] >> 7U));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[2U] 
        = (0x7fU & vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[2U] 
        = (0xfU & (vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
                   [2U] >> 7U));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[3U] 
        = (0x7fU & vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[3U] 
        = (0xfU & (vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
                   [3U] >> 7U));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[4U] 
        = (0x7fU & vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[4U] 
        = (0xfU & (vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
                   [4U] >> 7U));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[5U] 
        = (0x7fU & vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
           [5U]);
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[5U] 
        = (0xfU & (vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
                   [5U] >> 7U));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[6U] 
        = (0x7fU & vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
           [6U]);
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[6U] 
        = (0xfU & (vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
                   [6U] >> 7U));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[7U] 
        = (0x7fU & vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
           [7U]);
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[7U] 
        = (0xfU & (vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
                   [7U] >> 7U));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[8U] 
        = (0x7fU & vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
           [8U]);
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[8U] 
        = (0xfU & (vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
                   [8U] >> 7U));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[9U] 
        = (0x7fU & vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
           [9U]);
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[9U] 
        = (0xfU & (vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
                   [9U] >> 7U));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[0xaU] 
        = (0x7fU & vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
           [0xaU]);
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[0xaU] 
        = (0xfU & (vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
                   [0xaU] >> 7U));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[0xbU] 
        = (0x7fU & vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
           [0xbU]);
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[0xbU] 
        = (0xfU & (vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
                   [0xbU] >> 7U));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[0xcU] 
        = (0x7fU & vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
           [0xcU]);
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[0xcU] 
        = (0xfU & (vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
                   [0xcU] >> 7U));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[0xdU] 
        = (0x7fU & vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
           [0xdU]);
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[0xdU] 
        = (0xfU & (vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
                   [0xdU] >> 7U));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[0xeU] 
        = (0x7fU & vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
           [0xeU]);
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[0xeU] 
        = (0xfU & (vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
                   [0xeU] >> 7U));
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[0xfU] 
        = (0x7fU & vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
           [0xfU]);
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[0xfU] 
        = (0xfU & (vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list
                   [0xfU] >> 7U));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[0U] 
        = (0x7fU & vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[0U] 
        = (0xfU & (vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
                   [0U] >> 7U));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[1U] 
        = (0x7fU & vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[1U] 
        = (0xfU & (vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
                   [1U] >> 7U));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[2U] 
        = (0x7fU & vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[2U] 
        = (0xfU & (vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
                   [2U] >> 7U));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[3U] 
        = (0x7fU & vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[3U] 
        = (0xfU & (vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
                   [3U] >> 7U));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[4U] 
        = (0x7fU & vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[4U] 
        = (0xfU & (vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
                   [4U] >> 7U));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[5U] 
        = (0x7fU & vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
           [5U]);
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[5U] 
        = (0xfU & (vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
                   [5U] >> 7U));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[6U] 
        = (0x7fU & vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
           [6U]);
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[6U] 
        = (0xfU & (vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
                   [6U] >> 7U));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[7U] 
        = (0x7fU & vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
           [7U]);
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[7U] 
        = (0xfU & (vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
                   [7U] >> 7U));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[8U] 
        = (0x7fU & vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
           [8U]);
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[8U] 
        = (0xfU & (vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
                   [8U] >> 7U));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[9U] 
        = (0x7fU & vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
           [9U]);
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[9U] 
        = (0xfU & (vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
                   [9U] >> 7U));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[0xaU] 
        = (0x7fU & vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
           [0xaU]);
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[0xaU] 
        = (0xfU & (vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
                   [0xaU] >> 7U));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[0xbU] 
        = (0x7fU & vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
           [0xbU]);
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[0xbU] 
        = (0xfU & (vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
                   [0xbU] >> 7U));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[0xcU] 
        = (0x7fU & vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
           [0xcU]);
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[0xcU] 
        = (0xfU & (vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
                   [0xcU] >> 7U));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[0xdU] 
        = (0x7fU & vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
           [0xdU]);
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[0xdU] 
        = (0xfU & (vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
                   [0xdU] >> 7U));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[0xeU] 
        = (0x7fU & vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
           [0xeU]);
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[0xeU] 
        = (0xfU & (vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
                   [0xeU] >> 7U));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[0xfU] 
        = (0x7fU & vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
           [0xfU]);
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[0xfU] 
        = (0xfU & (vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
                   [0xfU] >> 7U));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[0U] 
        = (0x7fU & vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[0U] 
        = (0xfU & (vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
                   [0U] >> 7U));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[1U] 
        = (0x7fU & vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[1U] 
        = (0xfU & (vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
                   [1U] >> 7U));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[2U] 
        = (0x7fU & vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[2U] 
        = (0xfU & (vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
                   [2U] >> 7U));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[3U] 
        = (0x7fU & vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[3U] 
        = (0xfU & (vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
                   [3U] >> 7U));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[4U] 
        = (0x7fU & vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[4U] 
        = (0xfU & (vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
                   [4U] >> 7U));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[5U] 
        = (0x7fU & vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
           [5U]);
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[5U] 
        = (0xfU & (vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
                   [5U] >> 7U));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[6U] 
        = (0x7fU & vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
           [6U]);
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[6U] 
        = (0xfU & (vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
                   [6U] >> 7U));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[7U] 
        = (0x7fU & vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
           [7U]);
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[7U] 
        = (0xfU & (vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
                   [7U] >> 7U));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[8U] 
        = (0x7fU & vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
           [8U]);
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[8U] 
        = (0xfU & (vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
                   [8U] >> 7U));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[9U] 
        = (0x7fU & vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
           [9U]);
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[9U] 
        = (0xfU & (vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
                   [9U] >> 7U));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[0xaU] 
        = (0x7fU & vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
           [0xaU]);
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[0xaU] 
        = (0xfU & (vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
                   [0xaU] >> 7U));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[0xbU] 
        = (0x7fU & vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
           [0xbU]);
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[0xbU] 
        = (0xfU & (vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
                   [0xbU] >> 7U));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[0xcU] 
        = (0x7fU & vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
           [0xcU]);
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[0xcU] 
        = (0xfU & (vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
                   [0xcU] >> 7U));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[0xdU] 
        = (0x7fU & vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
           [0xdU]);
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[0xdU] 
        = (0xfU & (vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
                   [0xdU] >> 7U));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[0xeU] 
        = (0x7fU & vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
           [0xeU]);
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[0xeU] 
        = (0xfU & (vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
                   [0xeU] >> 7U));
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[0xfU] 
        = (0x7fU & vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
           [0xfU]);
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[0xfU] 
        = (0xfU & (vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list
                   [0xfU] >> 7U));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[0U] 
        = (0x7fU & vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[0U] 
        = (0xfU & (vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
                   [0U] >> 7U));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[1U] 
        = (0x7fU & vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[1U] 
        = (0xfU & (vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
                   [1U] >> 7U));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[2U] 
        = (0x7fU & vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[2U] 
        = (0xfU & (vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
                   [2U] >> 7U));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[3U] 
        = (0x7fU & vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[3U] 
        = (0xfU & (vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
                   [3U] >> 7U));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[4U] 
        = (0x7fU & vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[4U] 
        = (0xfU & (vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
                   [4U] >> 7U));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[5U] 
        = (0x7fU & vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
           [5U]);
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[5U] 
        = (0xfU & (vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
                   [5U] >> 7U));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[6U] 
        = (0x7fU & vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
           [6U]);
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[6U] 
        = (0xfU & (vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
                   [6U] >> 7U));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[7U] 
        = (0x7fU & vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
           [7U]);
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[7U] 
        = (0xfU & (vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
                   [7U] >> 7U));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[8U] 
        = (0x7fU & vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
           [8U]);
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[8U] 
        = (0xfU & (vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
                   [8U] >> 7U));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[9U] 
        = (0x7fU & vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
           [9U]);
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[9U] 
        = (0xfU & (vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
                   [9U] >> 7U));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[0xaU] 
        = (0x7fU & vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
           [0xaU]);
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[0xaU] 
        = (0xfU & (vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
                   [0xaU] >> 7U));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[0xbU] 
        = (0x7fU & vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
           [0xbU]);
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[0xbU] 
        = (0xfU & (vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
                   [0xbU] >> 7U));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[0xcU] 
        = (0x7fU & vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
           [0xcU]);
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[0xcU] 
        = (0xfU & (vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
                   [0xcU] >> 7U));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[0xdU] 
        = (0x7fU & vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
           [0xdU]);
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[0xdU] 
        = (0xfU & (vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
                   [0xdU] >> 7U));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[0xeU] 
        = (0x7fU & vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
           [0xeU]);
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[0xeU] 
        = (0xfU & (vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
                   [0xeU] >> 7U));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[0xfU] 
        = (0x7fU & vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
           [0xfU]);
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[0xfU] 
        = (0xfU & (vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
                   [0xfU] >> 7U));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[0U] 
        = (0x7fU & vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[0U] 
        = (0xfU & (vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
                   [0U] >> 7U));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[1U] 
        = (0x7fU & vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[1U] 
        = (0xfU & (vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
                   [1U] >> 7U));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[2U] 
        = (0x7fU & vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[2U] 
        = (0xfU & (vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
                   [2U] >> 7U));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[3U] 
        = (0x7fU & vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[3U] 
        = (0xfU & (vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
                   [3U] >> 7U));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[4U] 
        = (0x7fU & vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[4U] 
        = (0xfU & (vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
                   [4U] >> 7U));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[5U] 
        = (0x7fU & vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
           [5U]);
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[5U] 
        = (0xfU & (vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
                   [5U] >> 7U));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[6U] 
        = (0x7fU & vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
           [6U]);
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[6U] 
        = (0xfU & (vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
                   [6U] >> 7U));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[7U] 
        = (0x7fU & vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
           [7U]);
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[7U] 
        = (0xfU & (vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
                   [7U] >> 7U));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[8U] 
        = (0x7fU & vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
           [8U]);
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[8U] 
        = (0xfU & (vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
                   [8U] >> 7U));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[9U] 
        = (0x7fU & vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
           [9U]);
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[9U] 
        = (0xfU & (vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
                   [9U] >> 7U));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[0xaU] 
        = (0x7fU & vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
           [0xaU]);
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[0xaU] 
        = (0xfU & (vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
                   [0xaU] >> 7U));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[0xbU] 
        = (0x7fU & vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
           [0xbU]);
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[0xbU] 
        = (0xfU & (vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
                   [0xbU] >> 7U));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[0xcU] 
        = (0x7fU & vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
           [0xcU]);
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[0xcU] 
        = (0xfU & (vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
                   [0xcU] >> 7U));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[0xdU] 
        = (0x7fU & vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
           [0xdU]);
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[0xdU] 
        = (0xfU & (vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
                   [0xdU] >> 7U));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[0xeU] 
        = (0x7fU & vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
           [0xeU]);
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[0xeU] 
        = (0xfU & (vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
                   [0xeU] >> 7U));
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[0xfU] 
        = (0x7fU & vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
           [0xfU]);
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[0xfU] 
        = (0xfU & (vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list
                   [0xfU] >> 7U));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[0U] 
        = (0x7fU & vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[0U] 
        = (0xfU & (vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
                   [0U] >> 7U));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[1U] 
        = (0x7fU & vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[1U] 
        = (0xfU & (vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
                   [1U] >> 7U));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[2U] 
        = (0x7fU & vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[2U] 
        = (0xfU & (vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
                   [2U] >> 7U));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[3U] 
        = (0x7fU & vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[3U] 
        = (0xfU & (vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
                   [3U] >> 7U));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[4U] 
        = (0x7fU & vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[4U] 
        = (0xfU & (vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
                   [4U] >> 7U));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[5U] 
        = (0x7fU & vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
           [5U]);
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[5U] 
        = (0xfU & (vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
                   [5U] >> 7U));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[6U] 
        = (0x7fU & vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
           [6U]);
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[6U] 
        = (0xfU & (vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
                   [6U] >> 7U));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[7U] 
        = (0x7fU & vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
           [7U]);
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[7U] 
        = (0xfU & (vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
                   [7U] >> 7U));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[8U] 
        = (0x7fU & vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
           [8U]);
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[8U] 
        = (0xfU & (vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
                   [8U] >> 7U));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[9U] 
        = (0x7fU & vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
           [9U]);
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[9U] 
        = (0xfU & (vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
                   [9U] >> 7U));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[0xaU] 
        = (0x7fU & vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
           [0xaU]);
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[0xaU] 
        = (0xfU & (vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
                   [0xaU] >> 7U));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[0xbU] 
        = (0x7fU & vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
           [0xbU]);
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[0xbU] 
        = (0xfU & (vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
                   [0xbU] >> 7U));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[0xcU] 
        = (0x7fU & vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
           [0xcU]);
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[0xcU] 
        = (0xfU & (vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
                   [0xcU] >> 7U));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[0xdU] 
        = (0x7fU & vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
           [0xdU]);
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[0xdU] 
        = (0xfU & (vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
                   [0xdU] >> 7U));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[0xeU] 
        = (0x7fU & vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
           [0xeU]);
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[0xeU] 
        = (0xfU & (vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
                   [0xeU] >> 7U));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[0xfU] 
        = (0x7fU & vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
           [0xfU]);
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[0xfU] 
        = (0xfU & (vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
                   [0xfU] >> 7U));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[0U] 
        = (0x7fU & vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[0U] 
        = (0xfU & (vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
                   [0U] >> 7U));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[1U] 
        = (0x7fU & vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[1U] 
        = (0xfU & (vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
                   [1U] >> 7U));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[2U] 
        = (0x7fU & vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[2U] 
        = (0xfU & (vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
                   [2U] >> 7U));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[3U] 
        = (0x7fU & vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[3U] 
        = (0xfU & (vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
                   [3U] >> 7U));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[4U] 
        = (0x7fU & vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[4U] 
        = (0xfU & (vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
                   [4U] >> 7U));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[5U] 
        = (0x7fU & vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
           [5U]);
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[5U] 
        = (0xfU & (vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
                   [5U] >> 7U));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[6U] 
        = (0x7fU & vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
           [6U]);
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[6U] 
        = (0xfU & (vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
                   [6U] >> 7U));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[7U] 
        = (0x7fU & vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
           [7U]);
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[7U] 
        = (0xfU & (vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
                   [7U] >> 7U));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[8U] 
        = (0x7fU & vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
           [8U]);
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[8U] 
        = (0xfU & (vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
                   [8U] >> 7U));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[9U] 
        = (0x7fU & vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
           [9U]);
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[9U] 
        = (0xfU & (vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
                   [9U] >> 7U));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[0xaU] 
        = (0x7fU & vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
           [0xaU]);
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[0xaU] 
        = (0xfU & (vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
                   [0xaU] >> 7U));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[0xbU] 
        = (0x7fU & vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
           [0xbU]);
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[0xbU] 
        = (0xfU & (vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
                   [0xbU] >> 7U));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[0xcU] 
        = (0x7fU & vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
           [0xcU]);
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[0xcU] 
        = (0xfU & (vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
                   [0xcU] >> 7U));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[0xdU] 
        = (0x7fU & vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
           [0xdU]);
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[0xdU] 
        = (0xfU & (vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
                   [0xdU] >> 7U));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[0xeU] 
        = (0x7fU & vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
           [0xeU]);
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[0xeU] 
        = (0xfU & (vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
                   [0xeU] >> 7U));
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[0xfU] 
        = (0x7fU & vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
           [0xfU]);
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[0xfU] 
        = (0xfU & (vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list
                   [0xfU] >> 7U));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[0U] 
        = (0x7fU & vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[0U] 
        = (0xfU & (vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
                   [0U] >> 7U));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[1U] 
        = (0x7fU & vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[1U] 
        = (0xfU & (vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
                   [1U] >> 7U));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[2U] 
        = (0x7fU & vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[2U] 
        = (0xfU & (vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
                   [2U] >> 7U));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[3U] 
        = (0x7fU & vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[3U] 
        = (0xfU & (vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
                   [3U] >> 7U));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[4U] 
        = (0x7fU & vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[4U] 
        = (0xfU & (vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
                   [4U] >> 7U));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[5U] 
        = (0x7fU & vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
           [5U]);
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[5U] 
        = (0xfU & (vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
                   [5U] >> 7U));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[6U] 
        = (0x7fU & vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
           [6U]);
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[6U] 
        = (0xfU & (vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
                   [6U] >> 7U));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[7U] 
        = (0x7fU & vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
           [7U]);
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[7U] 
        = (0xfU & (vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
                   [7U] >> 7U));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[8U] 
        = (0x7fU & vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
           [8U]);
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[8U] 
        = (0xfU & (vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
                   [8U] >> 7U));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[9U] 
        = (0x7fU & vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
           [9U]);
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[9U] 
        = (0xfU & (vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
                   [9U] >> 7U));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[0xaU] 
        = (0x7fU & vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
           [0xaU]);
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[0xaU] 
        = (0xfU & (vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
                   [0xaU] >> 7U));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[0xbU] 
        = (0x7fU & vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
           [0xbU]);
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[0xbU] 
        = (0xfU & (vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
                   [0xbU] >> 7U));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[0xcU] 
        = (0x7fU & vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
           [0xcU]);
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[0xcU] 
        = (0xfU & (vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
                   [0xcU] >> 7U));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[0xdU] 
        = (0x7fU & vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
           [0xdU]);
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[0xdU] 
        = (0xfU & (vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
                   [0xdU] >> 7U));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[0xeU] 
        = (0x7fU & vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
           [0xeU]);
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[0xeU] 
        = (0xfU & (vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
                   [0xeU] >> 7U));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[0xfU] 
        = (0x7fU & vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
           [0xfU]);
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[0xfU] 
        = (0xfU & (vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
                   [0xfU] >> 7U));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[0U] 
        = (0x7fU & vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[0U] 
        = (0xfU & (vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
                   [0U] >> 7U));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[1U] 
        = (0x7fU & vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[1U] 
        = (0xfU & (vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
                   [1U] >> 7U));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[2U] 
        = (0x7fU & vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[2U] 
        = (0xfU & (vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
                   [2U] >> 7U));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[3U] 
        = (0x7fU & vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[3U] 
        = (0xfU & (vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
                   [3U] >> 7U));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[4U] 
        = (0x7fU & vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[4U] 
        = (0xfU & (vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
                   [4U] >> 7U));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[5U] 
        = (0x7fU & vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
           [5U]);
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[5U] 
        = (0xfU & (vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
                   [5U] >> 7U));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[6U] 
        = (0x7fU & vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
           [6U]);
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[6U] 
        = (0xfU & (vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
                   [6U] >> 7U));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[7U] 
        = (0x7fU & vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
           [7U]);
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[7U] 
        = (0xfU & (vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
                   [7U] >> 7U));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[8U] 
        = (0x7fU & vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
           [8U]);
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[8U] 
        = (0xfU & (vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
                   [8U] >> 7U));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[9U] 
        = (0x7fU & vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
           [9U]);
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[9U] 
        = (0xfU & (vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
                   [9U] >> 7U));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[0xaU] 
        = (0x7fU & vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
           [0xaU]);
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[0xaU] 
        = (0xfU & (vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
                   [0xaU] >> 7U));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[0xbU] 
        = (0x7fU & vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
           [0xbU]);
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[0xbU] 
        = (0xfU & (vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
                   [0xbU] >> 7U));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[0xcU] 
        = (0x7fU & vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
           [0xcU]);
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[0xcU] 
        = (0xfU & (vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
                   [0xcU] >> 7U));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[0xdU] 
        = (0x7fU & vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
           [0xdU]);
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[0xdU] 
        = (0xfU & (vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
                   [0xdU] >> 7U));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[0xeU] 
        = (0x7fU & vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
           [0xeU]);
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[0xeU] 
        = (0xfU & (vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
                   [0xeU] >> 7U));
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[0xfU] 
        = (0x7fU & vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
           [0xfU]);
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[0xfU] 
        = (0xfU & (vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list
                   [0xfU] >> 7U));
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
    vlSelf->HEX0 = ((1U & (IData)(vlSelf->HEX0)) | 
                    ((IData)(vlSelf->top__DOT____Vcellout__b2seg0__seg_out) 
                     << 1U));
    vlSelf->HEX1 = ((1U & (IData)(vlSelf->HEX1)) | 
                    ((IData)(vlSelf->top__DOT____Vcellout__b2seg1__seg_out) 
                     << 1U));
    vlSelf->HEX2 = ((1U & (IData)(vlSelf->HEX2)) | 
                    ((IData)(vlSelf->top__DOT____Vcellout__b2seg2__seg_out) 
                     << 1U));
    vlSelf->HEX3 = ((1U & (IData)(vlSelf->HEX3)) | 
                    ((IData)(vlSelf->top__DOT____Vcellout__b2seg3__seg_out) 
                     << 1U));
}

extern const VlWide<14>/*447:0*/ Vtop__ConstPool__CONST_d066a659_0;

void Vtop___024root___initial__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__3\n"); );
    // Body
    VL_READMEM_N(true, 8, 256, 0, VL_CVT_PACK_STR_NW(14, Vtop__ConstPool__CONST_d066a659_0)
                 ,  &(vlSelf->top__DOT__vram__DOT__ram)
                 , 0, ~0ULL);
    vlSelf->top__DOT__count = 0U;
    vlSelf->top__DOT__sigwe = 0U;
}

void Vtop___024root___settle__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__4\n"); );
    // Body
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
    vlSelf->HEX4 = ((1U & (IData)(vlSelf->HEX4)) | 
                    ((IData)(vlSelf->top__DOT____Vcellout__b2seg4__seg_out) 
                     << 1U));
    vlSelf->HEX5 = ((1U & (IData)(vlSelf->HEX5)) | 
                    ((IData)(vlSelf->top__DOT____Vcellout__b2seg5__seg_out) 
                     << 1U));
}

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    Vtop___024root___initial__TOP__3(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vtop___024root___settle__TOP__4(vlSelf);
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
    vlSelf->clrn = 0;
    vlSelf->ps2_clk = 0;
    vlSelf->ps2_data = 0;
    vlSelf->we = 0;
    vlSelf->din = 0;
    vlSelf->sw = 0;
    vlSelf->btn = 0;
    vlSelf->scancode = 0;
    vlSelf->asciicode = 0;
    vlSelf->ready = 0;
    vlSelf->overflow = 0;
    vlSelf->out = 0;
    vlSelf->led = 0;
    vlSelf->HEX0 = 0;
    vlSelf->HEX1 = 0;
    vlSelf->HEX2 = 0;
    vlSelf->HEX3 = 0;
    vlSelf->HEX4 = 0;
    vlSelf->HEX5 = 0;
    vlSelf->top__DOT__sigwe = 0;
    vlSelf->top__DOT__count = 0;
    vlSelf->top__DOT____Vcellout__b2seg0__seg_out = 0;
    vlSelf->top__DOT____Vcellout__b2seg1__seg_out = 0;
    vlSelf->top__DOT____Vcellout__b2seg2__seg_out = 0;
    vlSelf->top__DOT____Vcellout__b2seg3__seg_out = 0;
    vlSelf->top__DOT____Vcellout__b2seg4__seg_out = 0;
    vlSelf->top__DOT____Vcellout__b2seg5__seg_out = 0;
    vlSelf->top__DOT__pkb__DOT__buffer = 0;
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top__DOT__pkb__DOT__fifo[__Vi0] = 0;
    }
    vlSelf->top__DOT__pkb__DOT__w_ptr = 0;
    vlSelf->top__DOT__pkb__DOT__r_ptr = 0;
    vlSelf->top__DOT__pkb__DOT__count = 0;
    vlSelf->top__DOT__pkb__DOT__ps2_clk_sync = 0;
    vlSelf->top__DOT__pkb__DOT____Vlvbound1 = 0;
    vlSelf->top__DOT__vram__DOT__inaddr = 0;
    vlSelf->top__DOT__vram__DOT__din = 0;
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->top__DOT__vram__DOT__ram[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->top__DOT__b2seg0__DOT__chars[__Vi0] = 0;
    }
    VL_ZERO_RESET_W(176, vlSelf->top__DOT__b2seg0__DOT____Vcellinp__i0____pinNumber4);
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__lut_out = 0;
    vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->top__DOT__b2seg1__DOT__chars[__Vi0] = 0;
    }
    VL_ZERO_RESET_W(176, vlSelf->top__DOT__b2seg1__DOT____Vcellinp__i0____pinNumber4);
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__lut_out = 0;
    vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->top__DOT__b2seg2__DOT__chars[__Vi0] = 0;
    }
    VL_ZERO_RESET_W(176, vlSelf->top__DOT__b2seg2__DOT____Vcellinp__i0____pinNumber4);
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__lut_out = 0;
    vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->top__DOT__b2seg3__DOT__chars[__Vi0] = 0;
    }
    VL_ZERO_RESET_W(176, vlSelf->top__DOT__b2seg3__DOT____Vcellinp__i0____pinNumber4);
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__lut_out = 0;
    vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->top__DOT__b2seg4__DOT__chars[__Vi0] = 0;
    }
    VL_ZERO_RESET_W(176, vlSelf->top__DOT__b2seg4__DOT____Vcellinp__i0____pinNumber4);
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__lut_out = 0;
    vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->top__DOT__b2seg5__DOT__chars[__Vi0] = 0;
    }
    VL_ZERO_RESET_W(176, vlSelf->top__DOT__b2seg5__DOT____Vcellinp__i0____pinNumber4);
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__lut_out = 0;
    vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
