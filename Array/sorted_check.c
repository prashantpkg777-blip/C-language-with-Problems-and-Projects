#include<stdio.h>

int is_sorted(int arr[], int size) {
  int increasing = 1;
  int deacreasing = 1;
  for (int i=0; i<size-1; i++) {
    if (arr[i] < arr[i+1]) {
      deacreasing = 0;
    } else if (arr[i] > arr[i+1]) {
      increasing = 0;
    }
  }
  return increasing || deacreasing;
}

int main() {
  printf("Welcome to the Array Sorted Check Program!\n");
  int arr1[6] = {1, 2, 3, 4, 5, 6}; // increasing order
  int arr2[6] = {6, 5, 4, 3, 2, 1}; // decreasing order
  int arr3[6] = {1, 3, 2, 4, 5, 6}; // not sorted order 

  if (is_sorted(arr1, 6)) {
    printf("Array 1 is sorted.\n");
  } else {
    printf("Array 1 is not sorted.\n");
  }

  if (is_sorted(arr2, 6)) {
    printf("Array 2 is sorted.\n");
  } else {
    printf("Array 2 is not sorted.\n");
  }

  if (is_sorted(arr3, 6)) {
    printf("Array 3 is sorted.\n");
  } else {
    printf("Array 3 is not sorted.\n");
  }
  return 0;
}