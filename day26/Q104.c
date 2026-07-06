#include <stdio.h>

int main() {
    int ans, score = 0;

    printf("====== Quiz Application ======\n\n");

    printf("Q1. What is the size of int in C (in bytes)?\n");
    printf("  1) 1\n  2) 2\n  3) 4\n  4) 8\n");
    printf("Your answer: ");
    scanf("%d", &ans);
    if (ans == 3) { printf("Correct!\n\n"); score++; }
    else printf("Wrong! Correct answer is 3) 4\n\n");

    printf("Q2. Which function is used to print output in C?\n");
    printf("  1) cout\n  2) printf\n  3) print\n  4) echo\n");
    printf("Your answer: ");
    scanf("%d", &ans);
    if (ans == 2) { printf("Correct!\n\n"); score++; }
    else printf("Wrong! Correct answer is 2) printf\n\n");

    printf("Q3. Which header file is required for printf?\n");
    printf("  1) stdlib.h\n  2) conio.h\n  3) stdio.h\n  4) math.h\n");
    printf("Your answer: ");
    scanf("%d", &ans);
    if (ans == 3) { printf("Correct!\n\n"); score++; }
    else printf("Wrong! Correct answer is 3) stdio.h\n\n");

    printf("Q4. What does && operator represent?\n");
    printf("  1) OR\n  2) NOT\n  3) AND\n  4) XOR\n");
    printf("Your answer: ");
    scanf("%d", &ans);
    if (ans == 3) { printf("Correct!\n\n"); score++; }
    else printf("Wrong! Correct answer is 3) AND\n\n");

    printf("Q5. Which loop runs at least once?\n");
    printf("  1) for\n  2) while\n  3) do-while\n  4) none\n");
    printf("Your answer: ");
    scanf("%d", &ans);
    if (ans == 3) { printf("Correct!\n\n"); score++; }
    else printf("Wrong! Correct answer is 3) do-while\n\n");

    printf("=== Results ===\n");
    printf("Score: %d / 5\n", score);
    if (score == 5)
        printf("Excellent!\n");
    else if (score >= 3)
        printf("Good job!\n");
    else
        printf("Better luck next time!\n");

    return 0;
}
