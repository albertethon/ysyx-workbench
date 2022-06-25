module v_rams_8 (clk, we, inaddr, outaddr, din, dout);
    input clk;
    input we;
    input [7:0] inaddr;
    input [7:0] outaddr;
    input [7:0] din;
    output reg [7:0] dout;

    reg [7:0] ram [8'hFF:0];

    initial
    begin
        $readmemh("/home/max/szy/ysyx-workbench/npc/include/scancode.txt", ram);
    end

    always @(posedge clk)
    begin
        if (we)begin
            ram[inaddr] <= din;
        end
        else
            dout <= ram[outaddr];
    end

endmodule