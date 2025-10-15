#include<stdio.h>

const int size = 3;

void sumOfDiagonals(int arr[][size]) {
  int leftDiagonalSum = 0;
  int rightDiagonalSum = 0;

  for (int i = 0; i < size; i++) {
    leftDiagonalSum += arr[i][i];
    rightDiagonalSum += arr[i][size - 1 - i];
  }
  printf("Sum of Left Diagonal: %d\n", leftDiagonalSum);
  printf("Sum of Right Diagonal: %d\n", rightDiagonalSum);

  int totalSum = leftDiagonalSum + rightDiagonalSum;
  if (size % 2 == 1) {
    totalSum -= arr[size / 2][size / 2];

  } 
  printf("Total Sum of Diagonals: %d\n", totalSum);

}

int main() {
  int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

  printf("Welcome to Sum of Diagonal in 2D Array Program.\n");
  sumOfDiagonals(arr);
  return 0;
}