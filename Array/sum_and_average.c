#include<stdio.h>

int sum(int arr[], int size) {
  int add = 0;
  for (int i=0; i<size; i++) {
    add += arr[i];
  }
  return add;
}

int main() {
  int arr[10];

  printf("Welcome to the Array Sum and Average Calculator!\n");
  for (int i=0; i<10; i++) {
    printf("Enter number %d: ", i+1);
    scanf("%d", &arr[i]);
  }

  int add = sum(arr, 10);
  int avg = add / 10;
  printf("The sum of the array elements is: %d\n", add);
  printf("The average of the array elements is: %d\n", avg);

  return 0;
}