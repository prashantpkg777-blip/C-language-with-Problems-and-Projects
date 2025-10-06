#include <stdio.h>
#include <string.h>
#include <windows.h> // Windows-specific for Sleep()

void typeEffect(char *message, int delay) {
    for(int i = 0; i < strlen(message); i++) {
        printf("%c", message[i]);
        fflush(stdout);
        Sleep(delay); // delay in milliseconds
    }
    printf("\n");
}

void printHeart(int size) {
    int i, j;
    for(i = size/2; i <= size; i += 2) {
        for(j = 1; j < size-i; j += 2) printf(" ");
        for(j = 1; j <= i; j++) printf("*");
        for(j = 1; j <= size-i; j++) printf(" ");
        for(j = 1; j <= i; j++) printf("*");
        printf("\n");
    }
    for(i = size; i >= 1; i--) {
        for(j = i; j < size; j++) printf(" ");
        for(j = 1; j <= (i*2)-1; j++) printf("*");
        printf("\n");
    }
}

void clearScreen() {
    system("cls"); // Windows clear screen
}

int main() {
    char answer[10];

    printf("Welcome to the Ultimate Love Quest!\n\n");
    Sleep(500);

    // Interactive mini quiz
    printf("Question 1: Do you enjoy fun surprises? (yes/no): ");
    scanf("%s", answer);
    if(strcmp(answer,"yes") != 0) printf("Hmm... still worth continuing!\n");
    Sleep(500);

    printf("\nQuestion 2: Do you like little adventures in code? (yes/no): ");
    scanf("%s", answer);
    printf("Great! You're a brave soul.\n");
    Sleep(500);

    printf("\nFinal Question: Are you ready for something special? (yes/no): ");
    scanf("%s", answer);
    
    // Heart pulse animation before proposal
    for(int t = 0; t < 6; t++) {
        clearScreen();
        printHeart(6 + t%2);
        Sleep(250);
    }
    clearScreen();
    printHeart(7);

    printf("\n");

    if(strcmp(answer,"yes") == 0) {
        char message[] = "Hey... I know this is code, but will you be mine? <3";
        typeEffect(message, 100);
    } else {
        char message[] = "No worries! Just know, you're amazing anyway. <3";
        typeEffect(message, 100);
    }

    printf("\nThanks for playing the Love Quest! <3\n");

    return 0;
}
