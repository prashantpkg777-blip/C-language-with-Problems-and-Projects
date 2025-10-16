#include<stdio.h>

struct student {
  int rollno;
  char name[20];
  float marks;
};


int main() {
  struct student student_details[5] = {
  {1, "Prashant", 99.99},
  {2, "Raju", 89.65},
  {3, "Omi", 35.36},
  {4, "Ashwani", 65.68},
  {5, "Aditya", 32.00}
  };

  printf("Here is the Student Details\n");

  for (int i=0; i<5; i++) {
  printf("\nRollno: %d, Name: %s, Marks: %.2f", student_details[i].rollno,student_details[i].name,student_details[i].marks);
  }
  return 0;
}