#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

char *_strrev(char *str){
  size_t len=0;
  char *s = str;
  if(!str){
    return NULL;
  }
  while(*s++!=0){
    len++;
  }
  for(size_t i=0;i < len/2;i++){
    char c = str[i];
    str[i] = str[len-i-1];
    str[len-i-1] = c;
  }
  return str;
}

char *_itoa(int num,char * strout,int base){
  char* str = strout;
  int digit,sign=0;
  if(num < 0){
    sign = 1;
    num *= -1;
  }
  while(num){
    digit = num % base;
    num  /= base;
    *str++ = (digit > 9)?(digit-10+'A'):(digit+'0');
  }

  if(sign){
    *str++ = '-';
  }
  *str = '\0';
  _strrev(strout);
  return strout;
}

int printf(const char *fmt, ...) {
  va_list ap;
  int len=0;
  char *tmps;
  va_start(ap,fmt);
  while (*fmt)
  {
    if(*fmt != '%'){
      putch(*fmt++);
      len++;
    }
    else{
      switch(*fmt++){
        case 's':
          tmps = va_arg(ap,char *);
          while (*tmps){
            putch(*tmps++);
            len++;
          }
          break;
        case 'd':
          _itoa(va_arg(ap,int),tmps,10);
          while (*tmps){
            putch(*tmps++);
            len++;
          }
          break;
        default:break;
      }
    }
  }
  va_end(ap);
  return len;
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...) {
  va_list ap;
  int len = 0;
  char tmp[10];
  char *buff = out;
  char *str_arg;
  va_start(ap, fmt);
  while (*fmt)
  {
    if (*fmt != '%')
    {
      *buff++ = *fmt++;
      len++;
    }
    else
    {
      fmt++;
      switch (*(fmt++))
      {
      case 's':
        str_arg = va_arg(ap, char *);
        while (*str_arg)
        {
            *buff++ = *str_arg++;
            len++;
        }
        break;
      case 'd':
        _itoa(va_arg(ap, int), tmp, 10);
        for (size_t i = 0; tmp[i] != 0; i++)
        {
          *buff++ = tmp[i];
          len++;
        }
        
        break;
      default:
        break;
      }
    }
  }
  *buff = 0;
  va_end(ap);
  return len;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}


#endif
