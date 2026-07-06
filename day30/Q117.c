#include <stdio.h>
#include <string.h>

int main() {
    char student_names[50][50];
    int student_rolls[50];
    float student_marks[50];
    int total_students = 0, option, query_roll;
    
    do {
        printf("\n--- Student Records (Parallel Arrays) ---\n");
        printf("1. Add\n2. List All\n3. Find Roll\n4. Exit\n");
        printf("Select: ");
        scanf("%d", &option);
        
        switch (option) {
            case 1:
                printf("Name: ");
                scanf("%s", student_names[total_students]);
                printf("Roll: ");
                scanf("%d", &student_rolls[total_students]);
                printf("Marks: ");
                scanf("%f", &student_marks[total_students]);
                total_students++;
                printf("Added student.\n");
                break;
            case 2:
                for (int idx = 0; idx < total_students; idx++) {
                    printf("Roll: %d | Name: %s | Marks: %.2f\n", student_rolls[idx], student_names[idx], student_marks[idx]);
                }
                break;
            case 3:
                printf("Roll to search: ");
                scanf("%d", &query_roll);
                int found = 0;
                for (int idx = 0; idx < total_students; idx++) {
                    if (student_rolls[idx] == query_roll) {
                        printf("Found: Name: %s, Marks: %.2f\n", student_names[idx], student_marks[idx]);
                        found = 1;
                        break;
                    }
                }
                if (!found) printf("Not found.\n");
                break;
        }
    } while (option != 4);
    
    return 0;
}
