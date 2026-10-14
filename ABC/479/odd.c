#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);
  int answer = 0;
  for(int i = 0; i < n; ++i) {
    int x;
    scanf("%d", &x);
    if(i % 2 == 0) {
      answer += x;
    }
  }
  printf("%d\n", answer);
  return 0;
}