module vga_ctrl(
    input           pclk,     //25MHz时钟
    input           reset,    //置位
    input  [23:0]   vga_data, //上层模块提供的VGA颜色数据
    output [9:0]    h_addr,   //提供给上层模块的当前扫描像素点坐标
    output [9:0]    v_addr,
    output [4:0]    h_count,  //计算第几个字符
    output [6:0]    v_count,
    output [3:0]    h_ascii,  //计算字符内的行列地址
    output [3:0]    v_ascii,
    output          hsync,    //行同步和列同步信号
    output          vsync,
    output          valid,    //消隐信号
    output [7:0]    vga_r,    //红绿蓝颜色信号
    output [7:0]    vga_g,
    output [7:0]    vga_b
    );

  //640x480分辨率下的VGA参数设置
    parameter    h_frontporch = 96;
    parameter    h_active = 144;
    parameter    h_backporch = 784;
    parameter    h_total = 800;

    parameter    v_frontporch = 2;
    parameter    v_active = 35;
    parameter    v_backporch = 515;
    parameter    v_total = 525;

    //像素计数值
    reg [9:0]    x_cnt;
    reg [9:0]    y_cnt;
    reg [3:0]    x_ascii;
    reg [3:0]    y_ascii;
    reg [4:0]    h_count_n;
    reg [6:0]    v_count_n;
    wire         h_valid;
    wire         v_valid;


    always @(posedge reset or posedge pclk)begin// 800*525信号产生
        if (reset == 1'b1)begin
            y_cnt <= 1;
            x_cnt <= 1;
        end
        else begin
            if (x_cnt == h_total)begin
                x_cnt <= 1;
                if (y_cnt == v_total) begin 
                    y_cnt <= 1;
                end else begin
                    y_cnt <= y_cnt + 1;
                end
            end
            else begin
                x_cnt <= x_cnt + 10'd1;
            end
        end
    end

    always @(posedge reset or posedge pclk)begin//处理640*480信号
        if (reset == 1'b1)begin
            x_ascii <= 0;
            y_ascii <= 0;
            h_count_n <= 0;
            v_count_n <= 0;
        end else begin
            if(x_cnt == h_backporch-10)begin//行有效末尾
                x_ascii <= 0;
                v_count_n <= 0;//v边界重置
                if(y_cnt == v_backporch)begin//列有效末尾
                    y_ascii <= 0;
                    h_count_n <= 0;//h边界重置
                    
                end else begin
                    if(y_ascii == 4'hF && y_cnt > v_active)begin
                        y_ascii <= 0;
                        h_count_n <= h_count_n + 1;
                    end
                    else y_ascii <= y_ascii + 1;
                end
            end
            else if(x_cnt > h_active && x_cnt < h_backporch-10)begin
                if(x_ascii == 4'h8 )begin
                    x_ascii <= 0;
                    v_count_n <= v_count_n + 1;
                end
                else x_ascii <= x_ascii + 1;
            end
        end

    end

    //生成同步信号
    assign hsync = (x_cnt > h_frontporch);
    assign vsync = (y_cnt > v_frontporch);
    //生成消隐信号
    assign h_valid = (x_cnt > h_active) & (x_cnt <= h_backporch);
    assign v_valid = (y_cnt > v_active) & (y_cnt <= v_backporch);
    assign valid = h_valid & v_valid;
    //计算当前有效像素坐标
    assign h_addr = h_valid ? (x_cnt - 10'd145) : {10{1'b0}};
    assign v_addr = v_valid ? (y_cnt - 10'd36) : {10{1'b0}};
    //生成字符x,y坐标
    assign h_count = h_count_n;
    assign v_count = v_count_n;
    //生成字符内行列地址
    assign h_ascii = y_ascii;
    assign v_ascii = x_ascii;
    //设置输出的颜色值
    assign vga_r = vga_data[23:16];
    assign vga_g = vga_data[15:8];
    assign vga_b = vga_data[7:0];
endmodule