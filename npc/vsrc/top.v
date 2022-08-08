module top(
   input clk,rst,
   input clrn,ps2_clk,ps2_data,
   input we,
   input [7:0] din,
   input [15:0] sw,
   input [3:0] btn,
   output reg [7:0] scancode,
   output reg [7:0] asciicode,
   output ready,overflow,
   output VGA_CLK,
   output VGA_HSYNC,
   output VGA_VSYNC,
   output VGA_VALID,
   output [7:0] VGA_R,
   output [7:0] VGA_G,
   output [7:0] VGA_B,
   output [3:0] out,
   output [15:0] led,
   output [7:0] HEX0,
   output [7:0] HEX1,
   output [7:0] HEX2,
   output [7:0] HEX3,
   output [7:0] HEX4,
   output [7:0] HEX5
);
reg sigwe;

reg [7:0] count;
reg [7:0] ch_asci_data;//字符ascii码
reg [4:0] h_count;//字符位置
reg [6:0] v_count;
reg [3:0] h_ascii;//字符内行列地址
reg [3:0] v_ascii;
wire [9:0] h_addr;//vga点位
wire [9:0] v_addr;
wire [23:0] vga_data;

initial begin
   count = 0;
   sigwe = 0;
end
assign VGA_CLK = clk;
assign led[1]=ready;
assign led[0]=overflow;

// 读取键盘输入流并输出scancode
ps2_keyboard pkb(
   clk,~rst,ps2_clk,ps2_data,scancode,
   ready,overflow,count         
);
// 读取scancode并输出对应asciicode
// 输入行列信息，输出对应的字符ascii码
v_rams_8 vram(
   .clk(clk),
   .we(ready),
   .h_count(h_count),
   .v_count(v_count),
   .inaddr(count),
   .outaddr(scancode),
   .din(scancode),
   .dout(asciicode),
   .key_data(ch_asci_data)
);
bcd7seg b2seg0(
   .bcd_in(scancode[3:0]),
   .seg_out(HEX0[7:1])
);
bcd7seg b2seg1(
   .bcd_in(scancode[7:4]),
   .seg_out(HEX1[7:1])
);
bcd7seg b2seg2(
   .bcd_in(asciicode[3:0]),
   .seg_out(HEX2[7:1])
);
bcd7seg b2seg3(
   .bcd_in(asciicode[7:4]),
   .seg_out(HEX3[7:1])
);
bcd7seg b2seg4(
   .bcd_in(count[3:0]),
   .seg_out(HEX4[7:1])
);
bcd7seg b2seg5(
   .bcd_in(count[7:4]),
   .seg_out(HEX5[7:1])
);


asci2dot asci2dot0(
   .asci_data(ch_asci_data),
   .h_ascii(h_ascii),
   .v_ascii(v_ascii),
   .vga_data(vga_data)
);

vga_ctrl vgac(
   .pclk(VGA_CLK),
   .reset(rst),
   .vga_data(vga_data),
   .h_addr(h_addr),
   .v_addr(v_addr),
   .h_count(h_count),
   .v_count(v_count),
   .h_ascii(h_ascii),
   .v_ascii(v_ascii),
   .hsync(VGA_HSYNC),
   .vsync(VGA_VSYNC),
   .valid(VGA_VALID),
   .vga_r(VGA_R),
   .vga_g(VGA_G),
   .vga_b(VGA_B)
);

/* 
vmem vm1(
   .h_addr(h_addr),
   .v_addr(v_addr[8:0]),
   .vga_data(vga_data)
);
alu alu1(
   .A(in_a),
   .B(in_b),
   .btn(btn),
   .Carry(),
   .Zero(),
   .Overflow(),
   .Result(),
   .out(out)
);
light light1(
   .clk(clk),
   .rst(rst),
   .led(led[15:8])
);
mux41_2 mux41_2test(
   .in(sw[9:2]),
   .key(sw[1:0]),
   .out(led[7:6])
); 
encode83 ec83(
   .x(sw[7:0]),
   .en(sw[8]),
   .y(led[2:0])
);

assign led[4] = (sw & 10'h0ff)>0?1&sw[8]:0;   
 */


endmodule
// 根据ascii码与字符内行内信息得到点阵
module asci2dot(
   input [7:0] asci_data,
   input [3:0] h_ascii,
   input [3:0] v_ascii,
   output [23:0] vga_data
);

reg [11:0] y_dot;
reg [8:0] lattice [4095:0];
initial begin
   y_dot = 0;
   $readmemh("include/vga_font.hex", lattice);
end
   assign y_dot = ({4'd0,asci_data} << 4) + {8'd0,h_ascii};
   assign vga_data = (lattice[y_dot][v_ascii]==1)?24'hFFFFFF:24'h000000;

endmodule