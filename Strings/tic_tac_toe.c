#include<stdio.h>

int main() {
  char board[3][3] = {
    {'X', 'O', 'O'},
    {'X', 'X', 'O'},
    {'O', 'X', 'X'}
  };
  
  printf("Tic Tac Toe Board:\n\n");

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf(" %c ", board[i][j]);
      if (j < 2) printf("|");
    }
    if (i < 2) printf("\n-----------\n");
  }

  printf("\n");
  return 0;
}
