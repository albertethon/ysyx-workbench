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
initial begin
   count = 0;
   sigwe = 0;
end



ps2_keyboard pkb(
   clk,~rst,ps2_clk,ps2_data,scancode,
   ready,overflow,count
);

assign led[1]=ready;
assign led[0]=overflow;

v_rams_8 vram(
   .clk(clk),
   .we(sigwe),
   .inaddr(),
   .outaddr(scancode),
   .din(),
   .dout(asciicode)
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

/* alu alu1(
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
