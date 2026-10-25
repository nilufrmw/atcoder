#include <stdio.h>

int min(int a, int b) {
  return (a < b ? a : b);
}

int max(int a, int b) {
  return (a > b ? a : b);
}

int inside(int k, int h1, int h2) {
  int low = min(h1, h2);
  int high = max(h1, h2);
  return (k >= low && k <= high);
}

int main(void) {
  int n, k;
  scanf("%d %d", &n, &k);
  int h[n]; // height of each point
  for(int i = 0; i < n; ++i) {
    scanf("%d", &h[i]);
  }
  int answer = 0;
  int vertex = 0;
  for(int i = 0; i < n-1; ++i) {
    if(i > 0 && h[i] == k) {
      vertex++;
    }
    if(inside(k, h[i], h[i+1])) {
      answer++;
    }
  }
  // subtract double counted vertices
  printf("%d\n", answer - vertex);
}