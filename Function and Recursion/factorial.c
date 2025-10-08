#include <stdio.h>

int factorial_using_loop(int n){
  int result = 1;
  for(int i = 1; i <= n; i++) {
    result *= i;
  }
  return result;
}

int factorial_using_recursion(int n) {
  if (n == 0) {
    return 1;
  }
  return n * factorial_using_recursion(n - 1);
}

int main() {
  int number;
  printf("Enter a number: ");
  scanf("%d", &number);

  printf("Factorial of %d using loop: %d\n", number, factorial_using_loop(number));
  printf("Factorial of %d using recursion: %d\n", number,factorial_using_recursion(number));

  return 0;
}