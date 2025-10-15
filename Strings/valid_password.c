#include<stdio.h>
#include<string.h>

int main() {
  char stored_password[] = "password@123";
  char input_password[100];

  printf("Welcome to the password validation program.\n");

  do {
  printf("Please enter your correct password: ");
  scanf("%99s", input_password);
  } while (strcmp(stored_password, input_password) != 0);

  printf("Access granted. You have entered the correct password.\n");

  return 0;
}