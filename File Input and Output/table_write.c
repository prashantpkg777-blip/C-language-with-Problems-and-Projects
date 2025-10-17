#include<stdio.h>

int main() {
  FILE *fptr;
  int n=4;
  fptr = fopen("table.txt", "a");

  for (int i=1; i<=10; i++) {
    fprintf(fptr, "%d\n", n*i);
  }

  fclose(fptr);
}