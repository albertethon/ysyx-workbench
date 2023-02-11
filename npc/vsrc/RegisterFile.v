module RegisterFile #(ADDR_WIDTH = 1, DATA_WIDTH = 1) (
  input clk,
  input [DATA_WIDTH-1:0] wdata,
  input [ADDR_WIDTH-1:0] waddr,
  input wen,
  input [ADDR_WIDTH-1:0] raddr_1, 
  input [ADDR_WIDTH-1:0] raddr_2, 
  output [DATA_WIDTH-1:0] rdata_1,
  output [DATA_WIDTH-1:0] rdata_2
);
  reg [DATA_WIDTH-1:0] rf [1<<ADDR_WIDTH];
  assign rf[0] = 'b0;
  assign rdata_1 = rf[raddr_1];
  assign rdata_2 = rf[raddr_2];
  always @(posedge clk) begin
    if (wen) rf[waddr] <= wdata;
  end

endmodule