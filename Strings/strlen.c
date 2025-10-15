#include<stdio.h>
#include<string.h>

int main() {
  char name[50];

  printf("Please enter your name: ");
  fgets(name, 50, stdin); // Read string with spaces
   int length = strlen(name);
  printf("The length of your name is: %d\n", length - 1); // Subtract 1 to exclude the newline character
  return 0;
}