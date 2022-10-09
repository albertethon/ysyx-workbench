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
#include "monitor/sdb/sdb.h"

void init_monitor(int, char *[]);
void am_init_monitor();
void engine_start();
int is_exit_status_bad();

static char buf[65536] = {};

static void test_expr(){
  FILE *fp = fopen("tools/gen-expr/build/input","r");
  assert(fp != NULL);
  word_t result=0;
  word_t test=0;
  bool success=false;
  while(!feof(fp)){
    if(fscanf(fp,"%lu",&result)==EOF)break;
    if(fgets(buf,1024,fp)==NULL)break;
    test = expr(buf,&success);
    if(success){
      Assert(test==result,"not right,rst:%lu\ttest:%lu",result,test);
    }else{
      Assert(0,"can't make token:%s",buf);
    }
  }
  Log("success!!!\n");
  fclose(fp);
}


int main(int argc, char *argv[]) {
  /* Initialize the monitor. */
#ifdef CONFIG_TARGET_AM
  am_init_monitor();
#else
  init_monitor(argc, argv);
#endif

  test_expr();
  return 0;
  /* Start engine. */
  // engine_start();

  // return is_exit_status_bad();

}
