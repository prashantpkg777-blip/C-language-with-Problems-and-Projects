#include<stdio.h>

struct student
{
  /* data */
  int rollno;
  char name[10];
  float marks;
};

int main() {
  // direct initialization
  struct student s1 = {101, "Prashant", 99};
  // designated initialization
  struct student s2 = {.name="Raju", .rollno = 102, .marks = 36};
  // zero initializaton
  struct student s3 = {0};
  // copy initializaton
  struct student s4 = s1;
  s4.rollno = 104;

  printf("Here is the Student Details\n");
  printf("\nRollno: %d, Name: %s, Marks: %.2f", s1.rollno,s1.name,s1.marks);

  printf("\nRollno: %d, Name: %s, Marks: %.2f", s2.rollno,s2.name,s2.marks);

  printf("\nRollno: %d, Name: %s, Marks: %.2f", s3.rollno,s3.name,s3.marks);

  printf("\nRollno: %d, Name: %s, Marks: %.2f", s4.rollno,s4.name,s4.marks);

  return 0;
}