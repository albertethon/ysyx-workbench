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
        tracep->declBit(c+474,"clk", false,-1);
        tracep->declBit(c+475,"rst", false,-1);
        tracep->declBit(c+476,"clrn", false,-1);
        tracep->declBit(c+477,"ps2_clk", false,-1);
        tracep->declBit(c+478,"ps2_data", false,-1);
        tracep->declBit(c+479,"we", false,-1);
        tracep->declBus(c+480,"din", false,-1, 7,0);
        tracep->declBus(c+481,"sw", false,-1, 15,0);
        tracep->declBus(c+482,"btn", false,-1, 3,0);
        tracep->declBus(c+483,"scancode", false,-1, 7,0);
        tracep->declBus(c+484,"asciicode", false,-1, 7,0);
        tracep->declBit(c+485,"ready", false,-1);
        tracep->declBit(c+486,"overflow", false,-1);
        tracep->declBit(c+487,"VGA_CLK", false,-1);
        tracep->declBit(c+488,"VGA_HSYNC", false,-1);
        tracep->declBit(c+489,"VGA_VSYNC", false,-1);
        tracep->declBit(c+490,"VGA_VALID", false,-1);
        tracep->declBus(c+491,"VGA_R", false,-1, 7,0);
        tracep->declBus(c+492,"VGA_G", false,-1, 7,0);
        tracep->declBus(c+493,"VGA_B", false,-1, 7,0);
        tracep->declBus(c+494,"out", false,-1, 3,0);
        tracep->declBus(c+495,"led", false,-1, 15,0);
        tracep->declBus(c+496,"HEX0", false,-1, 7,0);
        tracep->declBus(c+497,"HEX1", false,-1, 7,0);
        tracep->declBus(c+498,"HEX2", false,-1, 7,0);
        tracep->declBus(c+499,"HEX3", false,-1, 7,0);
        tracep->declBus(c+500,"HEX4", false,-1, 7,0);
        tracep->declBus(c+501,"HEX5", false,-1, 7,0);
        tracep->declBit(c+474,"top clk", false,-1);
        tracep->declBit(c+475,"top rst", false,-1);
        tracep->declBit(c+476,"top clrn", false,-1);
        tracep->declBit(c+477,"top ps2_clk", false,-1);
        tracep->declBit(c+478,"top ps2_data", false,-1);
        tracep->declBit(c+479,"top we", false,-1);
        tracep->declBus(c+480,"top din", false,-1, 7,0);
        tracep->declBus(c+481,"top sw", false,-1, 15,0);
        tracep->declBus(c+482,"top btn", false,-1, 3,0);
        tracep->declBus(c+483,"top scancode", false,-1, 7,0);
        tracep->declBus(c+484,"top asciicode", false,-1, 7,0);
        tracep->declBit(c+485,"top ready", false,-1);
        tracep->declBit(c+486,"top overflow", false,-1);
        tracep->declBit(c+487,"top VGA_CLK", false,-1);
        tracep->declBit(c+488,"top VGA_HSYNC", false,-1);
        tracep->declBit(c+489,"top VGA_VSYNC", false,-1);
        tracep->declBit(c+490,"top VGA_VALID", false,-1);
        tracep->declBus(c+491,"top VGA_R", false,-1, 7,0);
        tracep->declBus(c+492,"top VGA_G", false,-1, 7,0);
        tracep->declBus(c+493,"top VGA_B", false,-1, 7,0);
        tracep->declBus(c+494,"top out", false,-1, 3,0);
        tracep->declBus(c+495,"top led", false,-1, 15,0);
        tracep->declBus(c+496,"top HEX0", false,-1, 7,0);
        tracep->declBus(c+497,"top HEX1", false,-1, 7,0);
        tracep->declBus(c+498,"top HEX2", false,-1, 7,0);
        tracep->declBus(c+499,"top HEX3", false,-1, 7,0);
        tracep->declBus(c+500,"top HEX4", false,-1, 7,0);
        tracep->declBus(c+501,"top HEX5", false,-1, 7,0);
        tracep->declBit(c+1,"top sigwe", false,-1);
        tracep->declBus(c+428,"top count", false,-1, 7,0);
        tracep->declBus(c+502,"top ch_asci_data", false,-1, 7,0);
        tracep->declBus(c+464,"top h_count", false,-1, 4,0);
        tracep->declBus(c+465,"top v_count", false,-1, 6,0);
        tracep->declBus(c+466,"top h_ascii", false,-1, 3,0);
        tracep->declBus(c+467,"top v_ascii", false,-1, 3,0);
        tracep->declBus(c+468,"top h_addr", false,-1, 9,0);
        tracep->declBus(c+469,"top v_addr", false,-1, 9,0);
        tracep->declBus(c+503,"top vga_data", false,-1, 23,0);
        tracep->declBit(c+474,"top pkb clk", false,-1);
        tracep->declBit(c+504,"top pkb clrn", false,-1);
        tracep->declBit(c+477,"top pkb ps2_clk", false,-1);
        tracep->declBit(c+478,"top pkb ps2_data", false,-1);
        tracep->declBus(c+483,"top pkb data", false,-1, 7,0);
        tracep->declBus(c+428,"top pkb cnt", false,-1, 7,0);
        tracep->declBit(c+485,"top pkb ready", false,-1);
        tracep->declBit(c+486,"top pkb overflow", false,-1);
        tracep->declBus(c+429,"top pkb buffer", false,-1, 9,0);
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+430+i*1,"top pkb fifo", true,(i+0), 7,0);}}
        tracep->declBus(c+438,"top pkb w_ptr", false,-1, 2,0);
        tracep->declBus(c+439,"top pkb r_ptr", false,-1, 2,0);
        tracep->declBus(c+440,"top pkb count", false,-1, 3,0);
        tracep->declBus(c+441,"top pkb ps2_clk_sync", false,-1, 2,0);
        tracep->declBit(c+442,"top pkb sampling", false,-1);
        tracep->declBit(c+474,"top vram clk", false,-1);
        tracep->declBit(c+485,"top vram we", false,-1);
        tracep->declBus(c+428,"top vram inaddr", false,-1, 7,0);
        tracep->declBus(c+483,"top vram outaddr", false,-1, 7,0);
        tracep->declBus(c+483,"top vram din", false,-1, 7,0);
        tracep->declBus(c+464,"top vram h_count", false,-1, 4,0);
        tracep->declBus(c+465,"top vram v_count", false,-1, 6,0);
        tracep->declBus(c+502,"top vram key_data", false,-1, 7,0);
        tracep->declBus(c+484,"top vram dout", false,-1, 7,0);
        tracep->declBus(c+443,"top vram oldaddr", false,-1, 7,0);
        tracep->declBus(c+505,"top b2seg0 bcd_in", false,-1, 3,0);
        tracep->declBus(c+444,"top b2seg0 seg_out", false,-1, 6,0);
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+2+i*1,"top b2seg0 chars", true,(i+0), 6,0);}}
        tracep->declBus(c+510,"top b2seg0 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+511,"top b2seg0 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+512,"top b2seg0 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+444,"top b2seg0 i0 out", false,-1, 6,0);
        tracep->declBus(c+505,"top b2seg0 i0 key", false,-1, 3,0);
        tracep->declBus(c+18,"top b2seg0 i0 default_out", false,-1, 6,0);
        tracep->declArray(c+19,"top b2seg0 i0 lut", false,-1, 175,0);
        tracep->declBus(c+510,"top b2seg0 i0 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+511,"top b2seg0 i0 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+512,"top b2seg0 i0 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+513,"top b2seg0 i0 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+444,"top b2seg0 i0 i0 out", false,-1, 6,0);
        tracep->declBus(c+505,"top b2seg0 i0 i0 key", false,-1, 3,0);
        tracep->declBus(c+18,"top b2seg0 i0 i0 default_out", false,-1, 6,0);
        tracep->declArray(c+19,"top b2seg0 i0 i0 lut", false,-1, 175,0);
        tracep->declBus(c+514,"top b2seg0 i0 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+25+i*1,"top b2seg0 i0 i0 pair_list", true,(i+0), 10,0);}}
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+41+i*1,"top b2seg0 i0 i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+57+i*1,"top b2seg0 i0 i0 data_list", true,(i+0), 6,0);}}
        tracep->declBus(c+445,"top b2seg0 i0 i0 lut_out", false,-1, 6,0);
        tracep->declBit(c+446,"top b2seg0 i0 i0 hit", false,-1);
        tracep->declBus(c+515,"top b2seg0 i0 i0 i", false,-1, 31,0);
        tracep->declBus(c+506,"top b2seg1 bcd_in", false,-1, 3,0);
        tracep->declBus(c+447,"top b2seg1 seg_out", false,-1, 6,0);
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+73+i*1,"top b2seg1 chars", true,(i+0), 6,0);}}
        tracep->declBus(c+510,"top b2seg1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+511,"top b2seg1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+512,"top b2seg1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+447,"top b2seg1 i0 out", false,-1, 6,0);
        tracep->declBus(c+506,"top b2seg1 i0 key", false,-1, 3,0);
        tracep->declBus(c+89,"top b2seg1 i0 default_out", false,-1, 6,0);
        tracep->declArray(c+90,"top b2seg1 i0 lut", false,-1, 175,0);
        tracep->declBus(c+510,"top b2seg1 i0 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+511,"top b2seg1 i0 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+512,"top b2seg1 i0 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+513,"top b2seg1 i0 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+447,"top b2seg1 i0 i0 out", false,-1, 6,0);
        tracep->declBus(c+506,"top b2seg1 i0 i0 key", false,-1, 3,0);
        tracep->declBus(c+89,"top b2seg1 i0 i0 default_out", false,-1, 6,0);
        tracep->declArray(c+90,"top b2seg1 i0 i0 lut", false,-1, 175,0);
        tracep->declBus(c+514,"top b2seg1 i0 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+96+i*1,"top b2seg1 i0 i0 pair_list", true,(i+0), 10,0);}}
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+112+i*1,"top b2seg1 i0 i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+128+i*1,"top b2seg1 i0 i0 data_list", true,(i+0), 6,0);}}
        tracep->declBus(c+448,"top b2seg1 i0 i0 lut_out", false,-1, 6,0);
        tracep->declBit(c+449,"top b2seg1 i0 i0 hit", false,-1);
        tracep->declBus(c+515,"top b2seg1 i0 i0 i", false,-1, 31,0);
        tracep->declBus(c+507,"top b2seg2 bcd_in", false,-1, 3,0);
        tracep->declBus(c+450,"top b2seg2 seg_out", false,-1, 6,0);
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+144+i*1,"top b2seg2 chars", true,(i+0), 6,0);}}
        tracep->declBus(c+510,"top b2seg2 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+511,"top b2seg2 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+512,"top b2seg2 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+450,"top b2seg2 i0 out", false,-1, 6,0);
        tracep->declBus(c+507,"top b2seg2 i0 key", false,-1, 3,0);
        tracep->declBus(c+160,"top b2seg2 i0 default_out", false,-1, 6,0);
        tracep->declArray(c+161,"top b2seg2 i0 lut", false,-1, 175,0);
        tracep->declBus(c+510,"top b2seg2 i0 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+511,"top b2seg2 i0 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+512,"top b2seg2 i0 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+513,"top b2seg2 i0 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+450,"top b2seg2 i0 i0 out", false,-1, 6,0);
        tracep->declBus(c+507,"top b2seg2 i0 i0 key", false,-1, 3,0);
        tracep->declBus(c+160,"top b2seg2 i0 i0 default_out", false,-1, 6,0);
        tracep->declArray(c+161,"top b2seg2 i0 i0 lut", false,-1, 175,0);
        tracep->declBus(c+514,"top b2seg2 i0 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+167+i*1,"top b2seg2 i0 i0 pair_list", true,(i+0), 10,0);}}
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+183+i*1,"top b2seg2 i0 i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+199+i*1,"top b2seg2 i0 i0 data_list", true,(i+0), 6,0);}}
        tracep->declBus(c+451,"top b2seg2 i0 i0 lut_out", false,-1, 6,0);
        tracep->declBit(c+452,"top b2seg2 i0 i0 hit", false,-1);
        tracep->declBus(c+515,"top b2seg2 i0 i0 i", false,-1, 31,0);
        tracep->declBus(c+508,"top b2seg3 bcd_in", false,-1, 3,0);
        tracep->declBus(c+453,"top b2seg3 seg_out", false,-1, 6,0);
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+215+i*1,"top b2seg3 chars", true,(i+0), 6,0);}}
        tracep->declBus(c+510,"top b2seg3 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+511,"top b2seg3 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+512,"top b2seg3 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+453,"top b2seg3 i0 out", false,-1, 6,0);
        tracep->declBus(c+508,"top b2seg3 i0 key", false,-1, 3,0);
        tracep->declBus(c+231,"top b2seg3 i0 default_out", false,-1, 6,0);
        tracep->declArray(c+232,"top b2seg3 i0 lut", false,-1, 175,0);
        tracep->declBus(c+510,"top b2seg3 i0 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+511,"top b2seg3 i0 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+512,"top b2seg3 i0 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+513,"top b2seg3 i0 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+453,"top b2seg3 i0 i0 out", false,-1, 6,0);
        tracep->declBus(c+508,"top b2seg3 i0 i0 key", false,-1, 3,0);
        tracep->declBus(c+231,"top b2seg3 i0 i0 default_out", false,-1, 6,0);
        tracep->declArray(c+232,"top b2seg3 i0 i0 lut", false,-1, 175,0);
        tracep->declBus(c+514,"top b2seg3 i0 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+238+i*1,"top b2seg3 i0 i0 pair_list", true,(i+0), 10,0);}}
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+254+i*1,"top b2seg3 i0 i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+270+i*1,"top b2seg3 i0 i0 data_list", true,(i+0), 6,0);}}
        tracep->declBus(c+454,"top b2seg3 i0 i0 lut_out", false,-1, 6,0);
        tracep->declBit(c+455,"top b2seg3 i0 i0 hit", false,-1);
        tracep->declBus(c+515,"top b2seg3 i0 i0 i", false,-1, 31,0);
        tracep->declBus(c+456,"top b2seg4 bcd_in", false,-1, 3,0);
        tracep->declBus(c+457,"top b2seg4 seg_out", false,-1, 6,0);
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+286+i*1,"top b2seg4 chars", true,(i+0), 6,0);}}
        tracep->declBus(c+510,"top b2seg4 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+511,"top b2seg4 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+512,"top b2seg4 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+457,"top b2seg4 i0 out", false,-1, 6,0);
        tracep->declBus(c+456,"top b2seg4 i0 key", false,-1, 3,0);
        tracep->declBus(c+302,"top b2seg4 i0 default_out", false,-1, 6,0);
        tracep->declArray(c+303,"top b2seg4 i0 lut", false,-1, 175,0);
        tracep->declBus(c+510,"top b2seg4 i0 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+511,"top b2seg4 i0 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+512,"top b2seg4 i0 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+513,"top b2seg4 i0 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+457,"top b2seg4 i0 i0 out", false,-1, 6,0);
        tracep->declBus(c+456,"top b2seg4 i0 i0 key", false,-1, 3,0);
        tracep->declBus(c+302,"top b2seg4 i0 i0 default_out", false,-1, 6,0);
        tracep->declArray(c+303,"top b2seg4 i0 i0 lut", false,-1, 175,0);
        tracep->declBus(c+514,"top b2seg4 i0 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+309+i*1,"top b2seg4 i0 i0 pair_list", true,(i+0), 10,0);}}
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+325+i*1,"top b2seg4 i0 i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+341+i*1,"top b2seg4 i0 i0 data_list", true,(i+0), 6,0);}}
        tracep->declBus(c+458,"top b2seg4 i0 i0 lut_out", false,-1, 6,0);
        tracep->declBit(c+459,"top b2seg4 i0 i0 hit", false,-1);
        tracep->declBus(c+515,"top b2seg4 i0 i0 i", false,-1, 31,0);
        tracep->declBus(c+460,"top b2seg5 bcd_in", false,-1, 3,0);
        tracep->declBus(c+461,"top b2seg5 seg_out", false,-1, 6,0);
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+357+i*1,"top b2seg5 chars", true,(i+0), 6,0);}}
        tracep->declBus(c+510,"top b2seg5 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+511,"top b2seg5 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+512,"top b2seg5 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+461,"top b2seg5 i0 out", false,-1, 6,0);
        tracep->declBus(c+460,"top b2seg5 i0 key", false,-1, 3,0);
        tracep->declBus(c+373,"top b2seg5 i0 default_out", false,-1, 6,0);
        tracep->declArray(c+374,"top b2seg5 i0 lut", false,-1, 175,0);
        tracep->declBus(c+510,"top b2seg5 i0 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+511,"top b2seg5 i0 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+512,"top b2seg5 i0 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+513,"top b2seg5 i0 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+461,"top b2seg5 i0 i0 out", false,-1, 6,0);
        tracep->declBus(c+460,"top b2seg5 i0 i0 key", false,-1, 3,0);
        tracep->declBus(c+373,"top b2seg5 i0 i0 default_out", false,-1, 6,0);
        tracep->declArray(c+374,"top b2seg5 i0 i0 lut", false,-1, 175,0);
        tracep->declBus(c+514,"top b2seg5 i0 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+380+i*1,"top b2seg5 i0 i0 pair_list", true,(i+0), 10,0);}}
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+396+i*1,"top b2seg5 i0 i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+412+i*1,"top b2seg5 i0 i0 data_list", true,(i+0), 6,0);}}
        tracep->declBus(c+462,"top b2seg5 i0 i0 lut_out", false,-1, 6,0);
        tracep->declBit(c+463,"top b2seg5 i0 i0 hit", false,-1);
        tracep->declBus(c+515,"top b2seg5 i0 i0 i", false,-1, 31,0);
        tracep->declBus(c+502,"top asci2dot0 asci_data", false,-1, 7,0);
        tracep->declBus(c+466,"top asci2dot0 h_ascii", false,-1, 3,0);
        tracep->declBus(c+467,"top asci2dot0 v_ascii", false,-1, 3,0);
        tracep->declBus(c+503,"top asci2dot0 vga_data", false,-1, 23,0);
        tracep->declBus(c+509,"top asci2dot0 y_dot", false,-1, 11,0);
        tracep->declBit(c+487,"top vgac pclk", false,-1);
        tracep->declBit(c+475,"top vgac reset", false,-1);
        tracep->declBus(c+503,"top vgac vga_data", false,-1, 23,0);
        tracep->declBus(c+468,"top vgac h_addr", false,-1, 9,0);
        tracep->declBus(c+469,"top vgac v_addr", false,-1, 9,0);
        tracep->declBus(c+464,"top vgac h_count", false,-1, 4,0);
        tracep->declBus(c+465,"top vgac v_count", false,-1, 6,0);
        tracep->declBus(c+466,"top vgac h_ascii", false,-1, 3,0);
        tracep->declBus(c+467,"top vgac v_ascii", false,-1, 3,0);
        tracep->declBit(c+488,"top vgac hsync", false,-1);
        tracep->declBit(c+489,"top vgac vsync", false,-1);
        tracep->declBit(c+490,"top vgac valid", false,-1);
        tracep->declBus(c+491,"top vgac vga_r", false,-1, 7,0);
        tracep->declBus(c+492,"top vgac vga_g", false,-1, 7,0);
        tracep->declBus(c+493,"top vgac vga_b", false,-1, 7,0);
        tracep->declBus(c+516,"top vgac h_frontporch", false,-1, 31,0);
        tracep->declBus(c+517,"top vgac h_active", false,-1, 31,0);
        tracep->declBus(c+518,"top vgac h_backporch", false,-1, 31,0);
        tracep->declBus(c+519,"top vgac h_total", false,-1, 31,0);
        tracep->declBus(c+520,"top vgac v_frontporch", false,-1, 31,0);
        tracep->declBus(c+521,"top vgac v_active", false,-1, 31,0);
        tracep->declBus(c+522,"top vgac v_backporch", false,-1, 31,0);
        tracep->declBus(c+523,"top vgac v_total", false,-1, 31,0);
        tracep->declBus(c+470,"top vgac x_cnt", false,-1, 9,0);
        tracep->declBus(c+471,"top vgac y_cnt", false,-1, 9,0);
        tracep->declBus(c+467,"top vgac x_ascii", false,-1, 3,0);
        tracep->declBus(c+466,"top vgac y_ascii", false,-1, 3,0);
        tracep->declBus(c+464,"top vgac h_count_n", false,-1, 4,0);
        tracep->declBus(c+465,"top vgac v_count_n", false,-1, 6,0);
        tracep->declBit(c+472,"top vgac h_valid", false,-1);
        tracep->declBit(c+473,"top vgac v_valid", false,-1);
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
        tracep->fullBit(oldp+1,(vlSelf->top__DOT__sigwe));
        tracep->fullCData(oldp+2,(vlSelf->top__DOT__b2seg0__DOT__chars[0]),7);
        tracep->fullCData(oldp+3,(vlSelf->top__DOT__b2seg0__DOT__chars[1]),7);
        tracep->fullCData(oldp+4,(vlSelf->top__DOT__b2seg0__DOT__chars[2]),7);
        tracep->fullCData(oldp+5,(vlSelf->top__DOT__b2seg0__DOT__chars[3]),7);
        tracep->fullCData(oldp+6,(vlSelf->top__DOT__b2seg0__DOT__chars[4]),7);
        tracep->fullCData(oldp+7,(vlSelf->top__DOT__b2seg0__DOT__chars[5]),7);
        tracep->fullCData(oldp+8,(vlSelf->top__DOT__b2seg0__DOT__chars[6]),7);
        tracep->fullCData(oldp+9,(vlSelf->top__DOT__b2seg0__DOT__chars[7]),7);
        tracep->fullCData(oldp+10,(vlSelf->top__DOT__b2seg0__DOT__chars[8]),7);
        tracep->fullCData(oldp+11,(vlSelf->top__DOT__b2seg0__DOT__chars[9]),7);
        tracep->fullCData(oldp+12,(vlSelf->top__DOT__b2seg0__DOT__chars[10]),7);
        tracep->fullCData(oldp+13,(vlSelf->top__DOT__b2seg0__DOT__chars[11]),7);
        tracep->fullCData(oldp+14,(vlSelf->top__DOT__b2seg0__DOT__chars[12]),7);
        tracep->fullCData(oldp+15,(vlSelf->top__DOT__b2seg0__DOT__chars[13]),7);
        tracep->fullCData(oldp+16,(vlSelf->top__DOT__b2seg0__DOT__chars[14]),7);
        tracep->fullCData(oldp+17,(vlSelf->top__DOT__b2seg0__DOT__chars[15]),7);
        tracep->fullCData(oldp+18,(vlSelf->top__DOT__b2seg0__DOT__chars
                                   [0U]),7);
        tracep->fullWData(oldp+19,(vlSelf->top__DOT__b2seg0__DOT____Vcellinp__i0____pinNumber4),176);
        tracep->fullSData(oldp+25,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[0]),11);
        tracep->fullSData(oldp+26,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[1]),11);
        tracep->fullSData(oldp+27,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[2]),11);
        tracep->fullSData(oldp+28,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[3]),11);
        tracep->fullSData(oldp+29,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[4]),11);
        tracep->fullSData(oldp+30,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[5]),11);
        tracep->fullSData(oldp+31,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[6]),11);
        tracep->fullSData(oldp+32,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[7]),11);
        tracep->fullSData(oldp+33,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[8]),11);
        tracep->fullSData(oldp+34,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[9]),11);
        tracep->fullSData(oldp+35,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[10]),11);
        tracep->fullSData(oldp+36,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[11]),11);
        tracep->fullSData(oldp+37,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[12]),11);
        tracep->fullSData(oldp+38,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[13]),11);
        tracep->fullSData(oldp+39,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[14]),11);
        tracep->fullSData(oldp+40,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__pair_list[15]),11);
        tracep->fullCData(oldp+41,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+42,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+43,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[2]),4);
        tracep->fullCData(oldp+44,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[3]),4);
        tracep->fullCData(oldp+45,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[4]),4);
        tracep->fullCData(oldp+46,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[5]),4);
        tracep->fullCData(oldp+47,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[6]),4);
        tracep->fullCData(oldp+48,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[7]),4);
        tracep->fullCData(oldp+49,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[8]),4);
        tracep->fullCData(oldp+50,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[9]),4);
        tracep->fullCData(oldp+51,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[10]),4);
        tracep->fullCData(oldp+52,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[11]),4);
        tracep->fullCData(oldp+53,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[12]),4);
        tracep->fullCData(oldp+54,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[13]),4);
        tracep->fullCData(oldp+55,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[14]),4);
        tracep->fullCData(oldp+56,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__key_list[15]),4);
        tracep->fullCData(oldp+57,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[0]),7);
        tracep->fullCData(oldp+58,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[1]),7);
        tracep->fullCData(oldp+59,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[2]),7);
        tracep->fullCData(oldp+60,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[3]),7);
        tracep->fullCData(oldp+61,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[4]),7);
        tracep->fullCData(oldp+62,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[5]),7);
        tracep->fullCData(oldp+63,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[6]),7);
        tracep->fullCData(oldp+64,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[7]),7);
        tracep->fullCData(oldp+65,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[8]),7);
        tracep->fullCData(oldp+66,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[9]),7);
        tracep->fullCData(oldp+67,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[10]),7);
        tracep->fullCData(oldp+68,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[11]),7);
        tracep->fullCData(oldp+69,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[12]),7);
        tracep->fullCData(oldp+70,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[13]),7);
        tracep->fullCData(oldp+71,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[14]),7);
        tracep->fullCData(oldp+72,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__data_list[15]),7);
        tracep->fullCData(oldp+73,(vlSelf->top__DOT__b2seg1__DOT__chars[0]),7);
        tracep->fullCData(oldp+74,(vlSelf->top__DOT__b2seg1__DOT__chars[1]),7);
        tracep->fullCData(oldp+75,(vlSelf->top__DOT__b2seg1__DOT__chars[2]),7);
        tracep->fullCData(oldp+76,(vlSelf->top__DOT__b2seg1__DOT__chars[3]),7);
        tracep->fullCData(oldp+77,(vlSelf->top__DOT__b2seg1__DOT__chars[4]),7);
        tracep->fullCData(oldp+78,(vlSelf->top__DOT__b2seg1__DOT__chars[5]),7);
        tracep->fullCData(oldp+79,(vlSelf->top__DOT__b2seg1__DOT__chars[6]),7);
        tracep->fullCData(oldp+80,(vlSelf->top__DOT__b2seg1__DOT__chars[7]),7);
        tracep->fullCData(oldp+81,(vlSelf->top__DOT__b2seg1__DOT__chars[8]),7);
        tracep->fullCData(oldp+82,(vlSelf->top__DOT__b2seg1__DOT__chars[9]),7);
        tracep->fullCData(oldp+83,(vlSelf->top__DOT__b2seg1__DOT__chars[10]),7);
        tracep->fullCData(oldp+84,(vlSelf->top__DOT__b2seg1__DOT__chars[11]),7);
        tracep->fullCData(oldp+85,(vlSelf->top__DOT__b2seg1__DOT__chars[12]),7);
        tracep->fullCData(oldp+86,(vlSelf->top__DOT__b2seg1__DOT__chars[13]),7);
        tracep->fullCData(oldp+87,(vlSelf->top__DOT__b2seg1__DOT__chars[14]),7);
        tracep->fullCData(oldp+88,(vlSelf->top__DOT__b2seg1__DOT__chars[15]),7);
        tracep->fullCData(oldp+89,(vlSelf->top__DOT__b2seg1__DOT__chars
                                   [0U]),7);
        tracep->fullWData(oldp+90,(vlSelf->top__DOT__b2seg1__DOT____Vcellinp__i0____pinNumber4),176);
        tracep->fullSData(oldp+96,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[0]),11);
        tracep->fullSData(oldp+97,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[1]),11);
        tracep->fullSData(oldp+98,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[2]),11);
        tracep->fullSData(oldp+99,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[3]),11);
        tracep->fullSData(oldp+100,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[4]),11);
        tracep->fullSData(oldp+101,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[5]),11);
        tracep->fullSData(oldp+102,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[6]),11);
        tracep->fullSData(oldp+103,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[7]),11);
        tracep->fullSData(oldp+104,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[8]),11);
        tracep->fullSData(oldp+105,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[9]),11);
        tracep->fullSData(oldp+106,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[10]),11);
        tracep->fullSData(oldp+107,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[11]),11);
        tracep->fullSData(oldp+108,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[12]),11);
        tracep->fullSData(oldp+109,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[13]),11);
        tracep->fullSData(oldp+110,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[14]),11);
        tracep->fullSData(oldp+111,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__pair_list[15]),11);
        tracep->fullCData(oldp+112,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+113,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+114,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[2]),4);
        tracep->fullCData(oldp+115,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[3]),4);
        tracep->fullCData(oldp+116,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[4]),4);
        tracep->fullCData(oldp+117,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[5]),4);
        tracep->fullCData(oldp+118,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[6]),4);
        tracep->fullCData(oldp+119,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[7]),4);
        tracep->fullCData(oldp+120,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[8]),4);
        tracep->fullCData(oldp+121,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[9]),4);
        tracep->fullCData(oldp+122,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[10]),4);
        tracep->fullCData(oldp+123,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[11]),4);
        tracep->fullCData(oldp+124,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[12]),4);
        tracep->fullCData(oldp+125,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[13]),4);
        tracep->fullCData(oldp+126,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[14]),4);
        tracep->fullCData(oldp+127,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__key_list[15]),4);
        tracep->fullCData(oldp+128,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[0]),7);
        tracep->fullCData(oldp+129,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[1]),7);
        tracep->fullCData(oldp+130,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[2]),7);
        tracep->fullCData(oldp+131,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[3]),7);
        tracep->fullCData(oldp+132,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[4]),7);
        tracep->fullCData(oldp+133,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[5]),7);
        tracep->fullCData(oldp+134,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[6]),7);
        tracep->fullCData(oldp+135,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[7]),7);
        tracep->fullCData(oldp+136,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[8]),7);
        tracep->fullCData(oldp+137,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[9]),7);
        tracep->fullCData(oldp+138,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[10]),7);
        tracep->fullCData(oldp+139,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[11]),7);
        tracep->fullCData(oldp+140,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[12]),7);
        tracep->fullCData(oldp+141,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[13]),7);
        tracep->fullCData(oldp+142,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[14]),7);
        tracep->fullCData(oldp+143,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__data_list[15]),7);
        tracep->fullCData(oldp+144,(vlSelf->top__DOT__b2seg2__DOT__chars[0]),7);
        tracep->fullCData(oldp+145,(vlSelf->top__DOT__b2seg2__DOT__chars[1]),7);
        tracep->fullCData(oldp+146,(vlSelf->top__DOT__b2seg2__DOT__chars[2]),7);
        tracep->fullCData(oldp+147,(vlSelf->top__DOT__b2seg2__DOT__chars[3]),7);
        tracep->fullCData(oldp+148,(vlSelf->top__DOT__b2seg2__DOT__chars[4]),7);
        tracep->fullCData(oldp+149,(vlSelf->top__DOT__b2seg2__DOT__chars[5]),7);
        tracep->fullCData(oldp+150,(vlSelf->top__DOT__b2seg2__DOT__chars[6]),7);
        tracep->fullCData(oldp+151,(vlSelf->top__DOT__b2seg2__DOT__chars[7]),7);
        tracep->fullCData(oldp+152,(vlSelf->top__DOT__b2seg2__DOT__chars[8]),7);
        tracep->fullCData(oldp+153,(vlSelf->top__DOT__b2seg2__DOT__chars[9]),7);
        tracep->fullCData(oldp+154,(vlSelf->top__DOT__b2seg2__DOT__chars[10]),7);
        tracep->fullCData(oldp+155,(vlSelf->top__DOT__b2seg2__DOT__chars[11]),7);
        tracep->fullCData(oldp+156,(vlSelf->top__DOT__b2seg2__DOT__chars[12]),7);
        tracep->fullCData(oldp+157,(vlSelf->top__DOT__b2seg2__DOT__chars[13]),7);
        tracep->fullCData(oldp+158,(vlSelf->top__DOT__b2seg2__DOT__chars[14]),7);
        tracep->fullCData(oldp+159,(vlSelf->top__DOT__b2seg2__DOT__chars[15]),7);
        tracep->fullCData(oldp+160,(vlSelf->top__DOT__b2seg2__DOT__chars
                                    [0U]),7);
        tracep->fullWData(oldp+161,(vlSelf->top__DOT__b2seg2__DOT____Vcellinp__i0____pinNumber4),176);
        tracep->fullSData(oldp+167,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[0]),11);
        tracep->fullSData(oldp+168,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[1]),11);
        tracep->fullSData(oldp+169,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[2]),11);
        tracep->fullSData(oldp+170,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[3]),11);
        tracep->fullSData(oldp+171,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[4]),11);
        tracep->fullSData(oldp+172,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[5]),11);
        tracep->fullSData(oldp+173,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[6]),11);
        tracep->fullSData(oldp+174,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[7]),11);
        tracep->fullSData(oldp+175,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[8]),11);
        tracep->fullSData(oldp+176,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[9]),11);
        tracep->fullSData(oldp+177,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[10]),11);
        tracep->fullSData(oldp+178,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[11]),11);
        tracep->fullSData(oldp+179,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[12]),11);
        tracep->fullSData(oldp+180,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[13]),11);
        tracep->fullSData(oldp+181,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[14]),11);
        tracep->fullSData(oldp+182,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__pair_list[15]),11);
        tracep->fullCData(oldp+183,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+184,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+185,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[2]),4);
        tracep->fullCData(oldp+186,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[3]),4);
        tracep->fullCData(oldp+187,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[4]),4);
        tracep->fullCData(oldp+188,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[5]),4);
        tracep->fullCData(oldp+189,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[6]),4);
        tracep->fullCData(oldp+190,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[7]),4);
        tracep->fullCData(oldp+191,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[8]),4);
        tracep->fullCData(oldp+192,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[9]),4);
        tracep->fullCData(oldp+193,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[10]),4);
        tracep->fullCData(oldp+194,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[11]),4);
        tracep->fullCData(oldp+195,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[12]),4);
        tracep->fullCData(oldp+196,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[13]),4);
        tracep->fullCData(oldp+197,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[14]),4);
        tracep->fullCData(oldp+198,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__key_list[15]),4);
        tracep->fullCData(oldp+199,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[0]),7);
        tracep->fullCData(oldp+200,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[1]),7);
        tracep->fullCData(oldp+201,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[2]),7);
        tracep->fullCData(oldp+202,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[3]),7);
        tracep->fullCData(oldp+203,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[4]),7);
        tracep->fullCData(oldp+204,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[5]),7);
        tracep->fullCData(oldp+205,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[6]),7);
        tracep->fullCData(oldp+206,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[7]),7);
        tracep->fullCData(oldp+207,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[8]),7);
        tracep->fullCData(oldp+208,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[9]),7);
        tracep->fullCData(oldp+209,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[10]),7);
        tracep->fullCData(oldp+210,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[11]),7);
        tracep->fullCData(oldp+211,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[12]),7);
        tracep->fullCData(oldp+212,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[13]),7);
        tracep->fullCData(oldp+213,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[14]),7);
        tracep->fullCData(oldp+214,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__data_list[15]),7);
        tracep->fullCData(oldp+215,(vlSelf->top__DOT__b2seg3__DOT__chars[0]),7);
        tracep->fullCData(oldp+216,(vlSelf->top__DOT__b2seg3__DOT__chars[1]),7);
        tracep->fullCData(oldp+217,(vlSelf->top__DOT__b2seg3__DOT__chars[2]),7);
        tracep->fullCData(oldp+218,(vlSelf->top__DOT__b2seg3__DOT__chars[3]),7);
        tracep->fullCData(oldp+219,(vlSelf->top__DOT__b2seg3__DOT__chars[4]),7);
        tracep->fullCData(oldp+220,(vlSelf->top__DOT__b2seg3__DOT__chars[5]),7);
        tracep->fullCData(oldp+221,(vlSelf->top__DOT__b2seg3__DOT__chars[6]),7);
        tracep->fullCData(oldp+222,(vlSelf->top__DOT__b2seg3__DOT__chars[7]),7);
        tracep->fullCData(oldp+223,(vlSelf->top__DOT__b2seg3__DOT__chars[8]),7);
        tracep->fullCData(oldp+224,(vlSelf->top__DOT__b2seg3__DOT__chars[9]),7);
        tracep->fullCData(oldp+225,(vlSelf->top__DOT__b2seg3__DOT__chars[10]),7);
        tracep->fullCData(oldp+226,(vlSelf->top__DOT__b2seg3__DOT__chars[11]),7);
        tracep->fullCData(oldp+227,(vlSelf->top__DOT__b2seg3__DOT__chars[12]),7);
        tracep->fullCData(oldp+228,(vlSelf->top__DOT__b2seg3__DOT__chars[13]),7);
        tracep->fullCData(oldp+229,(vlSelf->top__DOT__b2seg3__DOT__chars[14]),7);
        tracep->fullCData(oldp+230,(vlSelf->top__DOT__b2seg3__DOT__chars[15]),7);
        tracep->fullCData(oldp+231,(vlSelf->top__DOT__b2seg3__DOT__chars
                                    [0U]),7);
        tracep->fullWData(oldp+232,(vlSelf->top__DOT__b2seg3__DOT____Vcellinp__i0____pinNumber4),176);
        tracep->fullSData(oldp+238,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[0]),11);
        tracep->fullSData(oldp+239,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[1]),11);
        tracep->fullSData(oldp+240,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[2]),11);
        tracep->fullSData(oldp+241,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[3]),11);
        tracep->fullSData(oldp+242,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[4]),11);
        tracep->fullSData(oldp+243,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[5]),11);
        tracep->fullSData(oldp+244,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[6]),11);
        tracep->fullSData(oldp+245,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[7]),11);
        tracep->fullSData(oldp+246,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[8]),11);
        tracep->fullSData(oldp+247,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[9]),11);
        tracep->fullSData(oldp+248,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[10]),11);
        tracep->fullSData(oldp+249,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[11]),11);
        tracep->fullSData(oldp+250,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[12]),11);
        tracep->fullSData(oldp+251,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[13]),11);
        tracep->fullSData(oldp+252,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[14]),11);
        tracep->fullSData(oldp+253,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__pair_list[15]),11);
        tracep->fullCData(oldp+254,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+255,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+256,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[2]),4);
        tracep->fullCData(oldp+257,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[3]),4);
        tracep->fullCData(oldp+258,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[4]),4);
        tracep->fullCData(oldp+259,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[5]),4);
        tracep->fullCData(oldp+260,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[6]),4);
        tracep->fullCData(oldp+261,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[7]),4);
        tracep->fullCData(oldp+262,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[8]),4);
        tracep->fullCData(oldp+263,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[9]),4);
        tracep->fullCData(oldp+264,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[10]),4);
        tracep->fullCData(oldp+265,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[11]),4);
        tracep->fullCData(oldp+266,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[12]),4);
        tracep->fullCData(oldp+267,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[13]),4);
        tracep->fullCData(oldp+268,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[14]),4);
        tracep->fullCData(oldp+269,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__key_list[15]),4);
        tracep->fullCData(oldp+270,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[0]),7);
        tracep->fullCData(oldp+271,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[1]),7);
        tracep->fullCData(oldp+272,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[2]),7);
        tracep->fullCData(oldp+273,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[3]),7);
        tracep->fullCData(oldp+274,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[4]),7);
        tracep->fullCData(oldp+275,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[5]),7);
        tracep->fullCData(oldp+276,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[6]),7);
        tracep->fullCData(oldp+277,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[7]),7);
        tracep->fullCData(oldp+278,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[8]),7);
        tracep->fullCData(oldp+279,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[9]),7);
        tracep->fullCData(oldp+280,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[10]),7);
        tracep->fullCData(oldp+281,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[11]),7);
        tracep->fullCData(oldp+282,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[12]),7);
        tracep->fullCData(oldp+283,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[13]),7);
        tracep->fullCData(oldp+284,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[14]),7);
        tracep->fullCData(oldp+285,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__data_list[15]),7);
        tracep->fullCData(oldp+286,(vlSelf->top__DOT__b2seg4__DOT__chars[0]),7);
        tracep->fullCData(oldp+287,(vlSelf->top__DOT__b2seg4__DOT__chars[1]),7);
        tracep->fullCData(oldp+288,(vlSelf->top__DOT__b2seg4__DOT__chars[2]),7);
        tracep->fullCData(oldp+289,(vlSelf->top__DOT__b2seg4__DOT__chars[3]),7);
        tracep->fullCData(oldp+290,(vlSelf->top__DOT__b2seg4__DOT__chars[4]),7);
        tracep->fullCData(oldp+291,(vlSelf->top__DOT__b2seg4__DOT__chars[5]),7);
        tracep->fullCData(oldp+292,(vlSelf->top__DOT__b2seg4__DOT__chars[6]),7);
        tracep->fullCData(oldp+293,(vlSelf->top__DOT__b2seg4__DOT__chars[7]),7);
        tracep->fullCData(oldp+294,(vlSelf->top__DOT__b2seg4__DOT__chars[8]),7);
        tracep->fullCData(oldp+295,(vlSelf->top__DOT__b2seg4__DOT__chars[9]),7);
        tracep->fullCData(oldp+296,(vlSelf->top__DOT__b2seg4__DOT__chars[10]),7);
        tracep->fullCData(oldp+297,(vlSelf->top__DOT__b2seg4__DOT__chars[11]),7);
        tracep->fullCData(oldp+298,(vlSelf->top__DOT__b2seg4__DOT__chars[12]),7);
        tracep->fullCData(oldp+299,(vlSelf->top__DOT__b2seg4__DOT__chars[13]),7);
        tracep->fullCData(oldp+300,(vlSelf->top__DOT__b2seg4__DOT__chars[14]),7);
        tracep->fullCData(oldp+301,(vlSelf->top__DOT__b2seg4__DOT__chars[15]),7);
        tracep->fullCData(oldp+302,(vlSelf->top__DOT__b2seg4__DOT__chars
                                    [0U]),7);
        tracep->fullWData(oldp+303,(vlSelf->top__DOT__b2seg4__DOT____Vcellinp__i0____pinNumber4),176);
        tracep->fullSData(oldp+309,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[0]),11);
        tracep->fullSData(oldp+310,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[1]),11);
        tracep->fullSData(oldp+311,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[2]),11);
        tracep->fullSData(oldp+312,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[3]),11);
        tracep->fullSData(oldp+313,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[4]),11);
        tracep->fullSData(oldp+314,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[5]),11);
        tracep->fullSData(oldp+315,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[6]),11);
        tracep->fullSData(oldp+316,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[7]),11);
        tracep->fullSData(oldp+317,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[8]),11);
        tracep->fullSData(oldp+318,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[9]),11);
        tracep->fullSData(oldp+319,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[10]),11);
        tracep->fullSData(oldp+320,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[11]),11);
        tracep->fullSData(oldp+321,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[12]),11);
        tracep->fullSData(oldp+322,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[13]),11);
        tracep->fullSData(oldp+323,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[14]),11);
        tracep->fullSData(oldp+324,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__pair_list[15]),11);
        tracep->fullCData(oldp+325,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+326,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+327,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[2]),4);
        tracep->fullCData(oldp+328,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[3]),4);
        tracep->fullCData(oldp+329,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[4]),4);
        tracep->fullCData(oldp+330,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[5]),4);
        tracep->fullCData(oldp+331,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[6]),4);
        tracep->fullCData(oldp+332,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[7]),4);
        tracep->fullCData(oldp+333,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[8]),4);
        tracep->fullCData(oldp+334,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[9]),4);
        tracep->fullCData(oldp+335,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[10]),4);
        tracep->fullCData(oldp+336,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[11]),4);
        tracep->fullCData(oldp+337,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[12]),4);
        tracep->fullCData(oldp+338,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[13]),4);
        tracep->fullCData(oldp+339,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[14]),4);
        tracep->fullCData(oldp+340,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__key_list[15]),4);
        tracep->fullCData(oldp+341,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[0]),7);
        tracep->fullCData(oldp+342,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[1]),7);
        tracep->fullCData(oldp+343,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[2]),7);
        tracep->fullCData(oldp+344,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[3]),7);
        tracep->fullCData(oldp+345,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[4]),7);
        tracep->fullCData(oldp+346,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[5]),7);
        tracep->fullCData(oldp+347,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[6]),7);
        tracep->fullCData(oldp+348,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[7]),7);
        tracep->fullCData(oldp+349,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[8]),7);
        tracep->fullCData(oldp+350,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[9]),7);
        tracep->fullCData(oldp+351,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[10]),7);
        tracep->fullCData(oldp+352,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[11]),7);
        tracep->fullCData(oldp+353,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[12]),7);
        tracep->fullCData(oldp+354,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[13]),7);
        tracep->fullCData(oldp+355,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[14]),7);
        tracep->fullCData(oldp+356,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__data_list[15]),7);
        tracep->fullCData(oldp+357,(vlSelf->top__DOT__b2seg5__DOT__chars[0]),7);
        tracep->fullCData(oldp+358,(vlSelf->top__DOT__b2seg5__DOT__chars[1]),7);
        tracep->fullCData(oldp+359,(vlSelf->top__DOT__b2seg5__DOT__chars[2]),7);
        tracep->fullCData(oldp+360,(vlSelf->top__DOT__b2seg5__DOT__chars[3]),7);
        tracep->fullCData(oldp+361,(vlSelf->top__DOT__b2seg5__DOT__chars[4]),7);
        tracep->fullCData(oldp+362,(vlSelf->top__DOT__b2seg5__DOT__chars[5]),7);
        tracep->fullCData(oldp+363,(vlSelf->top__DOT__b2seg5__DOT__chars[6]),7);
        tracep->fullCData(oldp+364,(vlSelf->top__DOT__b2seg5__DOT__chars[7]),7);
        tracep->fullCData(oldp+365,(vlSelf->top__DOT__b2seg5__DOT__chars[8]),7);
        tracep->fullCData(oldp+366,(vlSelf->top__DOT__b2seg5__DOT__chars[9]),7);
        tracep->fullCData(oldp+367,(vlSelf->top__DOT__b2seg5__DOT__chars[10]),7);
        tracep->fullCData(oldp+368,(vlSelf->top__DOT__b2seg5__DOT__chars[11]),7);
        tracep->fullCData(oldp+369,(vlSelf->top__DOT__b2seg5__DOT__chars[12]),7);
        tracep->fullCData(oldp+370,(vlSelf->top__DOT__b2seg5__DOT__chars[13]),7);
        tracep->fullCData(oldp+371,(vlSelf->top__DOT__b2seg5__DOT__chars[14]),7);
        tracep->fullCData(oldp+372,(vlSelf->top__DOT__b2seg5__DOT__chars[15]),7);
        tracep->fullCData(oldp+373,(vlSelf->top__DOT__b2seg5__DOT__chars
                                    [0U]),7);
        tracep->fullWData(oldp+374,(vlSelf->top__DOT__b2seg5__DOT____Vcellinp__i0____pinNumber4),176);
        tracep->fullSData(oldp+380,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[0]),11);
        tracep->fullSData(oldp+381,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[1]),11);
        tracep->fullSData(oldp+382,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[2]),11);
        tracep->fullSData(oldp+383,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[3]),11);
        tracep->fullSData(oldp+384,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[4]),11);
        tracep->fullSData(oldp+385,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[5]),11);
        tracep->fullSData(oldp+386,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[6]),11);
        tracep->fullSData(oldp+387,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[7]),11);
        tracep->fullSData(oldp+388,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[8]),11);
        tracep->fullSData(oldp+389,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[9]),11);
        tracep->fullSData(oldp+390,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[10]),11);
        tracep->fullSData(oldp+391,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[11]),11);
        tracep->fullSData(oldp+392,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[12]),11);
        tracep->fullSData(oldp+393,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[13]),11);
        tracep->fullSData(oldp+394,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[14]),11);
        tracep->fullSData(oldp+395,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__pair_list[15]),11);
        tracep->fullCData(oldp+396,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+397,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+398,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[2]),4);
        tracep->fullCData(oldp+399,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[3]),4);
        tracep->fullCData(oldp+400,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[4]),4);
        tracep->fullCData(oldp+401,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[5]),4);
        tracep->fullCData(oldp+402,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[6]),4);
        tracep->fullCData(oldp+403,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[7]),4);
        tracep->fullCData(oldp+404,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[8]),4);
        tracep->fullCData(oldp+405,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[9]),4);
        tracep->fullCData(oldp+406,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[10]),4);
        tracep->fullCData(oldp+407,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[11]),4);
        tracep->fullCData(oldp+408,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[12]),4);
        tracep->fullCData(oldp+409,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[13]),4);
        tracep->fullCData(oldp+410,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[14]),4);
        tracep->fullCData(oldp+411,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__key_list[15]),4);
        tracep->fullCData(oldp+412,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[0]),7);
        tracep->fullCData(oldp+413,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[1]),7);
        tracep->fullCData(oldp+414,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[2]),7);
        tracep->fullCData(oldp+415,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[3]),7);
        tracep->fullCData(oldp+416,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[4]),7);
        tracep->fullCData(oldp+417,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[5]),7);
        tracep->fullCData(oldp+418,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[6]),7);
        tracep->fullCData(oldp+419,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[7]),7);
        tracep->fullCData(oldp+420,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[8]),7);
        tracep->fullCData(oldp+421,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[9]),7);
        tracep->fullCData(oldp+422,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[10]),7);
        tracep->fullCData(oldp+423,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[11]),7);
        tracep->fullCData(oldp+424,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[12]),7);
        tracep->fullCData(oldp+425,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[13]),7);
        tracep->fullCData(oldp+426,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[14]),7);
        tracep->fullCData(oldp+427,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__data_list[15]),7);
        tracep->fullCData(oldp+428,(vlSelf->top__DOT__count),8);
        tracep->fullSData(oldp+429,(vlSelf->top__DOT__pkb__DOT__buffer),10);
        tracep->fullCData(oldp+430,(vlSelf->top__DOT__pkb__DOT__fifo[0]),8);
        tracep->fullCData(oldp+431,(vlSelf->top__DOT__pkb__DOT__fifo[1]),8);
        tracep->fullCData(oldp+432,(vlSelf->top__DOT__pkb__DOT__fifo[2]),8);
        tracep->fullCData(oldp+433,(vlSelf->top__DOT__pkb__DOT__fifo[3]),8);
        tracep->fullCData(oldp+434,(vlSelf->top__DOT__pkb__DOT__fifo[4]),8);
        tracep->fullCData(oldp+435,(vlSelf->top__DOT__pkb__DOT__fifo[5]),8);
        tracep->fullCData(oldp+436,(vlSelf->top__DOT__pkb__DOT__fifo[6]),8);
        tracep->fullCData(oldp+437,(vlSelf->top__DOT__pkb__DOT__fifo[7]),8);
        tracep->fullCData(oldp+438,(vlSelf->top__DOT__pkb__DOT__w_ptr),3);
        tracep->fullCData(oldp+439,(vlSelf->top__DOT__pkb__DOT__r_ptr),3);
        tracep->fullCData(oldp+440,(vlSelf->top__DOT__pkb__DOT__count),4);
        tracep->fullCData(oldp+441,(vlSelf->top__DOT__pkb__DOT__ps2_clk_sync),3);
        tracep->fullBit(oldp+442,((IData)((4U == (6U 
                                                  & (IData)(vlSelf->top__DOT__pkb__DOT__ps2_clk_sync))))));
        tracep->fullCData(oldp+443,(vlSelf->top__DOT__vram__DOT__oldaddr),8);
        tracep->fullCData(oldp+444,(vlSelf->top__DOT____Vcellout__b2seg0__seg_out),7);
        tracep->fullCData(oldp+445,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__lut_out),7);
        tracep->fullBit(oldp+446,(vlSelf->top__DOT__b2seg0__DOT__i0__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+447,(vlSelf->top__DOT____Vcellout__b2seg1__seg_out),7);
        tracep->fullCData(oldp+448,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__lut_out),7);
        tracep->fullBit(oldp+449,(vlSelf->top__DOT__b2seg1__DOT__i0__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+450,(vlSelf->top__DOT____Vcellout__b2seg2__seg_out),7);
        tracep->fullCData(oldp+451,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__lut_out),7);
        tracep->fullBit(oldp+452,(vlSelf->top__DOT__b2seg2__DOT__i0__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+453,(vlSelf->top__DOT____Vcellout__b2seg3__seg_out),7);
        tracep->fullCData(oldp+454,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__lut_out),7);
        tracep->fullBit(oldp+455,(vlSelf->top__DOT__b2seg3__DOT__i0__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+456,((0xfU & (IData)(vlSelf->top__DOT__count))),4);
        tracep->fullCData(oldp+457,(vlSelf->top__DOT____Vcellout__b2seg4__seg_out),7);
        tracep->fullCData(oldp+458,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__lut_out),7);
        tracep->fullBit(oldp+459,(vlSelf->top__DOT__b2seg4__DOT__i0__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+460,((0xfU & ((IData)(vlSelf->top__DOT__count) 
                                             >> 4U))),4);
        tracep->fullCData(oldp+461,(vlSelf->top__DOT____Vcellout__b2seg5__seg_out),7);
        tracep->fullCData(oldp+462,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__lut_out),7);
        tracep->fullBit(oldp+463,(vlSelf->top__DOT__b2seg5__DOT__i0__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+464,(vlSelf->top__DOT__vgac__DOT__h_count_n),5);
        tracep->fullCData(oldp+465,(vlSelf->top__DOT__vgac__DOT__v_count_n),7);
        tracep->fullCData(oldp+466,(vlSelf->top__DOT__vgac__DOT__y_ascii),4);
        tracep->fullCData(oldp+467,(vlSelf->top__DOT__vgac__DOT__x_ascii),4);
        tracep->fullSData(oldp+468,((((0x90U < (IData)(vlSelf->top__DOT__vgac__DOT__x_cnt)) 
                                      & (0x310U >= (IData)(vlSelf->top__DOT__vgac__DOT__x_cnt)))
                                      ? (0x3ffU & ((IData)(vlSelf->top__DOT__vgac__DOT__x_cnt) 
                                                   - (IData)(0x91U)))
                                      : 0U)),10);
        tracep->fullSData(oldp+469,((((0x23U < (IData)(vlSelf->top__DOT__vgac__DOT__y_cnt)) 
                                      & (0x203U >= (IData)(vlSelf->top__DOT__vgac__DOT__y_cnt)))
                                      ? (0x3ffU & ((IData)(vlSelf->top__DOT__vgac__DOT__y_cnt) 
                                                   - (IData)(0x24U)))
                                      : 0U)),10);
        tracep->fullSData(oldp+470,(vlSelf->top__DOT__vgac__DOT__x_cnt),10);
        tracep->fullSData(oldp+471,(vlSelf->top__DOT__vgac__DOT__y_cnt),10);
        tracep->fullBit(oldp+472,(((0x90U < (IData)(vlSelf->top__DOT__vgac__DOT__x_cnt)) 
                                   & (0x310U >= (IData)(vlSelf->top__DOT__vgac__DOT__x_cnt)))));
        tracep->fullBit(oldp+473,(((0x23U < (IData)(vlSelf->top__DOT__vgac__DOT__y_cnt)) 
                                   & (0x203U >= (IData)(vlSelf->top__DOT__vgac__DOT__y_cnt)))));
        tracep->fullBit(oldp+474,(vlSelf->clk));
        tracep->fullBit(oldp+475,(vlSelf->rst));
        tracep->fullBit(oldp+476,(vlSelf->clrn));
        tracep->fullBit(oldp+477,(vlSelf->ps2_clk));
        tracep->fullBit(oldp+478,(vlSelf->ps2_data));
        tracep->fullBit(oldp+479,(vlSelf->we));
        tracep->fullCData(oldp+480,(vlSelf->din),8);
        tracep->fullSData(oldp+481,(vlSelf->sw),16);
        tracep->fullCData(oldp+482,(vlSelf->btn),4);
        tracep->fullCData(oldp+483,(vlSelf->scancode),8);
        tracep->fullCData(oldp+484,(vlSelf->asciicode),8);
        tracep->fullBit(oldp+485,(vlSelf->ready));
        tracep->fullBit(oldp+486,(vlSelf->overflow));
        tracep->fullBit(oldp+487,(vlSelf->VGA_CLK));
        tracep->fullBit(oldp+488,(vlSelf->VGA_HSYNC));
        tracep->fullBit(oldp+489,(vlSelf->VGA_VSYNC));
        tracep->fullBit(oldp+490,(vlSelf->VGA_VALID));
        tracep->fullCData(oldp+491,(vlSelf->VGA_R),8);
        tracep->fullCData(oldp+492,(vlSelf->VGA_G),8);
        tracep->fullCData(oldp+493,(vlSelf->VGA_B),8);
        tracep->fullCData(oldp+494,(vlSelf->out),4);
        tracep->fullSData(oldp+495,(vlSelf->led),16);
        tracep->fullCData(oldp+496,(vlSelf->HEX0),8);
        tracep->fullCData(oldp+497,(vlSelf->HEX1),8);
        tracep->fullCData(oldp+498,(vlSelf->HEX2),8);
        tracep->fullCData(oldp+499,(vlSelf->HEX3),8);
        tracep->fullCData(oldp+500,(vlSelf->HEX4),8);
        tracep->fullCData(oldp+501,(vlSelf->HEX5),8);
        tracep->fullCData(oldp+502,(vlSelf->top__DOT__vram__DOT__key_ram
                                    [(((IData)(vlSelf->top__DOT__vgac__DOT__h_count_n) 
                                       << 7U) | (IData)(vlSelf->top__DOT__vgac__DOT__v_count_n))]),8);
        tracep->fullIData(oldp+503,(vlSelf->top__DOT__vga_data),24);
        tracep->fullBit(oldp+504,((1U & (~ (IData)(vlSelf->rst)))));
        tracep->fullCData(oldp+505,((0xfU & (IData)(vlSelf->scancode))),4);
        tracep->fullCData(oldp+506,((0xfU & ((IData)(vlSelf->scancode) 
                                             >> 4U))),4);
        tracep->fullCData(oldp+507,((0xfU & (IData)(vlSelf->asciicode))),4);
        tracep->fullCData(oldp+508,((0xfU & ((IData)(vlSelf->asciicode) 
                                             >> 4U))),4);
        tracep->fullSData(oldp+509,(vlSelf->top__DOT__asci2dot0__DOT__y_dot),12);
        tracep->fullIData(oldp+510,(0x10U),32);
        tracep->fullIData(oldp+511,(4U),32);
        tracep->fullIData(oldp+512,(7U),32);
        tracep->fullIData(oldp+513,(1U),32);
        tracep->fullIData(oldp+514,(0xbU),32);
        tracep->fullIData(oldp+515,(0x10U),32);
        tracep->fullIData(oldp+516,(0x60U),32);
        tracep->fullIData(oldp+517,(0x90U),32);
        tracep->fullIData(oldp+518,(0x310U),32);
        tracep->fullIData(oldp+519,(0x320U),32);
        tracep->fullIData(oldp+520,(2U),32);
        tracep->fullIData(oldp+521,(0x23U),32);
        tracep->fullIData(oldp+522,(0x203U),32);
        tracep->fullIData(oldp+523,(0x20dU),32);
    }
}
