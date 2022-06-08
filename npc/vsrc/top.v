module top(
  input clk,
  input rst,
  input [1:0] sw,
  output [15:0] led
);

 led led1(
    .sw(sw),
    .led(led[0])
 );
 light light1(
    .clk(clk),
    .rst(rst),
    .led(led[15:8])
 );
endmodule
