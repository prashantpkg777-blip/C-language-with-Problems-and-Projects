#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int player, computer;
    int playerWins = 0, computerWins = 0, draws = 0;
    int round = 1;

    srand(time(0)); // seed for random number generation

    printf("Welcome to Stone, Paper, Scissors Game (Best of 5)\n");
    printf("Whoever wins 3 rounds first will win the match.\n");

    while (playerWins < 3 && computerWins < 3) {
        printf("\nRound %d\n", round);
        printf("Enter your choice:\n");
        printf("1. Stone\n2. Paper\n3. Scissors\n");
        printf("Your choice: ");
        scanf("%d", &player);

        // generate computer's choice
        computer = (rand() % 3) + 1;

        printf("Player chose: ");
        if (player == 1)
            printf("Stone\n");
        else if (player == 2)
            printf("Paper\n");
        else if (player == 3)
            printf("Scissors\n");
        else {
            printf("Invalid choice! Please enter 1, 2, or 3.\n");
            continue;
        }

        printf("Computer chose: ");
        if (computer == 1)
            printf("Stone\n");
        else if (computer == 2)
            printf("Paper\n");
        else
            printf("Scissors\n");

        // decide winner
        if (player == computer) {
            printf("It's a draw.\n");
            draws++;
        } else if ((player == 1 && computer == 3) ||
                   (player == 2 && computer == 1) ||
                   (player == 3 && computer == 2)) {
            printf("Player wins this round.\n");
            playerWins++;
        } else {
            printf("Computer wins this round.\n");
            computerWins++;
        }

        // display scoreboard
        printf("\nCurrent Scoreboard:\n");
        printf("Player Wins: %d\n", playerWins);
        printf("Computer Wins: %d\n", computerWins);
        printf("Draws: %d\n", draws);

        round++;
    }

    // final result
    printf("\nFinal Scoreboard:\n");
    printf("Player Wins: %d\n", playerWins);
    printf("Computer Wins: %d\n", computerWins);
    printf("Draws: %d\n", draws);

    if (playerWins > computerWins)
        printf("Congratulations! You are the Champion.\n");
    else
        printf("Computer is the Champion this time.\n");

    printf("Thank you for playing!\n");

    return 0;
}
