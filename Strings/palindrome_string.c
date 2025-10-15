#include<stdio.h>
#include<string.h>

int is_palindrome(char str[]) {
  int length = strlen(str);
  for (int i = 0; i < length / 2; i++) {
    if (str[i] != str[length - i - 1]) {
      return 0; // Not a palindrome
    }
  }
  return 1; // Is a palindrome
}

int main() {
  char text[100];

  printf("Enter a string to check for palindrome: ");
  fgets(text, sizeof(text), stdin);

  if (is_palindrome(text)) {
    puts("The string is a palindrome.");
  } else {
    puts("The string is not a palindrome.");
  }

  return 0;
}