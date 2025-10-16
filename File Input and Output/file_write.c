#include<stdio.h>

int main() {
  FILE *file_pointer;
  char text[100];

  file_pointer = fopen("writting.txt", "w");
  if (file_pointer == NULL) {
    printf("File could not be opened.");
    return 1;
  }

  // write formatted text to the file
  fprintf(file_pointer, "This is my writting opration.\n");
  fprintf(file_pointer, "The square of %d is %d.", 3, 9);

  int result = fclose(file_pointer);
  if (result == 0) {
    file_pointer = NULL;
  } else {
    printf("\nFile was not closed properly.");
    return 1;
  }
  return 0;
}