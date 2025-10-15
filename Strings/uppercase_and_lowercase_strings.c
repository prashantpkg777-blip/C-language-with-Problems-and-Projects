#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main() {
  char text[100];
  printf("Welcome to the Uppercase Converter!\n");
  printf("Please enter your text: ");
  fgets(text, sizeof(text), stdin);

  for (int i = 0; i < strlen(text); i++) {
    text[i] = toupper(text[i]);
  }

  printf("Converted to uppercase: ");
  puts(text);

  for (int i = 0; i < strlen(text); i++) {
    text[i] = tolower(text[i]);
  }

  printf("Reverted to lowercase: ");
  puts(text);

  return 0;
}