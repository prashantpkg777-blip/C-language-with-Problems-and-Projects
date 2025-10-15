#include<stdio.h>
#include<string.h>

int main() {
  char name[50];

  printf("Please enter your name: ");
  fgets(name, 50, stdin); // Read string with spaces

  char copy[50];
  strcpy(copy, name); // Copy the string
  printf("The copied name is: %s", copy);
  return 0;
}