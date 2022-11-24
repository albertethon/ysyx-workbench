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

#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"
#include <memory/paddr.h>

static int is_batch_mode = false;

void init_regex();
void init_wp_pool();

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}


static int cmd_q(char *args) {
  nemu_state.state = NEMU_QUIT;
  return -1;
}

static int cmd_si(char *args){
  if (args != NULL)
  {
    uint64_t cnt;
    /* 解析参数是否为unsigned long int */
    Assert(sscanf(args,"%lu",&cnt)==1,"%s not recgonized,please input numbers",args);
    cpu_exec(cnt);
  }else{
    cpu_exec(1);
  }
  
  return 0;
} 

static int cmd_x(char *args){
  paddr_t paddr;
  int len;

  char tempval[20];

  Assert(sscanf(args,"%d%s",&len,tempval)==2,"%s not recgonized, type 'help x' to check",args);
  // Assert(sscanf(args,"%d%x",&len,&paddr)==2,"%s not recgonized, type 'help x' to check",args);

  bool success=false;
  word_t expr_val = expr(tempval,&success);
  printf("val:\t0x%lx\t%lu\n",expr_val,expr_val);

  paddr = (word_t)expr_val;

  for (paddr_t i = 0; i < len; i++)
  {
    // printf("0x%-10x\t0x%08lx\n",paddr+4*i,paddr_read(paddr+4*i,4));
    printf("0x%-10x\t0x%-8lx\n",paddr+4*i,paddr_read(paddr+4*i,4));
  }
  
  return 0;
}

static int cmd_info(char *args);
static int cmd_help(char *args);
static int cmd_p(char *args){
  bool success=false;
  word_t expr_val = expr(args,&success);
  printf("val:\t0x%lx\t%lu\n",expr_val,expr_val);
  return 0;
}
static int cmd_d(char *args){
  delete_wp(args);
  return 0;
}
static int cmd_w(char *args){
  add_wp(args);
  return 0;
}

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display informations about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  { "si", "si [N] \n\t"\
            "Execute N instructions, N defaults to 1", cmd_si},
  { "info", "info SUBCMD\n\t"\
            "print the process status, SUBCMD and its description are as follows\n\t"\
            "r\tprint the register status\n\t"\
            "w\tprint the watchpoint status\n\t", cmd_info},
  { "x", "Examine memory: x N HEXADDR\n\t"\
          "N is the count of displayed address\n\t"\
          "HEXADDR are memory address in hex format\n\t"\
          "EXAMPLE:\t x 10 0x80000000",cmd_x},
  { "p", "p [EXPR] to find the sum of EXPR",cmd_p},
  { "w", "w [EXPR] to set watchpoint towards EXPR,",cmd_w},
  { "d", "d [N] to delete No.N watchpoint",cmd_d},
};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

static int cmd_info(char *args){
  if(args==NULL){
    printf("no argument detected, type \"help info\" to get help\n");
  }else{
    if(strcmp(args,"r")==0){
      isa_reg_display();
    }else if (strcmp(args,"w")==0){
      display_wp();
    }
    else {
      printf("%s not supported\n",args);
    }
  }
  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
