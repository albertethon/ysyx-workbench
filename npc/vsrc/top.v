module top(
   input clk,
   input rst,
   input en,
   input [9:0] sw,
   input [3:0] in_a,
   input [3:0] in_b,
   input [2:0] btn,
   output [3:0] out,
   output [15:0] led,
   output [7:0] HEX0
);

/* light light1(
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
bcd7seg b2seg(
   .bcd_in(led[2:0]),
   .seg_out(HEX0[7:1])
);
assign led[4] = (sw & 10'h0ff)>0?1&sw[8]:0;   
 */

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
endmodule
