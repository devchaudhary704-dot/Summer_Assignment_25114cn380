#include <stdio.h>

int main() {
    int age;
    char name[50];

    printf("--- Voting Eligibility System ---\n\n");
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("\n%s, you are eligible to vote.\n", name);
        if (age >= 18 && age <= 25)
            printf("You are a first-time voter. Make your vote count!\n");
    } else {
        printf("\n%s, you are not eligible to vote.\n", name);
        printf("You need to wait %d more year(s).\n", 18 - age);
    }

    return 0;
}
