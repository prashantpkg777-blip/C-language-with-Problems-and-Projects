#include<stdio.h>
#include<time.h>

void print_date() {
  time_t current_time;
  time(&current_time);

  char* date_string =asctime(localtime(&current_time));

  printf("Current date and time: %s", date_string);

}

int main() {
  print_date();
  return 0;
}