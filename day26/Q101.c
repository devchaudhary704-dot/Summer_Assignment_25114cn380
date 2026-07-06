#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num, guess, attempts = 0;

    srand(time(0));
    num = rand() % 100 + 1;

    printf("=== Number Guessing Game ===\n");
    printf("I have picked a number between 1 and 100.\n");
    printf("Try to guess it!\n\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > num)
            printf("Too high! Try again.\n");
        else if (guess < num)
            printf("Too low! Try again.\n");
        else
            printf("\nCongratulations! You guessed it in %d attempts!\n", attempts);

    } while (guess != num);

    return 0;
}
