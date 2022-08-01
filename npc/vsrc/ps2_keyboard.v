module ps2_keyboard(clk,clrn,ps2_clk,ps2_data,data,
                    ready,overflow,cnt);
    input clk,clrn,ps2_clk,ps2_data;
    output reg [7:0] data;
    output reg [7:0] cnt;
    output reg ready;
    output reg overflow;     // fifo overflow
    // internal signal, for test
    reg [9:0] buffer;        // ps2_data bits
    reg [7:0] fifo[7:0];     // data fifo
    reg [2:0] w_ptr,r_ptr;   // fifo write and read pointers
    reg [3:0] count;  // count ps2_data bits
    // detect falling edge of ps2_clk
    reg [2:0] ps2_clk_sync;
    initial begin
        cnt=0;
    end
    always @(posedge clk) begin
        ps2_clk_sync <=  {ps2_clk_sync[1:0],ps2_clk};
    end

    wire sampling = ps2_clk_sync[2] & ~ps2_clk_sync[1];

    always @(posedge clk) begin
        if (clrn == 0) begin // reset
            count <= 0; w_ptr = 0; r_ptr <= 0; overflow <= 0; ready<= 0;cnt<=0;
        end
        else begin
            if (ready) begin // read to output next data
                if(w_ptr==r_ptr+1'b1)begin //empty
                    ready <= 1'b0;
                    $display("fifo[r_ptr]:%h",fifo[r_ptr]);
                end
                data <= fifo[r_ptr];
                r_ptr <= r_ptr+1'b1;
                // if(fifo[r_ptr]==8'hf0)cnt <= cnt+1;
                if(fifo[r_ptr]!=8'hf0 || fifo[r_ptr-1]!=8'hf0)cnt <= cnt+1;//接受连续同字输出
            end
            if (sampling) begin
                if (count == 4'd10) begin
                if ((buffer[0] == 0) &&  // start bit
                    (ps2_data)       &&  // stop bit
                    (^buffer[9:1])) begin      // odd  parity
                    fifo[w_ptr] = buffer[8:1];  // kbd scan code
                    w_ptr = w_ptr+3'b1;
                    ready <= 1'b1;
                    overflow <= overflow | (r_ptr == (w_ptr + 3'b1));
                    end else begin
                        $display("failed"); 
                    end
                count <= 0;     // for next
                end else begin
                buffer[count] <= ps2_data;  // store ps2_data
                count <= count + 3'b1;
                end
            end
        end
    end

endmodule