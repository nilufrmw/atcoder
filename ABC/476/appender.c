/*
https://atcoder.jp/contests/abc476/tasks/abc476_a
*/

#include <stdio.h>

int main(void) {
  char s[15];
  scanf("%s", s);
  int len = 0;
  while(s[len] != '\0') {
    len++;
  }
  if(s[len-1] != 'e') {
    s[len] = 'e';
    s[len+1] = 'r';
    s[len+2] = '\0';
  }
  else {
    s[len] = 'r';
    s[len+1] = '\0';
  }
  printf("%s", s);
  return 0;
}