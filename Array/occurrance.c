#include<stdio.h>

int occurrences(int arr[], int size, int element) {
  int count = 0;
  for (int i=0; i<size; i++) {
    if (arr[i] == element) {
      count++;
    }
  }
  return count;

}

int main() {
  int arr[] = {1,2,3,4,5,1,2,1,3,4};
  printf("Welcome to the Array Occurrence Counter!\n");

  int result = occurrences(arr, 10, 1);
  printf("The number 1 occurs %d times in the array.\n", result);
  result = occurrences(arr, 10, 2);
  printf("The number 2 occurs %d times in the array.\n", result);
  result = occurrences(arr, 10, 3);
  printf("The number 3 occurs %d times in the array.\n", result);
  result = occurrences(arr, 10, 4);
  printf("The number 4 occurs %d times in the array.\n", result);
  result = occurrences(arr, 10, 5);
  printf("The number 5 occurs %d times in the array.\n", result);
  
  return 0;
}