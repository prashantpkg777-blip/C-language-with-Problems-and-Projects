#include<stdio.h>

void CountTo100();
int sum(int , int);

int main() {
    CountTo100();
    int add = sum(10, 20);
    printf("\nSum: %d\n", add);
    return 0;
}

void CountTo100() {
    for (int i = 1; i <= 100; i++) {
        printf(" %d", i);
    }
}

int sum(int a, int b) {
    int add = a + b;
    return add;
}