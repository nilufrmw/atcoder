#include <stdio.h>

int out[100];

int abs(int x) {
  if(x < 0) {
    x = -x;
  }
  return x;
}

int main(void) {
  int n, d;
  scanf("%d %d", &n, &d);
  int x[n];
  for(int i = 0; i < n; ++i) {
    scanf("%d", &x[i]);
  }
  int cnt = 0;
  for(int i = 0; i < n; ++i) {
    int is_out = 1;
    for(int j = 0; j < n; ++j) {
      int dist = abs(x[i] - x[j]);
      if(dist < d && i != j) {
        is_out = 0;
        break;
      }
    }
    if(is_out) {
      cnt++;
      out[i] = 1;
    }
  }
  printf("%d\n", cnt);
  for(int i = 0; i < n; ++i) {
    if(out[i]) {
      printf("%d ", i + 1);
    }
  }
  return 0;
}