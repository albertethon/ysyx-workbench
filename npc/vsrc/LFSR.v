module LFSR(
    input clk,
    output reg [7:0] out
);
    reg tmpx;
always @(posedge clk) begin
    out = (out==8'h0)?8'h1:out;
    tmpx = out[4] ^ out[3] ^ out[2] ^ out[0];
    out = {tmpx,out[7:1]};
end
endmodule