#include<stdio.h>

void min_max(int *a, int *b, int *min, int *max) {
  if (*a < *b) {
    *min = *a;
    *max = *b;
  } else {
    *min = *b;
    *max = *a;
  }
}

int main() {
  int a, b, min, max;
  printf("Enter first number: ");
  scanf("%d", &a);
  printf("Enter second number: ");
  scanf("%d", &b);

  min_max(&a, &b, &min, &max);
  printf("Minimum: %d\n", min);
  printf("Maximum: %d\n", max);
  return 0;
}