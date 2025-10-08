#include<stdio.h>

float greater(float a, float b) {
   return a > b ? a : b;
}

int main() {
  float a, b;
  printf("Please enter first number: ");
  scanf("%f", &a);
  printf("Now, enter second number: ");
  scanf("%f", &b);

  printf("The greater number is: %.2f\n", greater(a, b));
  return 0;
}