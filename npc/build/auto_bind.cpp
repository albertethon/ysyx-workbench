#include <nvboard.h>
#include "Vtop.h"

void nvboard_bind_all_pins(Vtop* top) {
	nvboard_bind_pin( &top->VGA_HSYNC, BIND_RATE_RT , BIND_DIR_OUT, 1, VGA_HSYNC);
	nvboard_bind_pin( &top->VGA_VSYNC, BIND_RATE_RT , BIND_DIR_OUT, 1, VGA_VSYNC);
	nvboard_bind_pin( &top->VGA_VALID, BIND_RATE_RT , BIND_DIR_OUT, 1, VGA_BLANK_N);
	nvboard_bind_pin( &top->VGA_R, BIND_RATE_RT , BIND_DIR_OUT, 8, VGA_R7, VGA_R6, VGA_R5, VGA_R4, VGA_R3, VGA_R2, VGA_R1, VGA_R0);
	nvboard_bind_pin( &top->VGA_G, BIND_RATE_RT , BIND_DIR_OUT, 8, VGA_G7, VGA_G6, VGA_G5, VGA_G4, VGA_G3, VGA_G2, VGA_G1, VGA_G0);
	nvboard_bind_pin( &top->VGA_B, BIND_RATE_RT , BIND_DIR_OUT, 8, VGA_B7, VGA_B6, VGA_B5, VGA_B4, VGA_B3, VGA_B2, VGA_B1, VGA_B0);
	nvboard_bind_pin( &top->led, BIND_RATE_SCR, BIND_DIR_OUT, 16, LD15, LD14, LD13, LD12, LD11, LD10, LD9, LD8, LD7, LD6, LD5, LD4, LD3, LD2, LD1, LD0);
	nvboard_bind_pin( &top->sw, BIND_RATE_SCR, BIND_DIR_IN , 16, SW15, SW14, SW13, SW12, SW11, SW10, SW9, SW8, SW7, SW6, SW5, SW4, SW3, SW2, SW1, SW0);
	nvboard_bind_pin( &top->HEX0, BIND_RATE_SCR, BIND_DIR_OUT, 8, SEG0A, SEG0B, SEG0C, SEG0D, SEG0E, SEG0F, SEG0G, DEC0P);
	nvboard_bind_pin( &top->HEX1, BIND_RATE_SCR, BIND_DIR_OUT, 8, SEG1A, SEG1B, SEG1C, SEG1D, SEG1E, SEG1F, SEG1G, DEC1P);
	nvboard_bind_pin( &top->HEX2, BIND_RATE_SCR, BIND_DIR_OUT, 8, SEG2A, SEG2B, SEG2C, SEG2D, SEG2E, SEG2F, SEG2G, DEC2P);
	nvboard_bind_pin( &top->HEX3, BIND_RATE_SCR, BIND_DIR_OUT, 8, SEG3A, SEG3B, SEG3C, SEG3D, SEG3E, SEG3F, SEG3G, DEC3P);
	nvboard_bind_pin( &top->HEX4, BIND_RATE_SCR, BIND_DIR_OUT, 8, SEG4A, SEG4B, SEG4C, SEG4D, SEG4E, SEG4F, SEG4G, DEC4P);
	nvboard_bind_pin( &top->HEX5, BIND_RATE_SCR, BIND_DIR_OUT, 8, SEG5A, SEG5B, SEG5C, SEG5D, SEG5E, SEG5F, SEG5G, DEC5P);
	nvboard_bind_pin( &top->btn, BIND_RATE_SCR, BIND_DIR_IN , 4, BTNU, BTNL, BTND, BTNR);
	nvboard_bind_pin( &top->ps2_clk, BIND_RATE_RT , BIND_DIR_IN , 1, PS2_CLK);
	nvboard_bind_pin( &top->ps2_data, BIND_RATE_RT , BIND_DIR_IN , 1, PS2_DAT);
}
