#include<stdio.h>

int main() {
  int marks[5];

  printf("Enter marks for 5 students:\n");
  scanf("%d %d %d %d %d", &marks[0], &marks[1], &marks[2], &marks[3], &marks[4]);

  printf("Marks of first student: %d\n", marks[0]);
  printf("Marks of second student: %d\n", marks[1]); 
  printf("Marks of third student: %d\n", marks[2]);
  printf("Marks of fourth student: %d\n", marks[3]);
  printf("Marks of fifth student: %d\n", marks[4]);

  return 0;
}