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

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

enum {
  TK_NOTYPE = 256, TK_EQ, TK_NUM, TK_HEX, TK_BRACKETS,
  TK_REG, TK_ERROR, TK_NLINE, TK_NEQ, TK_AND, TK_DEREF,
  TK_OR,

  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {"( +).*", TK_NOTYPE},    // spaces
  {"([\\+]).*",'+'},
  {"([\\-]).*",'-'},
  {"([\\*]).*",'*'},
  {"([\\/]).*",'/'},
  {"(==).*", TK_EQ},        // equal
  {"(!=).*",TK_NEQ},
  {"(&&).*",TK_AND},
  {"(\\|\\|).*",TK_OR},
  {"([0-9]+(lu)?).*", TK_NUM},     // number
  {"([\\(\\)]).*", TK_BRACKETS},
  {"(\n).*",TK_NLINE},
  {"(0x[0-9a-fA-F]*).*",TK_HEX},
  {"(\\$[a-z0-9]*).*",TK_REG},
  
};

#define NR_REGEX ARRLEN(rules)
static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;
// __attribute__((used)) 旨在告诉编译器，即使该符号没被引用也要保留，而不至于在release中优化掉
static Token tokens[32] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;
static int len_token = sizeof(tokens)/sizeof(Token);

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch[2];

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 2, pmatch, 0) == 0 && pmatch[0].rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch[1].rm_eo;//rm_eo is the offset of the first character after the matching text
        Assert(substr_len <= 32,"arguments %s is too long, should be less than 32b",substr_start);
        // Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
        //     i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */
        Assert(nr_token < len_token,"the token number of expression out of bound:%d\n",len_token);
        switch (rules[i].token_type) {
          case TK_NOTYPE:
          case TK_NLINE:  break;
          case TK_EQ:
          case TK_NEQ:
          case TK_OR:
          case TK_AND:    tokens[nr_token++].type = rules[i].token_type;break;
          case '+':
          case '-':
          case '*':
          case '/':
          case TK_BRACKETS:
          case TK_NUM:
          case TK_HEX:
            tokens[nr_token].type = rules[i].token_type;
            strncpy(tokens[nr_token++].str,substr_start,substr_len);break;
          default:
            tokens[nr_token].type = TK_ERROR;break;
        }
        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}

static bool check_parentheses(int p,int q){
  int left=0;
  //判定首位是否是(
  if (strcmp(tokens[p].str,"(")!=0)
  {
    return false;
  }
  
  for(int i=p;i<=q;i++){
    if(strcmp(tokens[i].str,"(")==0){
      left++;
    }else if (strcmp(tokens[i].str,")")==0)
    {
      left--;
      //判定最外层()是否未到末尾
      if(left==0 && i!=q)return false;
    }
  }
  if(left==0)return true;
  return false;
}

static word_t eval(int p,int q){
  char *endptr;
  if(p>q){
    Assert(0,"Bad expression,eval(p>q),p:%d  q:%d",p,q);
  }
  else if (p==q){
        /* Single token.
     * For now this token should be a number.
     * Return the value of the number.
     */
    word_t result=0;
    if(tokens[p].type == TK_NUM)
      result = strtol(tokens[p].str,&endptr,10);
    else if(tokens[p].type == TK_HEX){
      result = strtol(tokens[p].str,&endptr,16);
      Assert(endptr != tokens[p].str,"Hex number not recgonized\n");
    }
    return result;
  }
  else if(check_parentheses(p,q) == true){
    return eval(p+1,q-1);
  }
  else{
    int op=0;// the position of main op in the expression
    int adop=0;
    int mulop=0;
    int eqop=0;
    int logop=0;
    //最左边先算，函数栈先入后算
    for (int i = p,leftpt=0; i <= q; i++)
    {
      if(tokens[i].type == TK_BRACKETS){
        if(tokens[i].str[0] == '(')leftpt ++;
        else if (tokens[i].str[0] == ')')leftpt --;
      }//left op eval first
      else if(leftpt == 0){
        switch (tokens[i].type)
        {
        case '+':
        case '-':     adop = i;break;
        case '*':
        case '/':     mulop = i;break;
        case TK_EQ:   
        case TK_NEQ:  eqop = i;break;
        case TK_AND:
        case TK_OR:   logop = i;break;
        default:
          break;
        }
      }
    }
    
    //优先级最低最后算，函数栈先入后算
    if(logop != 0){
      op = logop;
    }else if(eqop != 0){
      op = eqop;
    }else if(adop != 0){
      op = adop;
    }else if(mulop != 0){
      op = mulop;
    }

    
    word_t val1 = eval(p,op-1);
    word_t val2 = eval(op+1,q);
    
    switch (tokens[op].type){
      case '+': return val1 + val2;
      case '-': return val1 - val2;
      case '*': return val1 * val2;
      case '/':Assert(val2 != 0,"Error:divided by zero\n");
                return val1 / val2;
      case TK_EQ:
        return (val1 == val2);
      case TK_NEQ:
        return (val1 != val2);
      case TK_AND:
        return (val1 && val2);
      case TK_OR:
        return (val1 || val2);
    default:Assert(0,"op not recgnized");
    }
  }
}

word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  *success = true;
  /* TODO: Insert codes to evaluate the expression. */
  word_t result=0;
  result = eval(0,nr_token-1);
  // printf("result:%lu\n",result);
  memset(tokens,0,sizeof(tokens));
  return result;
}
