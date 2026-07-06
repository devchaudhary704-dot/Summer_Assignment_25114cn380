#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s[50];
    int n = 0, choice, i, rollSearch, found;

    do {
        printf("\n--- Student Record Management ---\n");
        printf("1. Add Student\n");
        printf("2. Display All\n");
        printf("3. Search by Roll Number\n");
        printf("4. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter name: ");
            scanf("%s", s[n].name);
            printf("Enter roll number: ");
            scanf("%d", &s[n].roll);
            printf("Enter marks: ");
            scanf("%f", &s[n].marks);
            n++;
            printf("Student added!\n");
            break;

        case 2:
            if (n == 0) {
                printf("No records found.\n");
                break;
            }
            printf("\n%-15s %-10s %-10s\n", "Name", "Roll", "Marks");
            printf("------------------------------------\n");
            for (i = 0; i < n; i++) {
                printf("%-15s %-10d %-10.2f\n", s[i].name, s[i].roll, s[i].marks);
            }
            break;

        case 3:
            printf("Enter roll number to search: ");
            scanf("%d", &rollSearch);
            found = 0;
            for (i = 0; i < n; i++) {
                if (s[i].roll == rollSearch) {
                    printf("Found: %s | Roll: %d | Marks: %.2f\n", s[i].name, s[i].roll, s[i].marks);
                    found = 1;
                    break;
                }
            }
            if (!found)
                printf("Student not found.\n");
            break;

        case 4:
            printf("Exiting...\n");
            break;

        default:
            printf("Invalid choice!\n");
        }
    } while (choice != 4);

    return 0;
}
