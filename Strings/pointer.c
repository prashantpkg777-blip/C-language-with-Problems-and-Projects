#include<stdio.h>

int main() {
  
  char name[]  = "Prashant Gautam";
  printf("Name Before modified Array string: %s\n", name);
  name[9] = 'g';
  printf("Name After modified Array string: %s\n", name);

  char *nickname = "Prashant G";
  printf("Nickname Before modified Pointer string: %s\n", nickname);
   nickname[9] = 'g'; // This line would cause a segmentation fault
  printf("Nickname After modified Pointer string: %s\n", nickname);

  return 0;
}