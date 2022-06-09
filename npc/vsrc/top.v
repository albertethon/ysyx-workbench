module top(
  input clk,
  input rst,
  input [9:0] sw,
  output [15:0] led
);

 light light1(
    .clk(clk),
    .rst(rst),
    .led(led[15:8])
 );
mux41_2 mux41_2test(
   .in(sw[9:2]),
   .key(sw[1:0]),
   .out(led[1:0])
);
endmodule
