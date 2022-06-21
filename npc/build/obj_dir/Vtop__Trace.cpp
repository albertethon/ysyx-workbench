// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vtop___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,((1U & (~ (IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->top__DOT__alu1__DOT__Result)))))));
            tracep->chgCData(oldp+1,(vlSelf->top__DOT__alu1__DOT__Result),4);
            tracep->chgBit(oldp+2,(vlSelf->top__DOT__alu1__DOT__Cin));
            tracep->chgCData(oldp+3,(vlSelf->top__DOT__alu1__DOT__t_no_Cin),4);
            tracep->chgQData(oldp+4,(vlSelf->top__DOT__alu1__DOT____Vcellinp__i0____pinNumber3),56);
            tracep->chgCData(oldp+6,(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__pair_list[0]),7);
            tracep->chgCData(oldp+7,(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__pair_list[1]),7);
            tracep->chgCData(oldp+8,(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__pair_list[2]),7);
            tracep->chgCData(oldp+9,(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__pair_list[3]),7);
            tracep->chgCData(oldp+10,(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__pair_list[4]),7);
            tracep->chgCData(oldp+11,(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__pair_list[5]),7);
            tracep->chgCData(oldp+12,(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__pair_list[6]),7);
            tracep->chgCData(oldp+13,(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__pair_list[7]),7);
            tracep->chgCData(oldp+14,(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__key_list[0]),3);
            tracep->chgCData(oldp+15,(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__key_list[1]),3);
            tracep->chgCData(oldp+16,(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__key_list[2]),3);
            tracep->chgCData(oldp+17,(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__key_list[3]),3);
            tracep->chgCData(oldp+18,(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__key_list[4]),3);
            tracep->chgCData(oldp+19,(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__key_list[5]),3);
            tracep->chgCData(oldp+20,(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__key_list[6]),3);
            tracep->chgCData(oldp+21,(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__key_list[7]),3);
            tracep->chgCData(oldp+22,(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__data_list[0]),4);
            tracep->chgCData(oldp+23,(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__data_list[1]),4);
            tracep->chgCData(oldp+24,(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__data_list[2]),4);
            tracep->chgCData(oldp+25,(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__data_list[3]),4);
            tracep->chgCData(oldp+26,(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__data_list[4]),4);
            tracep->chgCData(oldp+27,(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__data_list[5]),4);
            tracep->chgCData(oldp+28,(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__data_list[6]),4);
            tracep->chgCData(oldp+29,(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__data_list[7]),4);
            tracep->chgCData(oldp+30,(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__lut_out),4);
            tracep->chgBit(oldp+31,(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__hit));
        }
        tracep->chgBit(oldp+32,(vlSelf->clk));
        tracep->chgBit(oldp+33,(vlSelf->rst));
        tracep->chgBit(oldp+34,(vlSelf->en));
        tracep->chgSData(oldp+35,(vlSelf->sw),10);
        tracep->chgCData(oldp+36,(vlSelf->in_a),4);
        tracep->chgCData(oldp+37,(vlSelf->in_b),4);
        tracep->chgCData(oldp+38,(vlSelf->btn),3);
        tracep->chgCData(oldp+39,(vlSelf->out),4);
        tracep->chgSData(oldp+40,(vlSelf->led),16);
        tracep->chgCData(oldp+41,(vlSelf->HEX0),8);
        tracep->chgBit(oldp+42,((1U & ((((IData)(vlSelf->in_a) 
                                         + (IData)(vlSelf->top__DOT__alu1__DOT__t_no_Cin)) 
                                        + (IData)(vlSelf->top__DOT__alu1__DOT__Cin)) 
                                       >> 4U))));
        tracep->chgBit(oldp+43,((((1U & ((IData)(vlSelf->in_a) 
                                         >> 3U)) == 
                                  (1U & ((IData)(vlSelf->top__DOT__alu1__DOT__t_no_Cin) 
                                         >> 3U))) & 
                                 ((1U & ((IData)(vlSelf->top__DOT__alu1__DOT__Result) 
                                         >> 3U)) != 
                                  (1U & ((IData)(vlSelf->in_a) 
                                         >> 3U))))));
        tracep->chgCData(oldp+44,((0xfU & (~ (IData)(vlSelf->in_a)))),4);
        tracep->chgCData(oldp+45,(((IData)(vlSelf->in_a) 
                                   & (IData)(vlSelf->in_b))),4);
        tracep->chgCData(oldp+46,(((IData)(vlSelf->in_a) 
                                   | (IData)(vlSelf->in_b))),4);
        tracep->chgCData(oldp+47,(((IData)(vlSelf->in_a) 
                                   ^ (IData)(vlSelf->in_b))),4);
        tracep->chgCData(oldp+48,((1U & ((((1U & ((IData)(vlSelf->in_a) 
                                                  >> 3U)) 
                                           == (1U & 
                                               ((IData)(vlSelf->top__DOT__alu1__DOT__t_no_Cin) 
                                                >> 3U))) 
                                          & ((1U & 
                                              ((IData)(vlSelf->top__DOT__alu1__DOT__Result) 
                                               >> 3U)) 
                                             != (1U 
                                                 & ((IData)(vlSelf->in_a) 
                                                    >> 3U)))) 
                                         ^ ((IData)(vlSelf->top__DOT__alu1__DOT__Result) 
                                            >> 3U)))),4);
    }
}

void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
