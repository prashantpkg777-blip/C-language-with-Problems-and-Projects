#include<stdio.h>

int main() {
  FILE *file_pointer;
  char text[100];

  file_pointer = fopen("pkg.txt", "r");
  if (file_pointer == NULL) {
    printf("File could not be opened.");
    return 1;
  }

  // reading from file
  // fgets(text, sizeof(text), file_pointer);
  // printf("File opened: %s\n", text);

  // continue until end of file (EOF)
  char c;
  do {
    c = fgetc(file_pointer);
    printf("%c", c);
  } while (c != EOF);

  int result = fclose(file_pointer);
  if (result == 0) {
    file_pointer = NULL;
  } else {
    printf("\nFile was not closed properly.");
    return 1;
  }
  return 0;
}