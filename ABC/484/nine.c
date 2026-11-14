#include <stdio.h>
#include <stdbool.h>

int min(int a, int b) {
  return (a < b ? a : b);
}

int main(void) {
  int k;
  scanf("%d", &k);
  bool can = false;
  int smallest = 9;
  for(int i = 0; i < k; ++i) {
    int x;
    scanf("%d", &x);
    if(x == 9) {
      can = true;
    }
    smallest = min(smallest, x);
  }
  if(can) {
    printf("%d\n", smallest);
  }
  else {
    puts("-1");
  }
  return 0;
}