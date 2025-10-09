#include<stdio.h>
#include<limits.h>

int main() {
  unsigned int positive = UINT_MAX;
  int normal = INT_MAX;

  printf("Unsigned int: %u\n", positive);
  printf("Signed int: %d\n", normal);

  positive++;
  normal++;

  printf("After incrementing:\n");
  printf("Unsigned int: %u\n", positive);
  printf("Signed int: %d\n", normal);
  
  return 0;
}