#include <stdio.h>

int main(void) {
  char s[10];
  scanf("%s", s);
  char *ptr = s;
  int cnt = 0;
  while(*ptr != '\0') {
    if(*ptr == 'o') {
      cnt++;
    }
    ptr++;
  }
  int is_odd = (cnt % 2) == 1;
  puts(is_odd ? "odd" : "even");
  return 0;
}