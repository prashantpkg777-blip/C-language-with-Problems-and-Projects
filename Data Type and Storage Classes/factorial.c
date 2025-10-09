#include<stdio.h>

long factorial(int n) {
  long result = 1;
  for (int i = 1; i <= n; i++) {
    result *= i;
  }
  return result;
}

int main() {
  int num;
  printf("Enter a positive integer: ");
  scanf("%d", &num);

  printf("Factorial of %d = %ld", num, factorial(num));

  return 0;
}