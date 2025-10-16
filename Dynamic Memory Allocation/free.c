#include<stdio.h>
#include<stdlib.h>

int main() {
  int *arr;
  int n;

  printf("Enter the no of elements: ");
  scanf("%d", &n);

  arr = (int*)malloc(n * sizeof(int));

  if (arr == NULL) {
    printf("Not enough Memory\n");
    return 1;
  }

  for (int i=0; i<n; i++) {
    printf("Enter element number %d: ", i+1);
    scanf("%d", &arr[i]);
  }

  long sum=0;
  for (int i=0; i<n; i++) {
    sum += arr[i];
  }

  free(arr);
  arr = NULL;

  printf("The sum of all elements: %ld", sum);

  return 0;
}