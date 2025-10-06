#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int randomNumber;
    int noOfGuesses = 0;
    int userGuess;

    srand(time(0));  // seeding with current time
    char choice;
   do {
        randomNumber = (rand() % 100) + 1; // Random number between 1 and 100
        noOfGuesses = 0;

        printf("\n=== Welcome to the Guess the Number Game! ===\n");

    do {
        printf("Guess the number between 1 and 100: ");
        scanf("%d", &userGuess);
        noOfGuesses++; // Increment guess count

        if (userGuess > randomNumber) {
            printf("Too high! Try again.\n");
        } else if (userGuess < randomNumber) {
            printf("Too low! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number %d correctly!\n", randomNumber);
            printf("You guessed the number in %d attempts.\n", noOfGuesses);
        }
       } while (userGuess != randomNumber);

        printf("\nDo you want to play again? (y/n): ");
        scanf(" %c", &choice); // Notice the space before %c (to ignore newline)

     } while (choice == 'y' || choice == 'Y');

    printf("\nThanks for playing! Goodbye 👋\n");

    return 0;
}