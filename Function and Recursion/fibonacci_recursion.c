#include<stdio.h>

int fibo(int n) {
  if (n <=1) {
    return n;
  } else {
    return fibo(n-1) + fibo(n-2);
  }
  return 0;
}

int main() {
  int term, i;
  printf("This program computes Fibonacci numbers using recursion.\n");
  printf("Enter the number of term needed: ");
  scanf("%d", &term);

   printf("The Fibonacci series upto %d is:\n", term);

  for (i=0; i<term; i++) {
   
    printf(" %d", fibo(i));
  }

  return 0;
}