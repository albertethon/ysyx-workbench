// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceInitTop(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+33,"clk", false,-1);
        tracep->declBit(c+34,"rst", false,-1);
        tracep->declBit(c+35,"en", false,-1);
        tracep->declBus(c+36,"sw", false,-1, 9,0);
        tracep->declBus(c+37,"in_a", false,-1, 3,0);
        tracep->declBus(c+38,"in_b", false,-1, 3,0);
        tracep->declBus(c+39,"btn", false,-1, 2,0);
        tracep->declBus(c+40,"out", false,-1, 3,0);
        tracep->declBus(c+41,"led", false,-1, 15,0);
        tracep->declBus(c+42,"HEX0", false,-1, 7,0);
        tracep->declBit(c+33,"top clk", false,-1);
        tracep->declBit(c+34,"top rst", false,-1);
        tracep->declBit(c+35,"top en", false,-1);
        tracep->declBus(c+36,"top sw", false,-1, 9,0);
        tracep->declBus(c+37,"top in_a", false,-1, 3,0);
        tracep->declBus(c+38,"top in_b", false,-1, 3,0);
        tracep->declBus(c+39,"top btn", false,-1, 2,0);
        tracep->declBus(c+40,"top out", false,-1, 3,0);
        tracep->declBus(c+41,"top led", false,-1, 15,0);
        tracep->declBus(c+42,"top HEX0", false,-1, 7,0);
        tracep->declBus(c+37,"top alu1 A", false,-1, 3,0);
        tracep->declBus(c+38,"top alu1 B", false,-1, 3,0);
        tracep->declBus(c+39,"top alu1 btn", false,-1, 2,0);
        tracep->declBit(c+43,"top alu1 Carry", false,-1);
        tracep->declBit(c+1,"top alu1 Zero", false,-1);
        tracep->declBit(c+44,"top alu1 Overflow", false,-1);
        tracep->declBus(c+2,"top alu1 Result", false,-1, 3,0);
        tracep->declBus(c+40,"top alu1 out", false,-1, 3,0);
        tracep->declBit(c+3,"top alu1 Cin", false,-1);
        tracep->declBus(c+4,"top alu1 t_no_Cin", false,-1, 3,0);
        tracep->declBus(c+45,"top alu1 notA", false,-1, 3,0);
        tracep->declBus(c+46,"top alu1 AandB", false,-1, 3,0);
        tracep->declBus(c+47,"top alu1 AorB", false,-1, 3,0);
        tracep->declBus(c+48,"top alu1 AxorB", false,-1, 3,0);
        tracep->declBus(c+49,"top alu1 less", false,-1, 3,0);
        tracep->declBus(c+50,"top alu1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+51,"top alu1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+52,"top alu1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+40,"top alu1 i0 out", false,-1, 3,0);
        tracep->declBus(c+39,"top alu1 i0 key", false,-1, 2,0);
        tracep->declQuad(c+5,"top alu1 i0 lut", false,-1, 55,0);
        tracep->declBus(c+50,"top alu1 i0 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+51,"top alu1 i0 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+52,"top alu1 i0 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+53,"top alu1 i0 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+40,"top alu1 i0 i0 out", false,-1, 3,0);
        tracep->declBus(c+39,"top alu1 i0 i0 key", false,-1, 2,0);
        tracep->declBus(c+54,"top alu1 i0 i0 default_out", false,-1, 3,0);
        tracep->declQuad(c+5,"top alu1 i0 i0 lut", false,-1, 55,0);
        tracep->declBus(c+55,"top alu1 i0 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+7+i*1,"top alu1 i0 i0 pair_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+15+i*1,"top alu1 i0 i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+23+i*1,"top alu1 i0 i0 data_list", true,(i+0), 3,0);}}
        tracep->declBus(c+31,"top alu1 i0 i0 lut_out", false,-1, 3,0);
        tracep->declBit(c+32,"top alu1 i0 i0 hit", false,-1);
        tracep->declBus(c+56,"top alu1 i0 i0 i", false,-1, 31,0);
    }
}

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vtop___024root__traceRegister(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vtop___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vtop___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vtop___024root__traceCleanup, vlSelf);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,((1U & (~ (IData)((0U 
                                                  != (IData)(vlSelf->top__DOT__alu1__DOT__Result)))))));
        tracep->fullCData(oldp+2,(vlSelf->top__DOT__alu1__DOT__Result),4);
        tracep->fullBit(oldp+3,(vlSelf->top__DOT__alu1__DOT__Cin));
        tracep->fullCData(oldp+4,(vlSelf->top__DOT__alu1__DOT__t_no_Cin),4);
        tracep->fullQData(oldp+5,(vlSelf->top__DOT__alu1__DOT____Vcellinp__i0____pinNumber3),56);
        tracep->fullCData(oldp+7,(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__pair_list[0]),7);
        tracep->fullCData(oldp+8,(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__pair_list[1]),7);
        tracep->fullCData(oldp+9,(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__pair_list[2]),7);
        tracep->fullCData(oldp+10,(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__pair_list[3]),7);
        tracep->fullCData(oldp+11,(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__pair_list[4]),7);
        tracep->fullCData(oldp+12,(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__pair_list[5]),7);
        tracep->fullCData(oldp+13,(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__pair_list[6]),7);
        tracep->fullCData(oldp+14,(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__pair_list[7]),7);
        tracep->fullCData(oldp+15,(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+16,(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+17,(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__key_list[2]),3);
        tracep->fullCData(oldp+18,(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__key_list[3]),3);
        tracep->fullCData(oldp+19,(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__key_list[4]),3);
        tracep->fullCData(oldp+20,(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__key_list[5]),3);
        tracep->fullCData(oldp+21,(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__key_list[6]),3);
        tracep->fullCData(oldp+22,(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__key_list[7]),3);
        tracep->fullCData(oldp+23,(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__data_list[0]),4);
        tracep->fullCData(oldp+24,(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__data_list[1]),4);
        tracep->fullCData(oldp+25,(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__data_list[2]),4);
        tracep->fullCData(oldp+26,(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__data_list[3]),4);
        tracep->fullCData(oldp+27,(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__data_list[4]),4);
        tracep->fullCData(oldp+28,(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__data_list[5]),4);
        tracep->fullCData(oldp+29,(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__data_list[6]),4);
        tracep->fullCData(oldp+30,(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__data_list[7]),4);
        tracep->fullCData(oldp+31,(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__lut_out),4);
        tracep->fullBit(oldp+32,(vlSelf->top__DOT__alu1__DOT__i0__DOT__i0__DOT__hit));
        tracep->fullBit(oldp+33,(vlSelf->clk));
        tracep->fullBit(oldp+34,(vlSelf->rst));
        tracep->fullBit(oldp+35,(vlSelf->en));
        tracep->fullSData(oldp+36,(vlSelf->sw),10);
        tracep->fullCData(oldp+37,(vlSelf->in_a),4);
        tracep->fullCData(oldp+38,(vlSelf->in_b),4);
        tracep->fullCData(oldp+39,(vlSelf->btn),3);
        tracep->fullCData(oldp+40,(vlSelf->out),4);
        tracep->fullSData(oldp+41,(vlSelf->led),16);
        tracep->fullCData(oldp+42,(vlSelf->HEX0),8);
        tracep->fullBit(oldp+43,((1U & ((((IData)(vlSelf->in_a) 
                                          + (IData)(vlSelf->top__DOT__alu1__DOT__t_no_Cin)) 
                                         + (IData)(vlSelf->top__DOT__alu1__DOT__Cin)) 
                                        >> 4U))));
        tracep->fullBit(oldp+44,((((1U & ((IData)(vlSelf->in_a) 
                                          >> 3U)) == 
                                   (1U & ((IData)(vlSelf->top__DOT__alu1__DOT__t_no_Cin) 
                                          >> 3U))) 
                                  & ((1U & ((IData)(vlSelf->top__DOT__alu1__DOT__Result) 
                                            >> 3U)) 
                                     != (1U & ((IData)(vlSelf->in_a) 
                                               >> 3U))))));
        tracep->fullCData(oldp+45,((0xfU & (~ (IData)(vlSelf->in_a)))),4);
        tracep->fullCData(oldp+46,(((IData)(vlSelf->in_a) 
                                    & (IData)(vlSelf->in_b))),4);
        tracep->fullCData(oldp+47,(((IData)(vlSelf->in_a) 
                                    | (IData)(vlSelf->in_b))),4);
        tracep->fullCData(oldp+48,(((IData)(vlSelf->in_a) 
                                    ^ (IData)(vlSelf->in_b))),4);
        tracep->fullCData(oldp+49,((1U & ((((1U & ((IData)(vlSelf->in_a) 
                                                   >> 3U)) 
                                            == (1U 
                                                & ((IData)(vlSelf->top__DOT__alu1__DOT__t_no_Cin) 
                                                   >> 3U))) 
                                           & ((1U & 
                                               ((IData)(vlSelf->top__DOT__alu1__DOT__Result) 
                                                >> 3U)) 
                                              != (1U 
                                                  & ((IData)(vlSelf->in_a) 
                                                     >> 3U)))) 
                                          ^ ((IData)(vlSelf->top__DOT__alu1__DOT__Result) 
                                             >> 3U)))),4);
        tracep->fullIData(oldp+50,(8U),32);
        tracep->fullIData(oldp+51,(3U),32);
        tracep->fullIData(oldp+52,(4U),32);
        tracep->fullIData(oldp+53,(0U),32);
        tracep->fullCData(oldp+54,(0U),4);
        tracep->fullIData(oldp+55,(7U),32);
        tracep->fullIData(oldp+56,(8U),32);
    }
}
