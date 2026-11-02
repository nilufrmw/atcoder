#include <stdio.h>

int main(void) {
  int n, m;
  scanf("%d%d", &n, &m);
  // n^0 + n^1 + ... + n^m
  long long s = 0;
  long long term = 1;
  for(int rep = 0; rep <= m; ++rep) {
    s += term;
    if(s > 1e9) {
      puts("inf");
      return 0;
    }
    term *= n;
  }
  printf("%d\n", s);
  return 0;
}