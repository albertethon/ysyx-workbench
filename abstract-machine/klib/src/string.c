#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  size_t i=0;
  while (s[i]!='\0')i++;
  return i-1;
}

char *strcpy(char *dst, const char *src) {
  size_t i=0;
  if(strlen(dst) < strlen(src))
    panic("dst is small than src");
  while(src[i]!=0){
    dst[i] = src[i];
    i++;
  }
  dst[i] = src[i];
  return dst;
}

char *strncpy(char *dst, const char *src, size_t n) {
  size_t i;
  for (i = 0; i < n && src[i] != '\0'; i++)
    dst[i] = src[i];
  for ( ; i < n; i++)
    dst[i] = '\0';
  dst[i] = 0;
  return dst;
}

char *strcat(char *dst, const char *src) {
  char *tmp=dst;
  while (*dst)dst++;
  while ((*dst++ = *src++)!=0);
  return tmp;
}

int strcmp(const char *s1, const char *s2) {
  int i=0;
  while (s1[i] != '\0'){
    if (s1[i] < s2[i]){
      return -1;
    }
    else if (s1[i] > s2[i]){
      return 1;
    }
    i++;
  }
  if(s2[i] > '\0')return -1;
  else return 0;

}

int strncmp(const char *s1, const char *s2, size_t n) {
  size_t i=0;
  while (s1[i] != '\0' && i<n){
    if (s1[i] < s2[i]){
      return -1;
    }
    else if (s1[i] > s2[i]){
      return 1;
    }
    i++;
  }
  if(s2[i] > '\0' && i<n)return -1;
  else return 0;
}

void *memset(void *s, int c, size_t n) {
  unsigned char *p = s;
  while (n--){
    *p++ = (unsigned char)c;
  }
  return s;
}

void *memmove(void *dst, const void *src, size_t n) {
  panic("Not implemented");
}

void *memcpy(void *out, const void *in, size_t n) {
  panic("Not implemented");
}

int memcmp(const void *s1, const void *s2, size_t n) {
  if (n==0)return 0;
  const unsigned char *p1 = s1;
  const unsigned char *p2 = s2;
  size_t i;
  for ( i = 0; i < n; i++){
    if(p1[i]<p2[i])return -1;
    else if(p1[i] > p2[i])return 1;
  }
  return 0;
}


#endif
