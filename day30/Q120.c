#include <stdio.h>
#include <string.h>

void show_menu() {
    printf("\n--- Student Grades Utility ---\n");
    printf("1. Register Student\n");
    printf("2. List Grades\n");
    printf("3. Calculate Average\n");
    printf("4. Find Top Grade\n");
    printf("5. Exit\n");
    printf("Select option: ");
}

int main() {
    char names[50][50];
    int marks[50];
    int count = 0, choice;
    
    do {
        show_menu();
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Name: ");
                scanf("%s", names[count]);
                printf("Marks: ");
                scanf("%d", &marks[count]);
                count++;
                printf("Marks saved.\n");
                break;
            case 2:
                if (count == 0) {
                    printf("No data.\n");
                } else {
                    for (int i = 0; i < count; i++) {
                        printf("Name: %s | Marks: %d\n", names[i], marks[i]);
                    }
                }
                break;
            case 3:
                if (count == 0) {
                    printf("No data.\n");
                } else {
                    float sum = 0;
                    for (int i = 0; i < count; i++) sum += marks[i];
                    printf("Average: %.2f\n", sum / count);
                }
                break;
            case 4:
                if (count == 0) {
                    printf("No data.\n");
                } else {
                    int top_idx = 0;
                    for (int i = 1; i < count; i++) {
                        if (marks[i] > marks[top_idx]) {
                            top_idx = i;
                        }
                    }
                    printf("Top Scorer: %s with %d marks.\n", names[top_idx], marks[top_idx]);
                }
                break;
        }
    } while (choice != 5);
    
    return 0;
}
