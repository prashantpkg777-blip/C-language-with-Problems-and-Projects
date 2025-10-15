#include<stdio.h>
#include<string.h>

void reverse_string(char str[]) {
  int length = strlen(str);
  for (int i = 0; i < length / 2; i++) {
    char temp = str[i];
    str[i] = str[length - i - 1];
    str[length - i - 1] = temp;
  }
}

int main() {
  char text[100];

  printf("Enter a string to reverse: ");
  fgets(text, sizeof(text), stdin);

  reverse_string(text);
  puts("Reversed string:");
  puts(text);

  return 0;
}