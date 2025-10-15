#include<stdio.h>

int sum(int arr[][3], int rows, int cols) {
  int sum = 0;
  for (int i=0; i<rows; i++) {
    for (int j=0; j<cols; j++) {
      sum += arr[i][j];
    }
  }
  return sum;
}

int main() {
  int arr[3][3]={{1,2,3},{4,5,6},{1,2,3}};
  printf("Welcome to Sum and Average using 2D Array Program.\n");

  int add = sum(arr, 3, 3);
  float avg = add / (3 * 3);
  printf("Sum of all elements: %d\n", add);
  printf("Average of all elements: %.2f\n", avg);

  return 0;
}