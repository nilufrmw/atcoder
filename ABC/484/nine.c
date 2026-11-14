#include <stdio.h>

int seen[10];

int main(void) {
  int k;
  scanf("%d", &k);
  for(int i = 0; i < k; ++i) {
    int x;
    scanf("%d", &x);
    seen[x] = 1;
  }
  if(!seen[9]) {
    puts("-1");
  }
  else {
    for(int i = 1; i <= 9; ++i) {
      if(seen[i]) {
        printf("%d\n", i);
        break;
      }
    }
  }
  return 0;
}