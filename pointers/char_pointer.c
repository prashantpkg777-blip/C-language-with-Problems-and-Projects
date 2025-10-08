#include<stdio.h>

int main() {
  char character;
  char *ptr = &character; // ptr is a pointer to a char, initialized to the address of character
  printf("Please enter a character: ");
  scanf(" %c", ptr); 

  printf("The value of char is %c\n", character);
  printf("The value of char using pointer is %c\n", *ptr);
  return 0;
}