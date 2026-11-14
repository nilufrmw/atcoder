#include <stdio.h>
#include <bool.h>

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
    printf(%d\n", smallest);
  }
  else {
    puts("-1");
  }
  return 0;
}