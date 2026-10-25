#include <stdio.h>

int main(void) {
  int a, b;
  scanf("%d %d", &a, &b);
  if(a + b > 9) {
    puts("2");
  }
  else {
    puts("1");
  }
  return 0;
}