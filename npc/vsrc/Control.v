module Control(
    input [6:0] opcode,
    output ALUSrc,
    output Mem2Reg,
    output RegWrite,
    output MemRead,
    output MemWrite,
    output Branch,
    output reg [1:0] ALUOp
);

reg [7:0] out;
assign {ALUSrc,Mem2Reg,RegWrite,MemRead,MemWrite,Branch,ALUOp} = out;
always @(*) begin
    case (opcode)
        7'b000_0011: out = 8'b1111_0000;//ld
        7'b001_0011: out = 8'b1010_0000;//addi
        7'b010_0011: out = 8'b1x00_1000;//sd
        7'b011_0011: out = 8'b0010_0010;//R-type
        7'b110_0011: out = 8'b0x00_0101;//beq
        default: out = 8'h00;
    endcase
end
endmodule