#include <stdio.h>

int main(void) {
  int pages;
  scanf("%d", &pages);
  int paper = pages / 2;
  if(pages % 2 == 1) paper++;
  printf("%d\n", paper);
  return 0;
}