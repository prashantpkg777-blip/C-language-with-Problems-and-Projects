#include<stdio.h>

void printArr(char *arr, int size){
  for (int i=0; i<size; i++){
    printf("%c", *(arr+i));
  }
  printf("\n");
}

void copingArr(char *arr, int *size, char *new_arr){
  for (int i=0; i<*size; i++){
    *(new_arr+i) = *(arr+i);
  }
}
  

int main(){
  char arr[]={'P','R','O',' ','C','o','d','e','r','s'};
  int size = 10;
  char new_arr[10];

  printf("Welcome to Array Copying Program\n");

  printf("Original array is: ");
  printArr(arr, size);
  copingArr(arr, &size, new_arr);
  printf("Copied array is: ");
  printArr(new_arr, size);
  return 0;
}
