module alu (
    input [3:0] A,
    input [3:0] B,
    input [2:0] btn,
    output Carry,
    output Zero,
    output Overflow,
    output [3:0] Result,
    output [3:0] out
);
wire Cin = (btn == 3'b001) || (btn == 3'b110) || (btn == 3'b111);
reg [3:0] t_no_Cin;
wire [3:0] notA = ~A;
wire [3:0] AandB = A&B;
wire [3:0] AorB = A|B;
wire [3:0] AxorB = A^B;
reg [3:0] less;
assign Zero = ~(| Result);
assign t_no_Cin ={4{Cin}}^B;  //  在这里请注意^运算和+运算的顺序
assign { Carry, Result } = A + t_no_Cin + {3'b0,Cin};
assign Overflow = (A[3] == t_no_Cin[3]) && (Result [3] != A[3]);
assign less = {3'b000,{Overflow ^ Result[3]}};
MuxKey #(8,3,4) i0 (
    out,btn,{
        3'b000,Result,
        3'b001,Result,
        3'b010,notA,
        3'b011,AandB,
        3'b100,AorB,
        3'b101,AxorB,
        3'b110,less,
        3'b111,{3'b000,Zero}
    });
endmodule