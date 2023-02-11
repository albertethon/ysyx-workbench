module ALUControl(
    input [1:0] ALUOp,
    input [6:0] funct7,
    input [2:0] funct3,
    output reg[3:0] ALUCtrl
    
);

/*
ALU行为  ALU控制输入
add     0010
sub     0110
and     0000
or      0001    
*/
always @(*) begin
    if (ALUOp==2'b0)
        ALUCtrl = 4'b0010;//add
    else if (ALUOp[0]==1'b1)
        ALUCtrl = 4'b0110;//sub
    else if (ALUOp[1]==1'b1)
        case ({funct7,funct3})
            10'b0:ALUCtrl = 4'b0010;//add
            10'b0100_0000_00:ALUCtrl=4'b0110;//sub
            10'b0000_0001_11:ALUCtrl=4'b0000;//and
            10'b0000_0001_10:ALUCtrl=4'b0001;//or
            default: ALUCtrl=4'b0000;
        endcase

end
endmodule