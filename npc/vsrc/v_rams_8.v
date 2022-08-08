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
    reg [11:0] all_cnt;
    reg [11:0] line_cnt;
    reg [11:0] key_addr;
    initial
    begin
        oldaddr = 8'hFF;
        all_cnt = 12'h0;
        line_cnt = 12'h0;
        key_addr = 12'h0;
        $readmemh("include/scancode.hex", ram);
        $readmemh("include/keyin.hex",key_ram);
    end

    always @(posedge clk)
    begin
        if (we && oldaddr!=inaddr)begin
            all_cnt += 1;
            if((all_cnt % 12'd70) == 12'd0)begin
                line_cnt = line_cnt + 1;
            end
            else line_cnt = line_cnt;
            key_addr = 12'h080 * (12'h1 + line_cnt) + all_cnt - 12'd70 * line_cnt;
            key_ram[key_addr] = ram[din];
            oldaddr = inaddr;
            $display("key_ram[%h]:%h",key_addr,key_ram[key_addr]);
        end
        else
            dout <= ram[outaddr];
            
    end
    assign key_data = key_ram[{h_count, v_count}];

endmodule