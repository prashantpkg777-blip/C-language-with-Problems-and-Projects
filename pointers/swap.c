#include<stdio.h>

void swap(int* ptr1 ,int* ptr2) {
  printf("Values of ptr1 and ptr2 before swap: %d, %d\n", *ptr1, *ptr2);

  int temp = *ptr1; // Store value at address ptr1 in temp
  *ptr1 = *ptr2;    // Assign value at address ptr2 to address ptr1
  *ptr2 = temp;     // Assign value in temp to address ptr2 

  printf("Values of ptr1 and ptr2 after swap: %d, %d\n", *ptr1, *ptr2);
}

int main() {
  int x = 5, y = 10;
  printf("Before swap: x = %d, y = %d\n", x, y);
  swap(&x, &y); // Pass addresses of x and y
  printf("After swap: x = %d, y = %d\n", x, y);
  return 0;
}