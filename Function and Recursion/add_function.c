#include<stdio.h>

int add(int a, int b,int c,int d) {
  int sum = a + b + c + d;
  return sum;
}

int main() {
  printf("Welcome of adding of 4 calculator\n");
  printf("Sum = %d\n", add( 1,5,7,10));
  printf("Sum = %d\n", add( 15,35,55,66));
  printf("Sum = %d\n", add( 1,35,68,10));
  return 0;
}