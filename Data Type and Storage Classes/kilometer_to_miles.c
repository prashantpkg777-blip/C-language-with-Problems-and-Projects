#include<stdio.h>

int main() {
  const float KM_TO_MILES = 0.621371;
  long long kilometers, miles;
  printf("Welcome to Kilometer to Miles Converter!\n");
  printf("Enter distance in kilometers: ");
  scanf("%lld", &kilometers);

  miles = kilometers * KM_TO_MILES;
  printf("%lld kilometers is equal to %lld miles.\n", kilometers, miles);

  return 0;
}