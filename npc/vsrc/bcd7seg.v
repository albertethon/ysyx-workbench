module bcd7seg(
  input  [2:0] bcd_in,
  output reg [6:0] seg_out
);
// detailed implementation ...
reg [6:0] chars[7:0];
assign chars[0] = ~7'b1111110;
assign chars[1] = ~7'b0110000;
assign chars[2] = ~7'b1101101;
assign chars[3] = ~7'b1111001;
assign chars[4] = ~7'b0110011;
assign chars[5] = ~7'b1011011;
assign chars[6] = ~7'b1011111;
assign chars[7] = ~7'b1110000;
MuxKeyWithDefault #(8,3,7) i0 (
  seg_out,bcd_in,chars[0],{
    3'd0,chars[0],
    3'd1,chars[1],
    3'd2,chars[2],
    3'd3,chars[3],
    3'd4,chars[4],
    3'd5,chars[5],
    3'd6,chars[6],
    3'd7,chars[7]
  });
endmodule