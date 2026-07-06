#include <stdio.h>
#include <string.h>

int main() {
    char names[100][50];
    int ids[100];
    float salary[100];
    int total = 0, select, target;
    
    do {
        printf("\n--- Mini Employee Management ---\n");
        printf("1. Add\n2. List\n3. Find ID\n4. Exit\n");
        printf("Select: ");
        scanf("%d", &select);
        
        switch (select) {
            case 1:
                printf("Name: ");
                scanf("%s", names[total]);
                printf("ID: ");
                scanf("%d", &ids[total]);
                printf("Salary: ");
                scanf("%f", &salary[total]);
                total++;
                printf("Added employee.\n");
                break;
            case 2:
                for (int i = 0; i < total; i++) {
                    printf("ID: %d | Name: %s | Salary: %.2f\n", ids[i], names[i], salary[i]);
                }
                break;
            case 3:
                printf("Enter ID: ");
                scanf("%d", &target);
                int found = 0;
                for (int i = 0; i < total; i++) {
                    if (ids[i] == target) {
                        printf("Name: %s, Salary: %.2f\n", names[i], salary[i]);
                        found = 1;
                        break;
                    }
                }
                if (!found) printf("No employee found.\n");
                break;
        }
    } while (select != 4);
    
    return 0;
}
