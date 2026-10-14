#include <stdio.h>

long max(long a, long b) {
  return (a > b ? a : b);
}

int main(void) {
  int n, w;
  scanf("%d%d", &n, &w);
  int d[20], v[20];
  for(int i = 0; i < n; ++i) {
    scanf("%d%d", &d[i], &v[i]);
  }

  long long best = 0;
  for(int mask = 0; mask < (1 << n); ++mask) {
    long long vol = 0, del = 0;
    for(int i = 0; i < n; ++i) {
      if(mask & (1 << i)) {
        vol += v[i];
        del += d[i];
      }
    }
    if(vol <= w) {
      best = max(best, del);
    }
  }

  printf("%lld\n", best);
  return 0;
}