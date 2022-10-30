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

#include "sdb.h"

#define NR_WP 32

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;
  char s[30];
  word_t old_value;
  /* TODO: Add more members if necessary */

} WP;

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;
}

WP* new_wp(){
  if(head == NULL){
    head = free_;
    free_ = free_->next;
    head->next = NULL;
  }else{
    if(free_ == NULL)Assert(0,"watchpoints are too much(<32)\n");
    else{
      WP* temp = head;
      head = free_;
      free_ = free_->next;
      head->next = temp;
    }
  }
  return head;
}

void free_wp(WP *wp){
  WP *cur=head;
  //如果要释放第一个节点
  if(wp->NO == head->NO){
    cur->next = free_;
    free_ = cur;
    head = head->next;
  }else{
    while (cur->next!=NULL)
    {//如果是第n+1个节点
      if(wp->NO == cur->next->NO){
        WP *temp = cur->next;
        cur->next = temp->next;//剪切出来

        temp->next = free_;//放入free_链表头
        free_ = temp;
        break;
      }else{
        cur = cur->next;
      }
    }
    Assert(0,"can't find watchpoint in list\n");
  }
  
}

void scan_wp(){
  WP *cur = head;
  while(cur != NULL){
    bool success=false;
    word_t new_value = expr(cur->s,&success);
    if(success && new_value != cur->old_value){
      cur->old_value = new_value;
      printf("%d\twatchpoint\t%s\t%lx\n",cur->NO,cur->s,new_value);
      nemu_state.state = NEMU_STOP;
    }
    cur = cur->next;
  }
}

void display_wp(){
  WP *cur = head;
  if(cur == NULL){
    printf("No watchpoints\n");
  }else{
    printf("Num\tType\t\tEnb\tAddress\tWhat\n");
    while(cur != NULL){
      printf("%d\twatchpoint\ty\taddress\t%s\n",cur->NO,cur->s);
      cur = cur->next;
    }
  }
}

void add_wp(char *e){
  WP *tmp=new_wp();
  bool success=false;
  word_t value = expr(e,&success);
  strcpy(tmp->s,e);
  tmp->old_value = value;
  
}

void delete_wp(char *e){
  int no;
  Assert(sscanf(e,"%d",&no)==1,"%s not recgonized as number\n",e);
  free_wp(& wp_pool[no]);
}
/* TODO: Implement the functionality of watchpoint */

