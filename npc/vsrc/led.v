module led(
  input [1:0] sw,
  output led
);
  assign led = sw[1] ^ sw[0];
endmodule
