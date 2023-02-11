module InstrMemory #(ADDR_WIDTH = 1, DATA_WIDTH = 1)(
    input clk,
    input [DATA_WIDTH-1:0] wdata,
    input [ADDR_WIDTH-1:0] waddr,
    input wen,
    input [ADDR_WIDTH-1:0] raddr, 
    output [DATA_WIDTH-1:0] rdata
);
    reg [DATA_WIDTH-1:0] mem [8'hff:0];
    
    always @(posedge clk) begin
    if (wen) mem[waddr] <= wdata;
    end

    assign rdata = mem[raddr];
    initial begin
        $readmemh("../include/inst_mem.hex", mem);
    end

endmodule