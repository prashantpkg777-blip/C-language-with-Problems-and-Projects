#include<stdio.h>
int main() {
  int rows;
  printf("Enter number of rows: ");
  scanf("%d", &rows);
  printf("Here is Right Half Pyramid\n");
  
  for (int i = 1; i <= rows; ++i) {
    for (int j = 1; j <= i; ++j) {
      printf("* ");
    }
    printf("\n");   
  }
}