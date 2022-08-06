module v_rams_8 (clk, we, inaddr, outaddr, din, dout);
    input clk;
    input we;
    input [7:0] inaddr;
    input [7:0] outaddr;
    input [7:0] din;
    output reg [7:0] dout;

    reg [7:0] ram [8'hFF:0];
    reg [7:0] key_ram [8'hFF:0];
    reg [7:0] oldaddr;
    initial
    begin
        oldaddr = 8'hFF;
        $readmemh("include/scancode.hex", ram);
        $readmemh("include/keyin.hex",key_ram);
    end

    always @(posedge clk)
    begin
        if (we && oldaddr!=inaddr)begin
            key_ram[inaddr] <= ram[din];
            oldaddr = inaddr;
            $display("key_ram[%h]:%h",inaddr,key_ram[inaddr]);
        end
        else
            dout <= ram[outaddr];
            
    end

endmodule