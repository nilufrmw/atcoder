#include <stdio.h>

int max(int a, int b) {
  return (a > b ? a : b);
}

int main(void) {
  char grid[5][5];
  for(int i = 0; i < 5; ++i) {
    for(int j = 0; j < 5; ++j) {
      scanf(" %c", &grid[i][j]);
    }
  }
  
  int max_cnt = 0;
  
  // rows
  for(int row = 0; row < 5; ++row) {
    int row_cnt = 0;
    for(int col = 0; col < 5; ++col) {
      if(grid[row][col] == 'o') {
        row_cnt++;
      }
    }
    max_cnt = max(max_cnt, row_cnt);
  }
  
  // columns
  for(int col = 0; col < 5; ++col) {
    int col_cnt = 0;
    for(int row = 0; row < 5; ++row) {
      if(grid[row][col] == 'o') {
        col_cnt++;
      }
    }
    max_cnt = max(max_cnt, col_cnt);
  }
  
  // diagonals
  int diag1 = 0, diag2 = 0;
  for(int i = 0; i < 5; ++i) {
    if(grid[i][i] == 'o') {
      diag1++;
    }
    if(grid[i][4-i] == 'o') {
      diag2++;
    }
  }
  int diag_max = max(diag1, diag2);
  max_cnt = max(max_cnt, diag_max);
  printf("%d\n", 5 - max_cnt);
  
  return 0;
}