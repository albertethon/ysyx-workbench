module v_rams_8 (clk, we, h_count, v_count, inaddr, outaddr, din, dout, key_data);
    input clk;
    input we;
    input [7:0] inaddr;
    input [7:0] outaddr;
    input [7:0] din;
    input [4:0] h_count;
    input [6:0] v_count;
    output reg [7:0] key_data;
    output reg [7:0] dout;

    reg [7:0] ram [8'hFF:0];
    reg [7:0] key_ram [4095:0];
    reg [7:0] oldaddr;
    reg [11:0] key_cnt;
    initial
    begin
        oldaddr = 8'hFF;
        $readmemh("include/scancode.hex", ram);
        $readmemh("include/keyin.hex",key_ram);
    end

    always @(posedge clk)
    begin
        key_cnt = 12'h080+{4'h0,inaddr};
        if (we && oldaddr!=inaddr)begin
            key_ram[key_cnt] = ram[din];
            oldaddr = inaddr;
            $display("key_ram[%h]:%h",inaddr,key_ram[key_cnt]);
        end
        else
            dout <= ram[outaddr];
            
    end
    assign key_data = key_ram[{h_count, v_count}];

endmodule