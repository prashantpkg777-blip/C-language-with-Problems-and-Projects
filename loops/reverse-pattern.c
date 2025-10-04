#include<stdio.h>
int main() {
  int rows;
  printf("Enter number of rows: ");
  scanf("%d", &rows);
  printf("Here is Reverse Right Half Pyramid\n");
  
  for (int i = rows; i >= 1; i--) {
    for (int j = 1; j <= i; j++) {
      printf("* ");
    }
    printf("\n");   
  }
  return 0;
}