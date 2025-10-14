#include<stdio.h>

int main() {
    int a,b;
    printf("Enter a number\n");
    scanf("%d",&a);
    printf("Enter another number\n");
    scanf("%d",&b);

    int sum = a + b;
    printf("The sum of %d and %d is %d\n", a, b, sum);
    return 0;
}