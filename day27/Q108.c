#include <stdio.h>

int main() {
    char name[50];
    int marks[5], i, total = 0;
    float per;
    char grade;
    char *subjects[] = {"Maths", "Physics", "Chemistry", "English", "Computer"};

    printf("=== Marksheet Generation ===\n\n");
    printf("Enter student name: ");
    scanf("%s", name);

    for (i = 0; i < 5; i++) {
        printf("Enter marks for %s (out of 100): ", subjects[i]);
        scanf("%d", &marks[i]);
    }

    for (i = 0; i < 5; i++)
        total += marks[i];

    per = total / 5.0;

    if (per >= 90) grade = 'A';
    else if (per >= 80) grade = 'B';
    else if (per >= 70) grade = 'C';
    else if (per >= 60) grade = 'D';
    else if (per >= 40) grade = 'E';
    else grade = 'F';

    printf("\n========== MARKSHEET ==========\n");
    printf("Name: %s\n\n", name);
    printf("%-15s %s\n", "Subject", "Marks");
    printf("------------------------------\n");
    for (i = 0; i < 5; i++)
        printf("%-15s %d\n", subjects[i], marks[i]);
    printf("------------------------------\n");
    printf("Total          : %d / 500\n", total);
    printf("Percentage     : %.2f%%\n", per);
    printf("Grade          : %c\n", grade);
    printf("Result         : %s\n", (per >= 40) ? "PASS" : "FAIL");
    printf("===============================\n");

    return 0;
}
