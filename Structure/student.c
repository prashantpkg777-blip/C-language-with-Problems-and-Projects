#include<stdio.h>

typedef struct {
    int id;
    char name[30];
    int year;
    float gpa;
} Student;

void update_gpa(Student *stu_ptr, float new_gpa) {
    printf("\nUpdating GPA for %s (ID: %d)...", stu_ptr->name, stu_ptr->id);
    stu_ptr->gpa = new_gpa;   // Modify using pointer
    printf("\nGPA updated successfully!\n");
}

void print_student(Student stu) {
   printf("\nID: %d\nName: %s\nYear: %d\nGPA: %.2f\n",
           stu.id, stu.name, stu.year, stu.gpa);
}

int main() {
  Student student = {101, "Prashant", 1, 8.75};

    printf("Before update:");
    print_student(student);

    // Update GPA using pointer
    update_gpa(&student, 9.20);

    printf("\nAfter update:");
    print_student(student);

    return 0;
}