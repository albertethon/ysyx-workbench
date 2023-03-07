/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <common.h>
#include <string.h>
#include <elf.h>
extern uint64_t g_nr_guest_inst;
FILE *log_fp = NULL;
// ----------- elf -------------
/** function about elf and realized in log.c */
inline void swap(Elf64_Sym *a,Elf64_Sym *b);
int partition(Elf64_Sym a[],int i,int j);
void read_shdr(Elf64_Shdr shdr);
void read_sym(Elf64_Sym sym);
char* find_name(Elf64_Shdr shstr,Elf64_Word nameoff);
void init_hdr();
int getFunc(Elf64_Sym** functabs);
void quickSort(Elf64_Sym a[],int i,int j);
int insertionSearch(Elf64_Sym nums[],Elf64_Addr target,int len);
char* ftrace(word_t addr);
FILE *mtrace_fp = NULL;
FILE *ftrace_fpw = NULL;
FILE *ftrace_fpr = NULL;
FILE *ftmp = NULL;
Elf64_Ehdr ehdr;      //elf header
Elf64_Shdr shdr;      //section header
Elf64_Shdr shstrtab;  //section name string table header
Elf64_Shdr strtab;    //string table header
Elf64_Shdr symtab;    //sym table header
Elf64_Sym *functabs;  //functions in symbol table
int function_nums;

void init_log(const char *log_file) {
  log_fp = stdout;
  if (log_file != NULL) {
    FILE *fp = fopen(log_file, "w");
    Assert(fp, "Can not open '%s'", log_file);
    log_fp = fp;
  }
  Log("Log is written to %s", log_file ? log_file : "stdout");
}

void init_mtrace(const char *mtrace_file) {
  #ifndef CONFIG_MTRACE
    Log("Mtrace turned off\n");
    return ;
  #endif
  if (mtrace_file != NULL) {
    FILE *fp = fopen(mtrace_file,"w");
    Assert(fp, "Can not open '%s'", mtrace_file);
    mtrace_fp = fp;
    IFDEF(CONFIG_MTRACE,mtrace_write("r/w\t\taddr\t\tlen\tdata\n"));
  }  
}
/** check if it's an '.elf' file and write result in *-ftrace.txt
 * 
*/
void init_ftrace(const char *ftrace_file) {
  #ifndef CONFIG_FTRACE
    Log("ftrace turned off\n");
    return ;
  #endif
  if (ftrace_file != NULL) {
    //check suffix and generate out file
    char *suffix = strrchr(ftrace_file,'.');
    Assert(strcasecmp(suffix,".elf")==0,"Can't ftrace %s",ftrace_file);
    int len = strlen(ftrace_file);
    char *ftrace_out = (char *)malloc(sizeof(char) * (len+8));
    strncpy(ftrace_out,ftrace_file,len-4);
    ftrace_out[len-4]=0;
    strcat(ftrace_out,"ftr.txt");

    FILE *fpw = fopen(ftrace_out, "w");
    FILE *fpr = fopen(ftrace_file,"r");
        ftmp = fopen(ftrace_file,"r");
    Assert(fpw!=NULL, "Can not open '%s'", ftrace_out);
    Assert(fpr!=NULL, "Can not open '%s'", ftrace_file);
    ftrace_fpw = fpw;
    ftrace_fpr = fpr;
    Log("ftrace is written to %s", ftrace_out);
    free(ftrace_out);
    
    init_hdr();
    function_nums = getFunc(&functabs);

  }else{
    Log("ftrace file is null");
  }
}

char* ftrace(word_t addr){
    int id = insertionSearch(functabs, addr, function_nums);
    char *func_name=NULL;
    if (id >= 0)
        func_name = find_name(strtab, functabs[id].st_name);
    return func_name;
}

bool log_enable() {
  return MUXDEF(CONFIG_TRACE, (g_nr_guest_inst >= CONFIG_TRACE_START) &&
         (g_nr_guest_inst <= CONFIG_TRACE_END), false);
}

void init_hdr(){
    int rsucceed;
    rsucceed = fread(&ehdr,sizeof(Elf64_Ehdr),1,ftrace_fpr);
    Assert(rsucceed,"can't read ehdr failed\n");
    //init shstrtab
    rsucceed = fseek(ftrace_fpr,ehdr.e_shoff+ehdr.e_shentsize*ehdr.e_shstrndx,SEEK_SET);
    Assert(rsucceed!=-1,"can't seek shstrndx\n");
    rsucceed = fread(&shstrtab,sizeof(shstrtab),1,ftrace_fpr);
    Assert(rsucceed,"can't read shstrab \n");

    //init strtab and symtab
    for (int i = 0; i < ehdr.e_shnum; i++)
    {
        /** find strtab and symtab*/
        fseek(ftrace_fpr,ehdr.e_shoff+ehdr.e_shentsize*i,SEEK_SET);
        rsucceed = fread(&shdr,sizeof(shdr),1,ftrace_fpr);
        Assert(rsucceed,"can't read section header entry\n");
        // read_shdr(shdr);
        if(strcmp(".strtab",find_name(shstrtab,shdr.sh_name))==0){
            strtab = shdr;
        }
        if(shdr.sh_type==SHT_SYMTAB){
            symtab = shdr;
        }
    }
}

/**random quicksort*/
void quickSort(Elf64_Sym a[],int i,int j){
    if(i>=j)return ;
    int m = partition(a,i,j);
    quickSort(a,i,m-1);
    quickSort(a,m+1,j);
}

/**return m, set num in m's left if less ,else right*/
int partition(Elf64_Sym a[],int i,int j){
    //chose a random pivot
    int rand_k = rand()%(j-i) + i;
    swap(&a[rand_k],&a[i]);
    Elf64_Sym p = a[i];
    int m = i;
    //m为分节点
    for (int k = i+1; k <= j; k++)
    {
        if(a[k].st_value < p.st_value){//小左大右
            m++;
            swap(&a[k],&a[m]);
        }
    }
    swap(&a[m],&a[i]);
    return m;
}

inline void swap(Elf64_Sym *a,Elf64_Sym *b){
    Elf64_Sym t = *a;
    *a = *b;
    *b = t;
}

int getFunc(Elf64_Sym** functabs){
    Elf64_Sym symentry;
    fseek(ftrace_fpr,symtab.sh_offset+symtab.sh_addr,SEEK_SET);
    int symnum=symtab.sh_size/sizeof(Elf64_Sym);
    int funcnum=0,func_len=0;
    int rsucceed=0;
    for(int j=0;j < symnum;j++){
        rsucceed = fread(&symentry,sizeof(symentry),1,ftrace_fpr);
        if(ELF64_ST_TYPE(symentry.st_info)!=STT_FUNC)continue;
        funcnum++;
    }
    *functabs = (Elf64_Sym *)malloc(sizeof(Elf64_Sym) * funcnum);
    fseek(ftrace_fpr,symtab.sh_offset+symtab.sh_addr,SEEK_SET);
    for(int j=0;j < symnum;j++){
        rsucceed = fread(&symentry,sizeof(symentry),1,ftrace_fpr);
        Assert(rsucceed,"read function failed\n");
        if(ELF64_ST_TYPE(symentry.st_info)!=STT_FUNC)continue;
        (*functabs)[func_len++] = symentry;
    }
    quickSort(*functabs,0,funcnum-1);
    return funcnum;
}

/** 插值查询, 二分查找的优化, 返回索引*/
int insertionSearch(Elf64_Sym nums[],Elf64_Addr target,int len){
        int low, high, mid;
        low = 0;
        high = len-1;
        while (low < high)
        {
            if (target > nums[high].st_value){
                if(target >= nums[high].st_value + nums[high].st_size){
                    ftrace_write("address %lx not in function size\n",target);
                    return -1;
                }
                return high;
            }
            if (target < nums[low].st_value){
                if(low>0)return low-1;
                else {
                    ftrace_write("address %lx not in function size\n",target);
                    return -1;
                }
            }
            mid = low + (target - nums[low].st_value) * (high - low) / (nums[high].st_value - nums[low].st_value);
            if (nums[mid].st_value < target)
                low = mid + 1;
            else if (nums[mid].st_value > target)
                high = mid - 1;
            else
                return mid;
        }
        return nums[low].st_value > target ? low-1 : low;
    }

/** return section header's or functions name*/
char* find_name(Elf64_Shdr shdra,Elf64_Word nameoff){
//name
    fseek(ftmp,shdra.sh_offset+shdra.sh_addr+nameoff,SEEK_SET);
    char *shname=(char *)malloc(sizeof(char)*20);
    int rsucceed=0;
    rsucceed = fread(shname,sizeof(char),20,ftmp);
    Assert(rsucceed,"can't find section header name\n");
    return shname;
}

/** read symbol table*/
void read_sym(Elf64_Sym sym){
    //value
    printf("%08lx\t",sym.st_value);
    //size
    printf("%4lx\t",sym.st_size);
    //type
    switch (ELF64_ST_TYPE(sym.st_info))
    {
    case STT_NOTYPE:
        printf("%-12s\t","NOTYPE");break;
    case STT_OBJECT:
        printf("%-12s\t","OBJECT");break;
    case STT_FILE:
        printf("%-12s\t","FILE");break;
    case STT_FUNC:
        printf("%-12s\t","FUNC");break;
    case STT_SECTION:
        printf("%-12s\t","SECTION");break;
    case STT_LOPROC:
        printf("%-12s\t","LOPROC");break;
    case STT_HIPROC:
        printf("%-12s\t","HIPROC");break;
    default:
        printf("%-12s\t","todo");
        break;
    }
    //bind
    switch (ELF64_ST_BIND(sym.st_info))
    {
    case STB_LOCAL:
        printf("%-12s\t","LOCAL");break;
    case STB_GLOBAL:
        printf("%-12s\t","GLOBAL");break;
    case STB_WEAK:
        printf("%-12s\t","WEAK");break;
    case STB_LOPROC:
        printf("%-12s\t","LOPROC");break;
    case STB_HIPROC:
        printf("%-12s\t","HIPROC");break;
    default:
        printf("%-12s\t","todo");break;
    }
    //vis
    switch (ELF64_ST_VISIBILITY(sym.st_other))
    {
    case STV_DEFAULT:
        printf("%-12s\t","DEFAULT");break;
    case STV_INTERNAL:
        printf("%-12s\t","INTERNAL");break;
    case STV_HIDDEN:
        printf("%-12s\t","HIDDEN");break;
    case STV_PROTECTED:
        printf("%-12s\t","PROTECTED");break;
    default:
        printf("%-12s\t","todo");break;
    }
    //Ndx
    printf("%4x\t",sym.st_shndx);
    //name
    char *nm=find_name(strtab,sym.st_name);
    printf("%-12s\t",nm);
    printf("\n");
    free(nm);
}

/** read section header */
void read_shdr(Elf64_Shdr shdr){
    //name
    char *name=find_name(shstrtab,shdr.sh_name);
    printf("%-20s",name);
    free(name);
    //type
    switch (shdr.sh_type)
    {
    case SHT_NULL:
        printf("%-10s","NULL");break;
    case SHT_PROGBITS:
        printf("%-10s","PROGBITS");break;
    case SHT_SYMTAB:
        printf("%-10s","SYMTAB");break;
    case SHT_STRTAB:
        printf("%-10s","STRTAB");break;
    case SHT_RELA:
        printf("%-10s","RELA");break;
    case SHT_HASH:
        printf("%-10s","HASH");break;
    case SHT_DYNAMIC:
        printf("%-10s","DYNAMIC");break;
    case SHT_NOBITS:
        printf("%-10s","NOBITS");break;
    default:
        printf("%-10s","todo");
        break;
    }
    
    printf("%08lx\t",shdr.sh_addr);
    printf("%08lx\t",shdr.sh_offset);
    printf("%08lx",shdr.sh_size);

    printf("\n");
}
