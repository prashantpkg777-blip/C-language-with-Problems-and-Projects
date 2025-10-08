#include<stdio.h>

float avg(float a, float b, float c, float d, float e) {
   return (a + b + c + d + e) / 5;
}

int main() {
  float a, b, c, d, e;
  printf("Please enter first number: ");
  scanf("%f", &a);
  printf("Now, enter second number: ");
  scanf("%f", &b);
  printf("Now, enter third number: ");
  scanf("%f", &c);
  printf("Now, enter fourth number: ");
  scanf("%f", &d);
  printf("Finally, enter fifth number: ");
  scanf("%f", &e);

  printf("The average is: %.2f\n", avg(a, b, c, d, e));
  return 0;
}