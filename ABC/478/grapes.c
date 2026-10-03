#include <stdio.h>

int cnt[100];

int main(void) {
  int n, m;
  scanf("%d %d", &n, &m);
  while(m > 0) {
    for(int i = 0; i < n; ++i) {
      if(m > 0) {
        cnt[i]++;
        m--;
      }
    }
  }
  for(int i = 0; i < n; ++i) {
    printf("%d\n", cnt[i]);
  }
  return 0;
}
