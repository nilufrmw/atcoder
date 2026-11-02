#include <stdio.h>

int main(void) {
  int a, b;
  scanf("%d%d", &a, &b);
  if(400 % a != 0) {
    puts("-1");
  }
  else {
    printf("%d\n", 400 / a);
  }
  return 0:
}