module ALU (
    input [63:0] A,
    input [63:0] B,
    input [3:0] ALUCtrl,
    output Carry,
    output Zero,
    output Overflow,
    output [63:0] out
);
/*
ALU行为  ALU控制输入
add     0010
sub     0110
and     0000
or      0001    
*/
reg [63:0] Result;
wire Cin = (ALUCtrl == 4'b0110);
reg [63:0] t_no_Cin;
wire [63:0] notA = ~A;
wire [63:0] AandB = A&B;
wire [63:0] AorB = A|B;
wire [63:0] AxorB = A^B;
reg [63:0] less;
assign Zero = ~(| Result);
assign t_no_Cin ={64{Cin}}^B;  //  在这里请注意^运算和+运算的顺序
assign { Carry, Result } = A + t_no_Cin + {63'b0,Cin};
assign Overflow = (A[63] == t_no_Cin[63]) && (Result [63] != A[63]);//AB符号位相等结果不等,不能加cin
MuxKey #(4,4,64) i0 (
    out,ALUCtrl,{
        4'b0010,Result,
        4'b0110,Result,
        4'b0000,AandB,
        4'b0001,AorB
    });
endmodule