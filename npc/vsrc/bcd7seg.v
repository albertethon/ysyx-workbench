module bcd7seg(
  input  [3:0] bcd_in,
  output reg [6:0] seg_out
);
// detailed implementation ...
reg [6:0] chars[15:0];
assign chars[0] = ~7'b1111110;
assign chars[1] = ~7'b0110000;
assign chars[2] = ~7'b1101101;
assign chars[3] = ~7'b1111001;
assign chars[4] = ~7'b0110011;
assign chars[5] = ~7'b1011011;
assign chars[6] = ~7'b1011111;
assign chars[7] = ~7'b1110000;
assign chars[8] = ~7'b1111111;
assign chars[9] = ~7'b1111011;
assign chars[10] = ~7'b1110111;
assign chars[11] = ~7'b0011111;
assign chars[12] = ~7'b1001110;
assign chars[13] = ~7'b0111101;
assign chars[14] = ~7'b1001111;
assign chars[15] = ~7'b1000111;
MuxKeyWithDefault #(16,4,7) i0 (
  seg_out,bcd_in,chars[0],{
    4'd0,chars[0],
    4'd1,chars[1],
    4'd2,chars[2],
    4'd3,chars[3],
    4'd4,chars[4],
    4'd5,chars[5],
    4'd6,chars[6],
    4'd7,chars[7],
    4'h8,chars[8],
    4'h9,chars[9],
    4'ha,chars[10],
    4'hb,chars[11],
    4'hc,chars[12],
    4'hd,chars[13],
    4'he,chars[14],
    4'hf,chars[15]
    });
endmodule