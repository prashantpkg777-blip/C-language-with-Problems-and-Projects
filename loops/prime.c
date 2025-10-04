#include <stdio.h>

int main() {
  int n, i, prime;
  printf("Enter a positive integer: ");
  scanf("%d", &n);

  if (n <= 1) {
    printf("%d is not a prime number.\n", n);
  } else {
    prime = 1;
    for (i = 2; i * i <= n; i++) {
      if (n % i == 0) {
        prime = 0;
        break;
      }
    }
  }
  if (prime) {
    printf("%d is a prime number.\n", n);
  } else {
    printf("%d is not a prime number.\n", n);
  }
  return 0;
}
