module light(
  input clk,
  input rst,
  output reg [7:0] led
);
  reg [15:0] count;
  always @(posedge clk) begin
    if (rst) begin led <= 1; count <= 0; end
    else begin
      if (count == 0) led <= {led[6:0], led[7]};
      count <= (count >= 10000 ? 16'b0 : count + 16'b1);
    end
  end
endmodule
