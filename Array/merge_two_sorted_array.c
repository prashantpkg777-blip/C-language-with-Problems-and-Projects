#include<stdio.h>

void printArr(int arr[], int size){
  for (int i=0; i<size; i++){
    printf("%d ", arr[i]);
  }
  printf("\n");
}

void sort(int arr[], int size){
  for (int i=0; i<size-1; i++){
    for (int j=i+1; j<size; j++){
      if (arr[i] > arr[j]){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
}

void merge(int arr1[], int size1, int arr2[], int size2, int merged[]){
  int i=0, j=0, k=0;
  while (i<size1 && j<size2){
    if (arr1[i] < arr2[j]){
      merged[k++] = arr1[i++];
    } else {
      merged[k++] = arr2[j++];
    }
  }
  while (i<size1){
    merged[k++] = arr1[i++];
  }
  while (j<size2){
    merged[k++] = arr2[j++];
  }
}

int main() {
  int arr1[]={5,68,99,55,12};
  int arr2[]={-5,64,39,61,100};
  int merged[10];
  int size1 = 5, size2 = 5;

  printf("Welcome to Merge Two Sorted Arrays Program\n");

  // Sort both arrays first
  sort(arr1, size1);
  sort(arr2, size2);

  printf("First sorted array: ");
  printArr(arr1, size1);
  printf("Second sorted array: ");
  printArr(arr2, size2);

  merge(arr1, size1, arr2, size2, merged);
  printf("Merged sorted array: ");
  printArr(merged, size1 + size2);

  return 0;
}