/*
https://atcoder.jp/contests/abc476/tasks/abc476_b
*/

#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);
  char s[100], t[100];
  scanf("%s", s);
  scanf("%s", t);
  
  int ok = 1;
  for(int i = 0; i < n; ++i) {
    if(s[i] != t[i]) {
      if(t[i] != '*') {
        ok = 0;
        break;
      }
    }
  }
  puts(ok ? "Yes" : "No");
}

