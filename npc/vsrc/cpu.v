module cpu(
    input clk,rst,
    input [31:0] instruction,
    output reg [63:0] pc
);

reg [63:0] tmp_pc;
// reg [31:0] instruction;
//instruction decode
wire [4:0] rs1,rs2,rd;
wire [11:0] imm_I;
wire [6:0] opcode;
wire [6:0] funct7;
wire [2:0] funct3;
//control signal
wire ALUSrc,Mem2Reg,MemRead,MemWrite,RegWrite,Branch;
wire [1:0] ALUOp;
//ALU
wire [3:0] ALUCtrl;
wire Carry,Zero,Overflow;

assign opcode = instruction[6:0];
assign funct3 = instruction[14:12];
assign funct7 = instruction[31:25];
assign rd = instruction[11:7];
assign rs1 = instruction[19:15];
assign rs2 = instruction[24:20];
assign imm_I = instruction[31:20];
always @(posedge clk) begin
    if (instruction==32'h00100073) begin
        $finish;
    end
end

/* 中间值 */
wire [63:0] out_reg[2],in_alu[2];
// reg [63:0] tmp_rd,sgnImm;
wire [63:0] tmp_rd,sgnImm;

assign sgnImm = {{52{imm_I[11]}},imm_I}; //signextended
assign in_alu[0] = out_reg[0];
MuxKey #(2,1,64) i0(
    .out(in_alu[1]),
    .key(ALUSrc),
    .lut({
        1'b0,out_reg[1],
        1'b1,sgnImm})
);

/* PC初始化，并更新 */
initial begin
    tmp_pc = 64'h80000000;
    // pc = 8'h0;
end

always @(posedge clk ) begin
    tmp_pc = tmp_pc + 4;
end
assign pc = tmp_pc;
//instMem:存储指令，根据PC取出指令
/* InstrMemory #(8, 32) instMem (
    .clk(clk),
    .wdata('0),
    .waddr('0),
    .wen('0),
    .raddr(pc),
    .rdata(instruction)); */

//regFile:寄存器堆，存储32个通用寄存器并提供存取接口
RegisterFile #(5, 64) regFile (
    .clk(clk),
    .waddr(rd),
    .wdata(tmp_rd),
    .wen(RegWrite),
    .raddr_1(rs1),
    .raddr_2(rs2),
    .rdata_1(out_reg[0]),
    .rdata_2(out_reg[1])
    );

//控制单元, 根据指令opcode译码得到各信号位
Control control(
    .opcode(opcode),
    .ALUSrc(ALUSrc),
    .Mem2Reg(Mem2Reg),
    .RegWrite(RegWrite),
    .MemRead(MemRead),
    .MemWrite(MemWrite),
    .Branch(Branch),
    .ALUOp(ALUOp)
);

//ALU控制单元，以funct7,funct3与控制单元的输出ALUOp作为输入，输出控制ALU的信号
//与控制单元一起作多级控制
ALUControl aluControl(  
    .ALUOp(ALUOp),
    .funct7(funct7),
    .funct3(funct3),
    .ALUCtrl(ALUCtrl)
);


ALU alu(
    .A(in_alu[0]),
    .B(in_alu[1]),
    .ALUCtrl(ALUCtrl),
    .Carry(Carry),
    .Zero(Zero),
    .Overflow(Overflow),
    .out(tmp_rd)
);


endmodule