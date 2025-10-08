#include<stdio.h>

int square(int num) {
  return num*num;
}

int main() {
  int num;
  printf("Welcome to the World of Square.\n");
  printf("Please enter your number:");
  scanf("%d", &num);

  printf("Square of your number %d is %d ", num, square(num));

  return 0;
}