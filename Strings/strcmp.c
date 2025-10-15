#include<stdio.h>
#include<string.h>

int main() {
  int comparison= strcmp("apple", "banana");
  printf("Comparison result: %d\n", comparison); // Outputs a negative value since "apple" is less than "banana"

  comparison= strcmp("grape", "grape");
  printf("Comparison result: %d\n", comparison); // Outputs 0 since both strings are equal

  comparison= strcmp("orange", "apple");
  printf("Comparison result: %d\n", comparison); // Outputs a positive value since "orange" is greater than "apple"
  return 0;
}