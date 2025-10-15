#include<stdio.h>
#include<string.h>

int main() {
  const char correct_username[] = "admin";
  char input_username[50];

  printf("Welcome! Please enter your username: ");
  scanf("%49s", input_username);

  if (strcmp(input_username, correct_username) == 0)
  {
    printf("Access granted.\n");
  } else {
    printf("Access denied.\n");
  }
  return 0;
}