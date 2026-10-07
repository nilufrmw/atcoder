/*
problem: https://atcoder.jp/contests/abc477/tasks/abc477_a

solution:
Store the states in the order they appear in an array and
iterate through the array, if any state matches the one we looking, next state is the answer. +1 modulo 3 will wrap to 0, if it increments for the last light.
*/

#include <stdio.h>

int main(void) {
  char lights[] = {'B', 'Y', 'R'};
  char current;
  current = getchar();
  int next;
  for(int light = 0; light < 3; ++light) {
    if(lights[light] == current) {
      next = (light + 1) % 3;
    }
  }
  printf("%c", lights[next]);
  return 0;
}
