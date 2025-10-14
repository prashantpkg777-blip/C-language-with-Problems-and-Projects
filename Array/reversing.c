#include<stdio.h>

void printArr(int arr[], int size){
  for (int i=0; i<size; i++){
    printf("%d ", arr[i]);
  }
}


void swap(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;

}

void reverse(int arr[], int size){
  for (int i=0; i<size/2; i++){
    swap(&arr[i], &arr[size-i-1]);
  }
}

int main() {
  int arr1[]={1,3,4,8,4,9,2,5};
  int arr2[]={5,3,6,9,1};

  printf("Welcome to Array Reversing Program\n");

  printf("\nReverse this array: ");
  printArr(arr1, 8);
  reverse(arr1, 8);
  printf("\nReversed array is: ");
  printArr(arr1, 8);

  printf("\nReverse this array: ");
  printArr(arr2, 5);
  reverse(arr2, 5);
  printf("\nReversed array is: ");
  printArr(arr2, 5);

  return 0;
}