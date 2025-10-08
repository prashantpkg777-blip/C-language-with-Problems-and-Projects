#include<stdio.h>

int main() {
  int i = 10;
  int *j = &i; // j is a pointer to an integer, initialized to the address of i
  int **k = &j; // k is a pointer to a pointer to an integer, initialized to the address of j

  printf("Value of i: %d\n", i);
  printf("Address of i: %p\n", &i);
  printf("Value at address of i: %d\n", *(&i));

  printf("value of j (address of i): %p\n", j);
  printf("Address of j: %p\n", &j);
  printf("Value at address stored in j (value of i): %d\n", *j);

  printf("Value of k (address of j): %p\n", k);
  printf("Address of k: %p\n", &k);
  printf("Value at address stored in k (value of j - address of i): %p\n", *k);
  printf("Value at address stored at address stored in k (value of i): %d\n", **k);
  
  return 0;
}