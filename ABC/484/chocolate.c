#include <stdio.h>

int main(void) {
  int B, R;
  scanf("%d%d", &B, &R);
  int rem = (30 - B) * (30 - R);
  printf("%d\n", rem);
}