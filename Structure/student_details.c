#include<stdio.h>

struct student
{
  /* data */
  int rollno;
  char name[10];
  float marks;
};

int main() {
  struct student student1;

  printf("Please enter student details..\n");
  printf("Enter the Roll no: ");
  scanf("%d", &student1.rollno);
  printf("Enter the Name: ");
  scanf(" %s", student1.name);
  printf("Enter the Marks: ");
  scanf("%f", &student1.marks);

  printf("Here is the Student Details\n");
  printf("Rollno: %d, Name: %s, Marks: %.2f", student1.rollno,student1.name,student1.marks);

  return 0;
}
