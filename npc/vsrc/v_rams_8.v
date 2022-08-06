module v_rams_8 (clk, we, inaddr, outaddr, din, dout);
    input clk;
    input we;
    input [7:0] inaddr;
    input [7:0] outaddr;
    input [7:0] din;
    output reg [7:0] dout;

    reg [7:0] ram [8'hFF:0];
    reg [7:0] key_ram [8'hFF:0];

    initial
    begin
        $readmemh("include/scancode.hex", ram);
        $readmemh("include/keyin.hex",key_ram);
    end

    always @(posedge clk)
    begin
        if (we)begin
            key_ram[inaddr] <= ram[din];
        end
        else
            dout <= ram[outaddr];
    end

endmodule