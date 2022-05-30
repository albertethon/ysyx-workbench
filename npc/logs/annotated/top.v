	// verilator_coverage annotation
	module top(
%000007	  input a,
%000004	  input b,
%000005	  output f
	);
	 assign f = a ^ b;
%000002	 initial begin
%000002	    if ($test$plusargs("trace") != 0) begin
%000000	    verilator_coverage: (next point on previous line)

%000001	       $display("[%0t] Tracing to logs/vlt_dump.vcd...\n", $time);
%000001	       $dumpfile("logs/vlt_dump.vcd");
%000001	       $dumpvars();
	    end
%000001	    $display("[%0t] Model running...\n",$time);
%000001	    $finish;
	 end
	endmodule
	
