#include<stdio.h>
#include<string.h>

int main() {
  char name[4][50]= {"Prashant", "Raju", "Omi", "Aswani"};

  for(int i=0; i<4; i++){
    puts(name[i]);
  }

  for(int i=0; i<4; i++){
    for(int j=0; name[i][j]!='\0'; j++){
      printf("%c", name[i][j]);
    }
    printf(" ");
  }
  return 0;
}