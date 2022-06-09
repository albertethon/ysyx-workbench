module mux41_2(
    input [4*2-1:0] in,
    input [1:0] key,
    output [1:0] out
);
MuxKeyWithDefault #(4,2,2) i0 (
    out,key,2'b0,{
        2'b00,in[1:0],
        2'b01,in[3:2],
        2'b10,in[5:4],
        2'b11,in[7:6]
    }
);

endmodule