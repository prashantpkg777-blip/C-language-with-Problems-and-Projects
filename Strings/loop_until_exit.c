#include<stdio.h>
#include<string.h>

int main() {
  const char exit_command[] = "exit";
  char user_input[100];

  while (1) {
    printf("Enter a command: ");
    scanf("%99s", user_input);
    if (!strcmp(user_input, exit_command)) {
      break;
    }
  }
  printf("Exiting the loop. You entered the exit command.\n");
  return 0;
}