#include <stdio.h>

int max(int a, int b) {
  return (a > b ? a : b);
}

int main(void) {
  int n, v;
  scanf("%d %d", &n, &v);
  int w[n];
  for(int i = 0; i < n; ++i) {
    scanf("%d", &w[i]);
  }
  int answer = 0;
  for(int i = 0; i < n; ++i) {
    for(int j = 0; j < n; ++j) {
      for(int k = 0; k < n; ++k) {
        // 3 different toppings
        if(i != j && j != k && i != k) {
          if(i + j + k + 3 <= v) {
            int total = w[i] + w[j] + w[k];
            answer = max(answer, total);
          }
        }
      }
    }
  }
  printf("%d\n", answer);
  return 0;
}