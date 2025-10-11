#include<stdio.h>

int main() {
  int marks[2][3];
  
  for (int row=0; row<2; row++) {
    for (int col=0; col<3; col++) {
      printf("Enter marks for student %d subject %d: ", row+1, col+1);
      scanf("%d", &marks[row][col]);
    }
  }
  return 0;
}

// int marks[100][5][2][3]; // 4D array