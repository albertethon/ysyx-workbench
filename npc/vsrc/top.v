module top(
  input clk,
  input rst,
  input [1:0] sw,
  output ledr
);
/**
 assign f = a ^ b;
 initial begin
    if ($test$plusargs("trace") != 0) begin
       $display("[%0t] Tracing to logs/vlt_dump.vcd...\n", $time);
       $dumpfile("logs/vlt_dump.vcd");
       $dumpvars();
    end
    $display("[%0t] Model running...\n",$time);
    $finish;
 end
 **/
 led led1(
    .sw(sw),
    .ledr(ledr)
 );
endmodule
