#include<stdio.h>
#include<stdlib.h>

int main() {
  int n=10;
  int *ptr;
  ptr = (int*) malloc(n*sizeof(int));

  for (int i=0; i<n; i++){
    ptr[i] = 7* (i+1);
  }

  printf("The array is: \n");

  for (int i=0; i<n; i++){
    printf("%d\n", ptr[i]);
  }

  n=15;
  ptr = (int*) realloc(ptr ,n*sizeof(int));

  for (int i=0; i<n; i++){
    ptr[i] = 7* (i+1);
  }

  printf("The array is: \n");

  for (int i=0; i<n; i++){
    printf("%d\n", ptr[i]);
  }
}