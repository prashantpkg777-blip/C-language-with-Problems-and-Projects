#include<stdio.h>
int main() {

  int first, second;
  printf("Welcome to the GCD program\n");
  printf("Please, Enter first number\n");
  scanf("%d", &first);
  printf("Now, Enter second number\n");
  scanf("%d", &second);

  int min = first > second ? first : second;
  for ( int i = min; i >= 1; i--) {
    if (first % i == 0 && second % i == 0) {
      printf("The GCD of %d and %d is %d\n", first, second, i);
      break;
    }
  }
}