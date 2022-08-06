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

void Vtop___024root___initial__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__1\n"); );
    // Variables
    VlWide<5>/*159:0*/ __Vtemp1;
    VlWide<5>/*159:0*/ __Vtemp2;
    VlWide<5>/*159:0*/ __Vtemp3;
    // Body
    vlSelf->top__DOT__asci2dot0__DOT__y_dot = 0U;
    __Vtemp1[0U] = 0x2e686578U;
    __Vtemp1[1U] = 0x666f6e74U;
    __Vtemp1[2U] = 0x7667615fU;
    __Vtemp1[3U] = 0x7564652fU;
    __Vtemp1[4U] = 0x696e636cU;
    VL_READMEM_N(true, 9, 4096, 0, VL_CVT_PACK_STR_NW(5, __Vtemp1)
                 ,  &(vlSelf->top__DOT__asci2dot0__DOT__lattice)
                 , 0, ~0ULL);
    vlSelf->top__DOT__vram__DOT__oldaddr = 0xffU;
    vlSelf->top__DOT__vram__DOT__line_cnt = 0U;
    vlSelf->top__DOT__vram__DOT__key_addr = 0U;
    __Vtemp2[0U] = 0x2e686578U;
    __Vtemp2[1U] = 0x636f6465U;
    __Vtemp2[2U] = 0x7363616eU;
    __Vtemp2[3U] = 0x7564652fU;
    __Vtemp2[4U] = 0x696e636cU;
    VL_READMEM_N(true, 8, 256, 0, VL_CVT_PACK_STR_NW(5, __Vtemp2)
                 ,  &(vlSelf->top__DOT__vram__DOT__ram)
                 , 0, ~0ULL);
    __Vtemp3[0U] = 0x2e686578U;
    __Vtemp3[1U] = 0x6579696eU;
    __Vtemp3[2U] = 0x64652f6bU;
    __Vtemp3[3U] = 0x6e636c75U;
    __Vtemp3[4U] = 0x69U;
    VL_READMEM_N(true, 8, 4096, 0, VL_CVT_PACK_STR_NW(5, __Vtemp3)
                 ,  &(vlSelf->top__DOT__vram__DOT__key_ram)
                 , 0, ~0ULL);
    vlSelf->top__DOT__count = 0U;
    vlSelf->top__DOT__sigwe = 0U;
}

void Vtop___024root___settle__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__2\n"); );
    // Variables
    VlWide<6>/*191:0*/ __Vtemp16;
    VlWide<6>/*191:0*/ __Vtemp31;
    VlWide<6>/*191:0*/ __Vtemp46;
    VlWide<6>/*191:0*/ __Vtemp61;
    VlWide<6>/*191:0*/ __Vtemp76;
    VlWide<6>/*191:0*/ __Vtemp91;
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
    vlSelf->VGA_CLK = vlSelf->clk;
    vlSelf->VGA_HSYNC = (0x60U < (IData)(vlSelf->top__DOT__vgac__DOT__x_cnt));
    vlSelf->VGA_VSYNC = (2U < (IData)(vlSelf->top__DOT__vgac__DOT__y_cnt));
    vlSelf->VGA_VALID = (((0x90U < (IData)(vlSelf->top__DOT__vgac__DOT__x_cnt)) 
                          & (0x310U >= (IData)(vlSelf->top__DOT__vgac__DOT__x_cnt))) 
                         & ((0x23U < (IData)(vlSelf->top__DOT__vgac__DOT__y_cnt)) 
                            & (0x203U >= (IData)(vlSelf->top__DOT__vgac__DOT__y_cnt))));
    vlSelf->led = ((0xfffcU & (IData)(vlSelf->led)) 
                   | (((IData)(vlSelf->ready) << 1U) 
                      | (IData)(vlSelf->overflow)));
    vlSelf->top__DOT__asci2dot0__DOT__y_dot = (0xfffU 
                                               & ((vlSelf->top__DOT__vram__DOT__key_ram
                                                   [
                                                   (((IData)(vlSelf->top__DOT__vgac__DOT__h_count_n) 
                                                     << 7U) 
                                                    | (IData)(vlSelf->top__DOT__vgac__DOT__v_count_n))] 
                                                   << 4U) 
                                                  + (IData)(vlSelf->top__DOT__vgac__DOT__y_ascii)));
    __Vtemp16[1U] = (((IData)((0x40090140000000ULL 
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
    __Vtemp16[2U] = (0x80000000U | (((IData)((0x40090140000000ULL 
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
    __Vtemp16[3U] = (1U | (((IData)(((0x40090140000000ULL 
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
        = __Vtemp16[1U];
    vlSelf->top__DOT__b2seg0__DOT____Vcellinp__i0____pinNumber4[2U] 
        = __Vtemp16[2U];
    vlSelf->top__DOT__b2seg0__DOT____Vcellinp__i0____pinNumber4[3U] 
        = __Vtemp16[3U];
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
    __Vtemp31[1U] = (((IData)((0x40090140000000ULL 
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
    __Vtemp31[2U] = (0x80000000U | (((IData)((0x40090140000000ULL 
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
    __Vtemp31[3U] = (1U | (((IData)(((0x40090140000000ULL 
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
        = __Vtemp31[1U];
    vlSelf->top__DOT__b2seg1__DOT____Vcellinp__i0____pinNumber4[2U] 
        = __Vtemp31[2U];
    vlSelf->top__DOT__b2seg1__DOT____Vcellinp__i0____pinNumber4[3U] 
        = __Vtemp31[3U];
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
    __Vtemp46[1U] = (((IData)((0x40090140000000ULL 
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
    __Vtemp46[2U] = (0x80000000U | (((IData)((0x40090140000000ULL 
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
    __Vtemp46[3U] = (1U | (((IData)(((0x40090140000000ULL 
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
        = __Vtemp46[1U];
    vlSelf->top__DOT__b2seg2__DOT____Vcellinp__i0____pinNumber4[2U] 
        = __Vtemp46[2U];
    vlSelf->top__DOT__b2seg2__DOT____Vcellinp__i0____pinNumber4[3U] 
        = __Vtemp46[3U];
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
    __Vtemp61[1U] = (((IData)((0x40090140000000ULL 
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
    __Vtemp61[2U] = (0x80000000U | (((IData)((0x40090140000000ULL 
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
    __Vtemp61[3U] = (1U | (((IData)(((0x40090140000000ULL 
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
        = __Vtemp61[1U];
    vlSelf->top__DOT__b2seg3__DOT____Vcellinp__i0____pinNumber4[2U] 
        = __Vtemp61[2U];
    vlSelf->top__DOT__b2seg3__DOT____Vcellinp__i0____pinNumber4[3U] 
        = __Vtemp61[3U];
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
    __Vtemp76[1U] = (((IData)((0x40090140000000ULL 
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
    __Vtemp76[2U] = (0x80000000U | (((IData)((0x40090140000000ULL 
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
    __Vtemp76[3U] = (1U | (((IData)(((0x40090140000000ULL 
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
        = __Vtemp76[1U];
    vlSelf->top__DOT__b2seg4__DOT____Vcellinp__i0____pinNumber4[2U] 
        = __Vtemp76[2U];
    vlSelf->top__DOT__b2seg4__DOT____Vcellinp__i0____pinNumber4[3U] 
        = __Vtemp76[3U];
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
    __Vtemp91[1U] = (((IData)((0x40090140000000ULL 
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
    __Vtemp91[2U] = (0x80000000U | (((IData)((0x40090140000000ULL 
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
    __Vtemp91[3U] = (1U | (((IData)(((0x40090140000000ULL 
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
        = __Vtemp91[1U];
    vlSelf->top__DOT__b2seg5__DOT____Vcellinp__i0____pinNumber4[2U] 
        = __Vtemp91[2U];
    vlSelf->top__DOT__b2seg5__DOT____Vcellinp__i0____pinNumber4[3U] 
        = __Vtemp91[3U];
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
    vlSelf->top__DOT__vga_data = (((8U >= (IData)(vlSelf->top__DOT__vgac__DOT__x_ascii)) 
                                   & (vlSelf->top__DOT__asci2dot0__DOT__lattice
                                      [vlSelf->top__DOT__asci2dot0__DOT__y_dot] 
                                      >> (IData)(vlSelf->top__DOT__vgac__DOT__x_ascii)))
                                   ? 0xffffffU : 0U);
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
    vlSelf->VGA_R = (0xffU & (vlSelf->top__DOT__vga_data 
                              >> 0x10U));
    vlSelf->VGA_G = (0xffU & (vlSelf->top__DOT__vga_data 
                              >> 8U));
    vlSelf->VGA_B = (0xffU & vlSelf->top__DOT__vga_data);
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
    vlSelf->HEX2 = ((1U & (IData)(vlSelf->HEX2)) | 
                    ((IData)(vlSelf->top__DOT____Vcellout__b2seg2__seg_out) 
                     << 1U));
    vlSelf->HEX3 = ((1U & (IData)(vlSelf->HEX3)) | 
                    ((IData)(vlSelf->top__DOT____Vcellout__b2seg3__seg_out) 
                     << 1U));
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
    Vtop___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__VGA_CLK = vlSelf->VGA_CLK;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
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
    vlSelf->VGA_CLK = 0;
    vlSelf->VGA_HSYNC = 0;
    vlSelf->VGA_VSYNC = 0;
    vlSelf->VGA_VALID = 0;
    vlSelf->VGA_R = 0;
    vlSelf->VGA_G = 0;
    vlSelf->VGA_B = 0;
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
    vlSelf->top__DOT__vga_data = 0;
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
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->top__DOT__vram__DOT__ram[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        vlSelf->top__DOT__vram__DOT__key_ram[__Vi0] = 0;
    }
    vlSelf->top__DOT__vram__DOT__oldaddr = 0;
    vlSelf->top__DOT__vram__DOT__line_cnt = 0;
    vlSelf->top__DOT__vram__DOT__key_addr = 0;
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
    vlSelf->top__DOT__asci2dot0__DOT__y_dot = 0;
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        vlSelf->top__DOT__asci2dot0__DOT__lattice[__Vi0] = 0;
    }
    vlSelf->top__DOT__vgac__DOT__x_cnt = 0;
    vlSelf->top__DOT__vgac__DOT__y_cnt = 0;
    vlSelf->top__DOT__vgac__DOT__x_ascii = 0;
    vlSelf->top__DOT__vgac__DOT__y_ascii = 0;
    vlSelf->top__DOT__vgac__DOT__h_count_n = 0;
    vlSelf->top__DOT__vgac__DOT__v_count_n = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
