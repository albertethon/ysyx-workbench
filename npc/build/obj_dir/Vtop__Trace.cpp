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
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
            tracep->chgBit(oldp+0,(vlSelf->top__DOT__sigwe));
            tracep->chgCData(oldp+1,(vlSelf->top__DOT__b2seg0__DOT__chars[0]),7);
            tracep->chgCData(oldp+2,(vlSelf->top__DOT__b2seg0__DOT__chars[1]),7);
            tracep->chgCData(oldp+3,(vlSelf->top__DOT__b2seg0__DOT__chars[2]),7);
            tracep->chgCData(oldp+4,(vlSelf->top__DOT__b2seg0__DOT__chars[3]),7);
            tracep->chgCData(oldp+5,(vlSelf->top__DOT__b2seg0__DOT__chars[4]),7);
            tracep->chgCData(oldp+6,(vlSelf->top__DOT__b2seg0__DOT__chars[5]),7);
            tracep->chgCData(oldp+7,(vlSelf->top__DOT__b2seg0__DOT__chars[6]),7);
            tracep->chgCData(oldp+8,(vlSelf->top__DOT__b2seg0__DOT__chars[7]),7);
            tracep->chgCData(oldp+9,(vlSelf->top__DOT__b2seg0__DOT__chars[8]),7);
            tracep->chgCData(oldp+10,(vlSelf->top__DOT__b2seg0__DOT__chars[9]),7);
            tracep->chgCData(oldp+11,(vlSelf->top__DOT__b2seg0__DOT__chars[10]),7);
            tracep->chgCData(oldp+12,(vlSelf->top__DOT__b2seg0__DOT__chars[11]),7);
            tracep->chgCData(oldp+13,(vlSelf->top__DOT__b2seg0__DOT__chars[12]),7);
            tracep->chgCData(oldp+14,(vlSelf->top__DOT__b2seg0__DOT__chars[13]),7);
            tracep->chgCData(oldp+15,(vlSelf->top__DOT__b2seg0__DOT__chars[14]),7);
            tracep->chgCData(oldp+16,(vlSelf->top__DOT__b2seg0__DOT__chars[15]),7);
            tracep->chgCData(oldp+17,(vlSelf->top__DOT__b2seg0__DOT__chars
                                      [0U]),7);
            tracep->chgWData(oldp+18,(vlSelf->top__DOT__b2seg0__DOT____Vcellinp__i0____pinNumber4),176);
            tracep->chgSData(oldp+24,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[0]),11);
            tracep->chgSData(oldp+25,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[1]),11);
            tracep->chgSData(oldp+26,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[2]),11);
            tracep->chgSData(oldp+27,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[3]),11);
            tracep->chgSData(oldp+28,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[4]),11);
            tracep->chgSData(oldp+29,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[5]),11);
            tracep->chgSData(oldp+30,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[6]),11);
            tracep->chgSData(oldp+31,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[7]),11);
            tracep->chgSData(oldp+32,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[8]),11);
            tracep->chgSData(oldp+33,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[9]),11);
            tracep->chgSData(oldp+34,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[10]),11);
            tracep->chgSData(oldp+35,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[11]),11);
            tracep->chgSData(oldp+36,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[12]),11);
            tracep->chgSData(oldp+37,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[13]),11);
            tracep->chgSData(oldp+38,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[14]),11);
            tracep->chgSData(oldp+39,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[15]),11);
            tracep->chgCData(oldp+40,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+41,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+42,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[2]),4);
            tracep->chgCData(oldp+43,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[3]),4);
            tracep->chgCData(oldp+44,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[4]),4);
            tracep->chgCData(oldp+45,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[5]),4);
            tracep->chgCData(oldp+46,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[6]),4);
            tracep->chgCData(oldp+47,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[7]),4);
            tracep->chgCData(oldp+48,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[8]),4);
            tracep->chgCData(oldp+49,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[9]),4);
            tracep->chgCData(oldp+50,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[10]),4);
            tracep->chgCData(oldp+51,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[11]),4);
            tracep->chgCData(oldp+52,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[12]),4);
            tracep->chgCData(oldp+53,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[13]),4);
            tracep->chgCData(oldp+54,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[14]),4);
            tracep->chgCData(oldp+55,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[15]),4);
            tracep->chgCData(oldp+56,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[0]),7);
            tracep->chgCData(oldp+57,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[1]),7);
            tracep->chgCData(oldp+58,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[2]),7);
            tracep->chgCData(oldp+59,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[3]),7);
            tracep->chgCData(oldp+60,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[4]),7);
            tracep->chgCData(oldp+61,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[5]),7);
            tracep->chgCData(oldp+62,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[6]),7);
            tracep->chgCData(oldp+63,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[7]),7);
            tracep->chgCData(oldp+64,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[8]),7);
            tracep->chgCData(oldp+65,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[9]),7);
            tracep->chgCData(oldp+66,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[10]),7);
            tracep->chgCData(oldp+67,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[11]),7);
            tracep->chgCData(oldp+68,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[12]),7);
            tracep->chgCData(oldp+69,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[13]),7);
            tracep->chgCData(oldp+70,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[14]),7);
            tracep->chgCData(oldp+71,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[15]),7);
            tracep->chgCData(oldp+72,(vlSelf->top__DOT__b2seg1__DOT__chars[0]),7);
            tracep->chgCData(oldp+73,(vlSelf->top__DOT__b2seg1__DOT__chars[1]),7);
            tracep->chgCData(oldp+74,(vlSelf->top__DOT__b2seg1__DOT__chars[2]),7);
            tracep->chgCData(oldp+75,(vlSelf->top__DOT__b2seg1__DOT__chars[3]),7);
            tracep->chgCData(oldp+76,(vlSelf->top__DOT__b2seg1__DOT__chars[4]),7);
            tracep->chgCData(oldp+77,(vlSelf->top__DOT__b2seg1__DOT__chars[5]),7);
            tracep->chgCData(oldp+78,(vlSelf->top__DOT__b2seg1__DOT__chars[6]),7);
            tracep->chgCData(oldp+79,(vlSelf->top__DOT__b2seg1__DOT__chars[7]),7);
            tracep->chgCData(oldp+80,(vlSelf->top__DOT__b2seg1__DOT__chars[8]),7);
            tracep->chgCData(oldp+81,(vlSelf->top__DOT__b2seg1__DOT__chars[9]),7);
            tracep->chgCData(oldp+82,(vlSelf->top__DOT__b2seg1__DOT__chars[10]),7);
            tracep->chgCData(oldp+83,(vlSelf->top__DOT__b2seg1__DOT__chars[11]),7);
            tracep->chgCData(oldp+84,(vlSelf->top__DOT__b2seg1__DOT__chars[12]),7);
            tracep->chgCData(oldp+85,(vlSelf->top__DOT__b2seg1__DOT__chars[13]),7);
            tracep->chgCData(oldp+86,(vlSelf->top__DOT__b2seg1__DOT__chars[14]),7);
            tracep->chgCData(oldp+87,(vlSelf->top__DOT__b2seg1__DOT__chars[15]),7);
            tracep->chgCData(oldp+88,(vlSelf->top__DOT__b2seg1__DOT__chars
                                      [0U]),7);
            tracep->chgWData(oldp+89,(vlSelf->top__DOT__b2seg1__DOT____Vcellinp__i0____pinNumber4),176);
            tracep->chgSData(oldp+95,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[0]),11);
            tracep->chgSData(oldp+96,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[1]),11);
            tracep->chgSData(oldp+97,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[2]),11);
            tracep->chgSData(oldp+98,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[3]),11);
            tracep->chgSData(oldp+99,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[4]),11);
            tracep->chgSData(oldp+100,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[5]),11);
            tracep->chgSData(oldp+101,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[6]),11);
            tracep->chgSData(oldp+102,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[7]),11);
            tracep->chgSData(oldp+103,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[8]),11);
            tracep->chgSData(oldp+104,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[9]),11);
            tracep->chgSData(oldp+105,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[10]),11);
            tracep->chgSData(oldp+106,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[11]),11);
            tracep->chgSData(oldp+107,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[12]),11);
            tracep->chgSData(oldp+108,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[13]),11);
            tracep->chgSData(oldp+109,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[14]),11);
            tracep->chgSData(oldp+110,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[15]),11);
            tracep->chgCData(oldp+111,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+112,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+113,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[2]),4);
            tracep->chgCData(oldp+114,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[3]),4);
            tracep->chgCData(oldp+115,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[4]),4);
            tracep->chgCData(oldp+116,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[5]),4);
            tracep->chgCData(oldp+117,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[6]),4);
            tracep->chgCData(oldp+118,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[7]),4);
            tracep->chgCData(oldp+119,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[8]),4);
            tracep->chgCData(oldp+120,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[9]),4);
            tracep->chgCData(oldp+121,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[10]),4);
            tracep->chgCData(oldp+122,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[11]),4);
            tracep->chgCData(oldp+123,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[12]),4);
            tracep->chgCData(oldp+124,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[13]),4);
            tracep->chgCData(oldp+125,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[14]),4);
            tracep->chgCData(oldp+126,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[15]),4);
            tracep->chgCData(oldp+127,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[0]),7);
            tracep->chgCData(oldp+128,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[1]),7);
            tracep->chgCData(oldp+129,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[2]),7);
            tracep->chgCData(oldp+130,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[3]),7);
            tracep->chgCData(oldp+131,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[4]),7);
            tracep->chgCData(oldp+132,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[5]),7);
            tracep->chgCData(oldp+133,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[6]),7);
            tracep->chgCData(oldp+134,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[7]),7);
            tracep->chgCData(oldp+135,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[8]),7);
            tracep->chgCData(oldp+136,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[9]),7);
            tracep->chgCData(oldp+137,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[10]),7);
            tracep->chgCData(oldp+138,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[11]),7);
            tracep->chgCData(oldp+139,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[12]),7);
            tracep->chgCData(oldp+140,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[13]),7);
            tracep->chgCData(oldp+141,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[14]),7);
            tracep->chgCData(oldp+142,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[15]),7);
            tracep->chgCData(oldp+143,(vlSelf->top__DOT__b2seg2__DOT__chars[0]),7);
            tracep->chgCData(oldp+144,(vlSelf->top__DOT__b2seg2__DOT__chars[1]),7);
            tracep->chgCData(oldp+145,(vlSelf->top__DOT__b2seg2__DOT__chars[2]),7);
            tracep->chgCData(oldp+146,(vlSelf->top__DOT__b2seg2__DOT__chars[3]),7);
            tracep->chgCData(oldp+147,(vlSelf->top__DOT__b2seg2__DOT__chars[4]),7);
            tracep->chgCData(oldp+148,(vlSelf->top__DOT__b2seg2__DOT__chars[5]),7);
            tracep->chgCData(oldp+149,(vlSelf->top__DOT__b2seg2__DOT__chars[6]),7);
            tracep->chgCData(oldp+150,(vlSelf->top__DOT__b2seg2__DOT__chars[7]),7);
            tracep->chgCData(oldp+151,(vlSelf->top__DOT__b2seg2__DOT__chars[8]),7);
            tracep->chgCData(oldp+152,(vlSelf->top__DOT__b2seg2__DOT__chars[9]),7);
            tracep->chgCData(oldp+153,(vlSelf->top__DOT__b2seg2__DOT__chars[10]),7);
            tracep->chgCData(oldp+154,(vlSelf->top__DOT__b2seg2__DOT__chars[11]),7);
            tracep->chgCData(oldp+155,(vlSelf->top__DOT__b2seg2__DOT__chars[12]),7);
            tracep->chgCData(oldp+156,(vlSelf->top__DOT__b2seg2__DOT__chars[13]),7);
            tracep->chgCData(oldp+157,(vlSelf->top__DOT__b2seg2__DOT__chars[14]),7);
            tracep->chgCData(oldp+158,(vlSelf->top__DOT__b2seg2__DOT__chars[15]),7);
            tracep->chgCData(oldp+159,(vlSelf->top__DOT__b2seg2__DOT__chars
                                       [0U]),7);
            tracep->chgWData(oldp+160,(vlSelf->top__DOT__b2seg2__DOT____Vcellinp__i0____pinNumber4),176);
            tracep->chgSData(oldp+166,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[0]),11);
            tracep->chgSData(oldp+167,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[1]),11);
            tracep->chgSData(oldp+168,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[2]),11);
            tracep->chgSData(oldp+169,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[3]),11);
            tracep->chgSData(oldp+170,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[4]),11);
            tracep->chgSData(oldp+171,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[5]),11);
            tracep->chgSData(oldp+172,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[6]),11);
            tracep->chgSData(oldp+173,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[7]),11);
            tracep->chgSData(oldp+174,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[8]),11);
            tracep->chgSData(oldp+175,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[9]),11);
            tracep->chgSData(oldp+176,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[10]),11);
            tracep->chgSData(oldp+177,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[11]),11);
            tracep->chgSData(oldp+178,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[12]),11);
            tracep->chgSData(oldp+179,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[13]),11);
            tracep->chgSData(oldp+180,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[14]),11);
            tracep->chgSData(oldp+181,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[15]),11);
            tracep->chgCData(oldp+182,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+183,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+184,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[2]),4);
            tracep->chgCData(oldp+185,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[3]),4);
            tracep->chgCData(oldp+186,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[4]),4);
            tracep->chgCData(oldp+187,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[5]),4);
            tracep->chgCData(oldp+188,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[6]),4);
            tracep->chgCData(oldp+189,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[7]),4);
            tracep->chgCData(oldp+190,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[8]),4);
            tracep->chgCData(oldp+191,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[9]),4);
            tracep->chgCData(oldp+192,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[10]),4);
            tracep->chgCData(oldp+193,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[11]),4);
            tracep->chgCData(oldp+194,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[12]),4);
            tracep->chgCData(oldp+195,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[13]),4);
            tracep->chgCData(oldp+196,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[14]),4);
            tracep->chgCData(oldp+197,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[15]),4);
            tracep->chgCData(oldp+198,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[0]),7);
            tracep->chgCData(oldp+199,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[1]),7);
            tracep->chgCData(oldp+200,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[2]),7);
            tracep->chgCData(oldp+201,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[3]),7);
            tracep->chgCData(oldp+202,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[4]),7);
            tracep->chgCData(oldp+203,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[5]),7);
            tracep->chgCData(oldp+204,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[6]),7);
            tracep->chgCData(oldp+205,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[7]),7);
            tracep->chgCData(oldp+206,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[8]),7);
            tracep->chgCData(oldp+207,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[9]),7);
            tracep->chgCData(oldp+208,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[10]),7);
            tracep->chgCData(oldp+209,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[11]),7);
            tracep->chgCData(oldp+210,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[12]),7);
            tracep->chgCData(oldp+211,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[13]),7);
            tracep->chgCData(oldp+212,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[14]),7);
            tracep->chgCData(oldp+213,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[15]),7);
            tracep->chgCData(oldp+214,(vlSelf->top__DOT__b2seg3__DOT__chars[0]),7);
            tracep->chgCData(oldp+215,(vlSelf->top__DOT__b2seg3__DOT__chars[1]),7);
            tracep->chgCData(oldp+216,(vlSelf->top__DOT__b2seg3__DOT__chars[2]),7);
            tracep->chgCData(oldp+217,(vlSelf->top__DOT__b2seg3__DOT__chars[3]),7);
            tracep->chgCData(oldp+218,(vlSelf->top__DOT__b2seg3__DOT__chars[4]),7);
            tracep->chgCData(oldp+219,(vlSelf->top__DOT__b2seg3__DOT__chars[5]),7);
            tracep->chgCData(oldp+220,(vlSelf->top__DOT__b2seg3__DOT__chars[6]),7);
            tracep->chgCData(oldp+221,(vlSelf->top__DOT__b2seg3__DOT__chars[7]),7);
            tracep->chgCData(oldp+222,(vlSelf->top__DOT__b2seg3__DOT__chars[8]),7);
            tracep->chgCData(oldp+223,(vlSelf->top__DOT__b2seg3__DOT__chars[9]),7);
            tracep->chgCData(oldp+224,(vlSelf->top__DOT__b2seg3__DOT__chars[10]),7);
            tracep->chgCData(oldp+225,(vlSelf->top__DOT__b2seg3__DOT__chars[11]),7);
            tracep->chgCData(oldp+226,(vlSelf->top__DOT__b2seg3__DOT__chars[12]),7);
            tracep->chgCData(oldp+227,(vlSelf->top__DOT__b2seg3__DOT__chars[13]),7);
            tracep->chgCData(oldp+228,(vlSelf->top__DOT__b2seg3__DOT__chars[14]),7);
            tracep->chgCData(oldp+229,(vlSelf->top__DOT__b2seg3__DOT__chars[15]),7);
            tracep->chgCData(oldp+230,(vlSelf->top__DOT__b2seg3__DOT__chars
                                       [0U]),7);
            tracep->chgWData(oldp+231,(vlSelf->top__DOT__b2seg3__DOT____Vcellinp__i0____pinNumber4),176);
            tracep->chgSData(oldp+237,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[0]),11);
            tracep->chgSData(oldp+238,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[1]),11);
            tracep->chgSData(oldp+239,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[2]),11);
            tracep->chgSData(oldp+240,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[3]),11);
            tracep->chgSData(oldp+241,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[4]),11);
            tracep->chgSData(oldp+242,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[5]),11);
            tracep->chgSData(oldp+243,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[6]),11);
            tracep->chgSData(oldp+244,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[7]),11);
            tracep->chgSData(oldp+245,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[8]),11);
            tracep->chgSData(oldp+246,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[9]),11);
            tracep->chgSData(oldp+247,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[10]),11);
            tracep->chgSData(oldp+248,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[11]),11);
            tracep->chgSData(oldp+249,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[12]),11);
            tracep->chgSData(oldp+250,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[13]),11);
            tracep->chgSData(oldp+251,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[14]),11);
            tracep->chgSData(oldp+252,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[15]),11);
            tracep->chgCData(oldp+253,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+254,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+255,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[2]),4);
            tracep->chgCData(oldp+256,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[3]),4);
            tracep->chgCData(oldp+257,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[4]),4);
            tracep->chgCData(oldp+258,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[5]),4);
            tracep->chgCData(oldp+259,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[6]),4);
            tracep->chgCData(oldp+260,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[7]),4);
            tracep->chgCData(oldp+261,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[8]),4);
            tracep->chgCData(oldp+262,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[9]),4);
            tracep->chgCData(oldp+263,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[10]),4);
            tracep->chgCData(oldp+264,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[11]),4);
            tracep->chgCData(oldp+265,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[12]),4);
            tracep->chgCData(oldp+266,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[13]),4);
            tracep->chgCData(oldp+267,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[14]),4);
            tracep->chgCData(oldp+268,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[15]),4);
            tracep->chgCData(oldp+269,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[0]),7);
            tracep->chgCData(oldp+270,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[1]),7);
            tracep->chgCData(oldp+271,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[2]),7);
            tracep->chgCData(oldp+272,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[3]),7);
            tracep->chgCData(oldp+273,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[4]),7);
            tracep->chgCData(oldp+274,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[5]),7);
            tracep->chgCData(oldp+275,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[6]),7);
            tracep->chgCData(oldp+276,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[7]),7);
            tracep->chgCData(oldp+277,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[8]),7);
            tracep->chgCData(oldp+278,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[9]),7);
            tracep->chgCData(oldp+279,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[10]),7);
            tracep->chgCData(oldp+280,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[11]),7);
            tracep->chgCData(oldp+281,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[12]),7);
            tracep->chgCData(oldp+282,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[13]),7);
            tracep->chgCData(oldp+283,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[14]),7);
            tracep->chgCData(oldp+284,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[15]),7);
            tracep->chgCData(oldp+285,(vlSelf->top__DOT__b2seg4__DOT__chars[0]),7);
            tracep->chgCData(oldp+286,(vlSelf->top__DOT__b2seg4__DOT__chars[1]),7);
            tracep->chgCData(oldp+287,(vlSelf->top__DOT__b2seg4__DOT__chars[2]),7);
            tracep->chgCData(oldp+288,(vlSelf->top__DOT__b2seg4__DOT__chars[3]),7);
            tracep->chgCData(oldp+289,(vlSelf->top__DOT__b2seg4__DOT__chars[4]),7);
            tracep->chgCData(oldp+290,(vlSelf->top__DOT__b2seg4__DOT__chars[5]),7);
            tracep->chgCData(oldp+291,(vlSelf->top__DOT__b2seg4__DOT__chars[6]),7);
            tracep->chgCData(oldp+292,(vlSelf->top__DOT__b2seg4__DOT__chars[7]),7);
            tracep->chgCData(oldp+293,(vlSelf->top__DOT__b2seg4__DOT__chars[8]),7);
            tracep->chgCData(oldp+294,(vlSelf->top__DOT__b2seg4__DOT__chars[9]),7);
            tracep->chgCData(oldp+295,(vlSelf->top__DOT__b2seg4__DOT__chars[10]),7);
            tracep->chgCData(oldp+296,(vlSelf->top__DOT__b2seg4__DOT__chars[11]),7);
            tracep->chgCData(oldp+297,(vlSelf->top__DOT__b2seg4__DOT__chars[12]),7);
            tracep->chgCData(oldp+298,(vlSelf->top__DOT__b2seg4__DOT__chars[13]),7);
            tracep->chgCData(oldp+299,(vlSelf->top__DOT__b2seg4__DOT__chars[14]),7);
            tracep->chgCData(oldp+300,(vlSelf->top__DOT__b2seg4__DOT__chars[15]),7);
            tracep->chgCData(oldp+301,(vlSelf->top__DOT__b2seg4__DOT__chars
                                       [0U]),7);
            tracep->chgWData(oldp+302,(vlSelf->top__DOT__b2seg4__DOT____Vcellinp__i0____pinNumber4),176);
            tracep->chgSData(oldp+308,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[0]),11);
            tracep->chgSData(oldp+309,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[1]),11);
            tracep->chgSData(oldp+310,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[2]),11);
            tracep->chgSData(oldp+311,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[3]),11);
            tracep->chgSData(oldp+312,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[4]),11);
            tracep->chgSData(oldp+313,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[5]),11);
            tracep->chgSData(oldp+314,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[6]),11);
            tracep->chgSData(oldp+315,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[7]),11);
            tracep->chgSData(oldp+316,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[8]),11);
            tracep->chgSData(oldp+317,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[9]),11);
            tracep->chgSData(oldp+318,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[10]),11);
            tracep->chgSData(oldp+319,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[11]),11);
            tracep->chgSData(oldp+320,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[12]),11);
            tracep->chgSData(oldp+321,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[13]),11);
            tracep->chgSData(oldp+322,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[14]),11);
            tracep->chgSData(oldp+323,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[15]),11);
            tracep->chgCData(oldp+324,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+325,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+326,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[2]),4);
            tracep->chgCData(oldp+327,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[3]),4);
            tracep->chgCData(oldp+328,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[4]),4);
            tracep->chgCData(oldp+329,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[5]),4);
            tracep->chgCData(oldp+330,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[6]),4);
            tracep->chgCData(oldp+331,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[7]),4);
            tracep->chgCData(oldp+332,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[8]),4);
            tracep->chgCData(oldp+333,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[9]),4);
            tracep->chgCData(oldp+334,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[10]),4);
            tracep->chgCData(oldp+335,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[11]),4);
            tracep->chgCData(oldp+336,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[12]),4);
            tracep->chgCData(oldp+337,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[13]),4);
            tracep->chgCData(oldp+338,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[14]),4);
            tracep->chgCData(oldp+339,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[15]),4);
            tracep->chgCData(oldp+340,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[0]),7);
            tracep->chgCData(oldp+341,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[1]),7);
            tracep->chgCData(oldp+342,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[2]),7);
            tracep->chgCData(oldp+343,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[3]),7);
            tracep->chgCData(oldp+344,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[4]),7);
            tracep->chgCData(oldp+345,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[5]),7);
            tracep->chgCData(oldp+346,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[6]),7);
            tracep->chgCData(oldp+347,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[7]),7);
            tracep->chgCData(oldp+348,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[8]),7);
            tracep->chgCData(oldp+349,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[9]),7);
            tracep->chgCData(oldp+350,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[10]),7);
            tracep->chgCData(oldp+351,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[11]),7);
            tracep->chgCData(oldp+352,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[12]),7);
            tracep->chgCData(oldp+353,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[13]),7);
            tracep->chgCData(oldp+354,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[14]),7);
            tracep->chgCData(oldp+355,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[15]),7);
            tracep->chgCData(oldp+356,(vlSelf->top__DOT__b2seg5__DOT__chars[0]),7);
            tracep->chgCData(oldp+357,(vlSelf->top__DOT__b2seg5__DOT__chars[1]),7);
            tracep->chgCData(oldp+358,(vlSelf->top__DOT__b2seg5__DOT__chars[2]),7);
            tracep->chgCData(oldp+359,(vlSelf->top__DOT__b2seg5__DOT__chars[3]),7);
            tracep->chgCData(oldp+360,(vlSelf->top__DOT__b2seg5__DOT__chars[4]),7);
            tracep->chgCData(oldp+361,(vlSelf->top__DOT__b2seg5__DOT__chars[5]),7);
            tracep->chgCData(oldp+362,(vlSelf->top__DOT__b2seg5__DOT__chars[6]),7);
            tracep->chgCData(oldp+363,(vlSelf->top__DOT__b2seg5__DOT__chars[7]),7);
            tracep->chgCData(oldp+364,(vlSelf->top__DOT__b2seg5__DOT__chars[8]),7);
            tracep->chgCData(oldp+365,(vlSelf->top__DOT__b2seg5__DOT__chars[9]),7);
            tracep->chgCData(oldp+366,(vlSelf->top__DOT__b2seg5__DOT__chars[10]),7);
            tracep->chgCData(oldp+367,(vlSelf->top__DOT__b2seg5__DOT__chars[11]),7);
            tracep->chgCData(oldp+368,(vlSelf->top__DOT__b2seg5__DOT__chars[12]),7);
            tracep->chgCData(oldp+369,(vlSelf->top__DOT__b2seg5__DOT__chars[13]),7);
            tracep->chgCData(oldp+370,(vlSelf->top__DOT__b2seg5__DOT__chars[14]),7);
            tracep->chgCData(oldp+371,(vlSelf->top__DOT__b2seg5__DOT__chars[15]),7);
            tracep->chgCData(oldp+372,(vlSelf->top__DOT__b2seg5__DOT__chars
                                       [0U]),7);
            tracep->chgWData(oldp+373,(vlSelf->top__DOT__b2seg5__DOT____Vcellinp__i0____pinNumber4),176);
            tracep->chgSData(oldp+379,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[0]),11);
            tracep->chgSData(oldp+380,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[1]),11);
            tracep->chgSData(oldp+381,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[2]),11);
            tracep->chgSData(oldp+382,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[3]),11);
            tracep->chgSData(oldp+383,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[4]),11);
            tracep->chgSData(oldp+384,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[5]),11);
            tracep->chgSData(oldp+385,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[6]),11);
            tracep->chgSData(oldp+386,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[7]),11);
            tracep->chgSData(oldp+387,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[8]),11);
            tracep->chgSData(oldp+388,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[9]),11);
            tracep->chgSData(oldp+389,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[10]),11);
            tracep->chgSData(oldp+390,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[11]),11);
            tracep->chgSData(oldp+391,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[12]),11);
            tracep->chgSData(oldp+392,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[13]),11);
            tracep->chgSData(oldp+393,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[14]),11);
            tracep->chgSData(oldp+394,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[15]),11);
            tracep->chgCData(oldp+395,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+396,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+397,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[2]),4);
            tracep->chgCData(oldp+398,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[3]),4);
            tracep->chgCData(oldp+399,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[4]),4);
            tracep->chgCData(oldp+400,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[5]),4);
            tracep->chgCData(oldp+401,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[6]),4);
            tracep->chgCData(oldp+402,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[7]),4);
            tracep->chgCData(oldp+403,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[8]),4);
            tracep->chgCData(oldp+404,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[9]),4);
            tracep->chgCData(oldp+405,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[10]),4);
            tracep->chgCData(oldp+406,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[11]),4);
            tracep->chgCData(oldp+407,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[12]),4);
            tracep->chgCData(oldp+408,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[13]),4);
            tracep->chgCData(oldp+409,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[14]),4);
            tracep->chgCData(oldp+410,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[15]),4);
            tracep->chgCData(oldp+411,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[0]),7);
            tracep->chgCData(oldp+412,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[1]),7);
            tracep->chgCData(oldp+413,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[2]),7);
            tracep->chgCData(oldp+414,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[3]),7);
            tracep->chgCData(oldp+415,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[4]),7);
            tracep->chgCData(oldp+416,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[5]),7);
            tracep->chgCData(oldp+417,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[6]),7);
            tracep->chgCData(oldp+418,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[7]),7);
            tracep->chgCData(oldp+419,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[8]),7);
            tracep->chgCData(oldp+420,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[9]),7);
            tracep->chgCData(oldp+421,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[10]),7);
            tracep->chgCData(oldp+422,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[11]),7);
            tracep->chgCData(oldp+423,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[12]),7);
            tracep->chgCData(oldp+424,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[13]),7);
            tracep->chgCData(oldp+425,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[14]),7);
            tracep->chgCData(oldp+426,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[15]),7);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+427,(vlSelf->top__DOT__count),8);
            tracep->chgSData(oldp+428,(vlSelf->top__DOT__pkb__DOT__buffer),10);
            tracep->chgCData(oldp+429,(vlSelf->top__DOT__pkb__DOT__fifo[0]),8);
            tracep->chgCData(oldp+430,(vlSelf->top__DOT__pkb__DOT__fifo[1]),8);
            tracep->chgCData(oldp+431,(vlSelf->top__DOT__pkb__DOT__fifo[2]),8);
            tracep->chgCData(oldp+432,(vlSelf->top__DOT__pkb__DOT__fifo[3]),8);
            tracep->chgCData(oldp+433,(vlSelf->top__DOT__pkb__DOT__fifo[4]),8);
            tracep->chgCData(oldp+434,(vlSelf->top__DOT__pkb__DOT__fifo[5]),8);
            tracep->chgCData(oldp+435,(vlSelf->top__DOT__pkb__DOT__fifo[6]),8);
            tracep->chgCData(oldp+436,(vlSelf->top__DOT__pkb__DOT__fifo[7]),8);
            tracep->chgCData(oldp+437,(vlSelf->top__DOT__pkb__DOT__w_ptr),3);
            tracep->chgCData(oldp+438,(vlSelf->top__DOT__pkb__DOT__r_ptr),3);
            tracep->chgCData(oldp+439,(vlSelf->top__DOT__pkb__DOT__count),4);
            tracep->chgCData(oldp+440,(vlSelf->top__DOT__pkb__DOT__ps2_clk_sync),3);
            tracep->chgBit(oldp+441,((IData)((4U == 
                                              (6U & (IData)(vlSelf->top__DOT__pkb__DOT__ps2_clk_sync))))));
            tracep->chgCData(oldp+442,(vlSelf->top__DOT__vram__DOT__oldaddr),8);
            tracep->chgSData(oldp+443,(vlSelf->top__DOT__vram__DOT__all_cnt),12);
            tracep->chgSData(oldp+444,(vlSelf->top__DOT__vram__DOT__line_cnt),12);
            tracep->chgSData(oldp+445,(vlSelf->top__DOT__vram__DOT__key_addr),12);
            tracep->chgCData(oldp+446,(vlSelf->top__DOT____Vcellout__b2seg0__seg_out),7);
            tracep->chgCData(oldp+447,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__lut_out),7);
            tracep->chgBit(oldp+448,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__hit));
            tracep->chgCData(oldp+449,(vlSelf->top__DOT____Vcellout__b2seg1__seg_out),7);
            tracep->chgCData(oldp+450,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__lut_out),7);
            tracep->chgBit(oldp+451,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__hit));
            tracep->chgCData(oldp+452,(vlSelf->top__DOT____Vcellout__b2seg2__seg_out),7);
            tracep->chgCData(oldp+453,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__lut_out),7);
            tracep->chgBit(oldp+454,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__hit));
            tracep->chgCData(oldp+455,(vlSelf->top__DOT____Vcellout__b2seg3__seg_out),7);
            tracep->chgCData(oldp+456,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__lut_out),7);
            tracep->chgBit(oldp+457,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__hit));
            tracep->chgCData(oldp+458,((0xfU & (IData)(vlSelf->top__DOT__count))),4);
            tracep->chgCData(oldp+459,(vlSelf->top__DOT____Vcellout__b2seg4__seg_out),7);
            tracep->chgCData(oldp+460,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__lut_out),7);
            tracep->chgBit(oldp+461,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__hit));
            tracep->chgCData(oldp+462,((0xfU & ((IData)(vlSelf->top__DOT__count) 
                                                >> 4U))),4);
            tracep->chgCData(oldp+463,(vlSelf->top__DOT____Vcellout__b2seg5__seg_out),7);
            tracep->chgCData(oldp+464,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__lut_out),7);
            tracep->chgBit(oldp+465,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__hit));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgCData(oldp+466,(vlSelf->top__DOT__vgac__DOT__h_count_n),5);
            tracep->chgCData(oldp+467,(vlSelf->top__DOT__vgac__DOT__v_count_n),7);
            tracep->chgCData(oldp+468,(vlSelf->top__DOT__vgac__DOT__y_ascii),4);
            tracep->chgCData(oldp+469,(vlSelf->top__DOT__vgac__DOT__x_ascii),4);
            tracep->chgSData(oldp+470,((((0x90U < (IData)(vlSelf->top__DOT__vgac__DOT__x_cnt)) 
                                         & (0x310U 
                                            >= (IData)(vlSelf->top__DOT__vgac__DOT__x_cnt)))
                                         ? (0x3ffU 
                                            & ((IData)(vlSelf->top__DOT__vgac__DOT__x_cnt) 
                                               - (IData)(0x91U)))
                                         : 0U)),10);
            tracep->chgSData(oldp+471,((((0x23U < (IData)(vlSelf->top__DOT__vgac__DOT__y_cnt)) 
                                         & (0x203U 
                                            >= (IData)(vlSelf->top__DOT__vgac__DOT__y_cnt)))
                                         ? (0x3ffU 
                                            & ((IData)(vlSelf->top__DOT__vgac__DOT__y_cnt) 
                                               - (IData)(0x24U)))
                                         : 0U)),10);
            tracep->chgSData(oldp+472,(vlSelf->top__DOT__vgac__DOT__x_cnt),10);
            tracep->chgSData(oldp+473,(vlSelf->top__DOT__vgac__DOT__y_cnt),10);
            tracep->chgBit(oldp+474,(((0x90U < (IData)(vlSelf->top__DOT__vgac__DOT__x_cnt)) 
                                      & (0x310U >= (IData)(vlSelf->top__DOT__vgac__DOT__x_cnt)))));
            tracep->chgBit(oldp+475,(((0x23U < (IData)(vlSelf->top__DOT__vgac__DOT__y_cnt)) 
                                      & (0x203U >= (IData)(vlSelf->top__DOT__vgac__DOT__y_cnt)))));
        }
        tracep->chgBit(oldp+476,(vlSelf->clk));
        tracep->chgBit(oldp+477,(vlSelf->rst));
        tracep->chgBit(oldp+478,(vlSelf->clrn));
        tracep->chgBit(oldp+479,(vlSelf->ps2_clk));
        tracep->chgBit(oldp+480,(vlSelf->ps2_data));
        tracep->chgBit(oldp+481,(vlSelf->we));
        tracep->chgCData(oldp+482,(vlSelf->din),8);
        tracep->chgSData(oldp+483,(vlSelf->sw),16);
        tracep->chgCData(oldp+484,(vlSelf->btn),4);
        tracep->chgCData(oldp+485,(vlSelf->scancode),8);
        tracep->chgCData(oldp+486,(vlSelf->asciicode),8);
        tracep->chgBit(oldp+487,(vlSelf->ready));
        tracep->chgBit(oldp+488,(vlSelf->overflow));
        tracep->chgBit(oldp+489,(vlSelf->VGA_CLK));
        tracep->chgBit(oldp+490,(vlSelf->VGA_HSYNC));
        tracep->chgBit(oldp+491,(vlSelf->VGA_VSYNC));
        tracep->chgBit(oldp+492,(vlSelf->VGA_VALID));
        tracep->chgCData(oldp+493,(vlSelf->VGA_R),8);
        tracep->chgCData(oldp+494,(vlSelf->VGA_G),8);
        tracep->chgCData(oldp+495,(vlSelf->VGA_B),8);
        tracep->chgCData(oldp+496,(vlSelf->out),4);
        tracep->chgSData(oldp+497,(vlSelf->led),16);
        tracep->chgCData(oldp+498,(vlSelf->HEX0),8);
        tracep->chgCData(oldp+499,(vlSelf->HEX1),8);
        tracep->chgCData(oldp+500,(vlSelf->HEX2),8);
        tracep->chgCData(oldp+501,(vlSelf->HEX3),8);
        tracep->chgCData(oldp+502,(vlSelf->HEX4),8);
        tracep->chgCData(oldp+503,(vlSelf->HEX5),8);
        tracep->chgCData(oldp+504,(vlSelf->top__DOT__vram__DOT__key_ram
                                   [(((IData)(vlSelf->top__DOT__vgac__DOT__h_count_n) 
                                      << 7U) | (IData)(vlSelf->top__DOT__vgac__DOT__v_count_n))]),8);
        tracep->chgIData(oldp+505,(vlSelf->top__DOT__vga_data),24);
        tracep->chgBit(oldp+506,((1U & (~ (IData)(vlSelf->rst)))));
        tracep->chgCData(oldp+507,((0xfU & (IData)(vlSelf->scancode))),4);
        tracep->chgCData(oldp+508,((0xfU & ((IData)(vlSelf->scancode) 
                                            >> 4U))),4);
        tracep->chgCData(oldp+509,((0xfU & (IData)(vlSelf->asciicode))),4);
        tracep->chgCData(oldp+510,((0xfU & ((IData)(vlSelf->asciicode) 
                                            >> 4U))),4);
        tracep->chgSData(oldp+511,(vlSelf->top__DOT__asci2dot0__DOT__y_dot),12);
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
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}