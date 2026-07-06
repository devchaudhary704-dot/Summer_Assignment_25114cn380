#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee emp[100];
    int count = 0, ch, i;

    do {
        printf("\n== Employee Management ==\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Exit\n");
        printf("Enter option: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                if (count >= 100) {
                    printf("Database full!\n");
                    break;
                }
                printf("Enter employee name: ");
                scanf("%s", emp[count].name);
                printf("Enter employee ID: ");
                scanf("%d", &emp[count].id);
                printf("Enter salary: ");
                scanf("%f", &emp[count].salary);
                count++;
                printf("Employee added successfully.\n");
                break;

            case 2:
                if (count == 0) {
                    printf("No employees to display.\n");
                    break;
                }
                printf("\n%-5s %-20s %-10s\n", "ID", "Name", "Salary");
                for (i = 0; i < count; i++)
                    printf("%-5d %-20s %-10.2f\n", emp[i].id, emp[i].name, emp[i].salary);
                break;

            case 3:
                printf("Goodbye!\n");
                break;

            default:
                printf("Wrong option, try again.\n");
        }
    } while (ch != 3);

    return 0;
}
