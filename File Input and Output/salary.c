#include<stdio.h>

int main() {
  FILE *fptr;
  char name1[20],name2[20];
  int salary1,salary2;

  fptr = fopen("salary.txt", "w");

  printf("Enter the name of Employee 1st: ");
  scanf("%s", name1);
  printf("Salary: ");
  scanf("%d", &salary1);

  printf("Enter the name of Employee 2nd: ");
  scanf("%s", name2);
  printf("Salary: ");
  scanf("%d", &salary2);

  fprintf(fptr, "%s, %d\n", name1,salary1);
  fprintf(fptr, "%s, %d\n", name2,salary2);

  fclose(fptr);
}