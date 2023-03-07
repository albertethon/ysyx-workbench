## PA2

## 疑问

为什么pattern_decode用宏函数展开而不是循环来做
如果是64位是不是不用在BITS外面套SEXT了
## 收获
riscv中文手册的jalr功能码写错了应该是000
c 的结构体{n:len}可以指定位域，某个变量只占用len位
对立即数的译码需要先分别提取各个位进行与操作，最后进行符号扩展，否则会得到错误的立即数地址

### 译码

代码中的&&__instpat_end_使用了GCC提供的标签地址扩展功能

```cpp
const void ** __instpat_end = &&__instpat_end_;
//TODO:不懂这里为什么要两个*, 查手册void *ptr=&&lable1; 就能满足需求
```

### 立即数背后的故事:

在Motorola 68k运行NEMU或者在NEMU上实现Motorola ISA,都会导致字节序顺序不同造成存储数据的不同，应该写一个转换器转换存入内存的字节序。（转换器包含以栈的方式将内存数据分两字节从低到高写入栈，再从栈中读取输出）

### 立即数背后故事2

mips32和riscv32的指令长度只有32位, 因此它们不能像x86那样, 把C代码中的32位常数直接编码到一条指令中. 思考一下, mips32和riscv32应该如何解决这个问题?
> 分两条指令分别读取32位常数的高位和地位，再加在一起

### RTFSC理解指令执行过程

整理一条指令在NEMU执行过程:auipc t0,0

execute函数循环执行exec_once, 在exec_once中,首先更新s->pc和snpc为参数pc。
**取指令:**

1. isa_exec_once函数给inst_fetch传入pc值取指令(长度为4B，32b)
2. pc指向指令存于内存中, 将pc值转换为实际地址返回对应长度指令存入inst.val
3. 更新s->snpc

**译码:**

1. 将s->dnpc更新为s->snpc
2. 将s的指令值inst.val与ISA做比较(ISA解析每条指令得到key,mask,shift)

**执行**

1. 匹配后执行对应动作，传入操作数
2. 归零 $0
3. 更新cpu.pc为s->dnpc

通过的指令

add
auipc
addi
bne
beqz
ebreak
jal
li
ld
mv
ret
sd
sub
seqz
or
srai
lbu
and
andi
not
snez
sllw
sb
sh
j
sext.w
slli
srli
sw
bge
mul
mulw
div
divw


