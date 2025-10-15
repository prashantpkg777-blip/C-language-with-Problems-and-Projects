#include<stdio.h>

int search(int arr[][3], int rows, int cols, int target) {
  int occ = 0;
  for (int i=0; i<rows; i++) {
    for (int j=0; j<cols; j++) {
      if (arr[i][j] == target) {
        occ++;
      }
    }
  }
  return occ;
}

int main() {
  int arr[][3]={{1,2,3},{4,5,6},{1,2,3}};
  printf("Welcome to 2D array searching program\n");

  int occ = search(arr, 3, 3, 1);
  printf("Searching for 1 found: %d\n", occ);

  occ = search(arr, 3, 3, 9);
  printf("Searching for 9 found: %d\n", occ);

  occ = search(arr, 3, 3, 5);
  printf("Searching for 5 found: %d\n", occ);
  return 0;
}