/*
Given solution is O(M) time and O(N) space.
We can improve it by calculating minimum amount every person will get (m / n) and the remaining will be distributed to some prefix of people.

We can just output: (m / n) + extra, where that extra is 1 if 'i' < (m % n) in 0-based indexing.
*/

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
