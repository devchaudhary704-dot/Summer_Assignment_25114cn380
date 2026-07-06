#include <stdio.h>
#include <string.h>

struct Record {
    char name[50];
    char number[20];
};

int main() {
    struct Record db[100];
    int size = 0, select;
    char search_name[50];
    
    do {
        printf("\n--- Contact Book ---\n");
        printf("1. Add\n2. Search\n3. Delete\n4. List\n5. Exit\n");
        printf("Choice: ");
        scanf("%d", &select);
        
        switch (select) {
            case 1:
                printf("Name: ");
                scanf("%s", db[size].name);
                printf("Number: ");
                scanf("%s", db[size].number);
                size++;
                printf("Contact saved.\n");
                break;
            case 2:
                printf("Search Name: ");
                scanf("%s", search_name);
                int found = 0;
                for (int i = 0; i < size; i++) {
                    if (strcmp(db[i].name, search_name) == 0) {
                        printf("Name: %s, Phone: %s\n", db[i].name, db[i].number);
                        found = 1;
                        break;
                    }
                }
                if (!found) printf("No record.\n");
                break;
            case 3:
                printf("Delete Name: ");
                scanf("%s", search_name);
                found = 0;
                for (int i = 0; i < size; i++) {
                    if (strcmp(db[i].name, search_name) == 0) {
                        for (int j = i; j < size - 1; j++) {
                            db[j] = db[j + 1];
                        }
                        size--;
                        printf("Deleted.\n");
                        found = 1;
                        break;
                    }
                }
                if (!found) printf("No record.\n");
                break;
            case 4:
                for (int i = 0; i < size; i++) {
                    printf("%d. %s : %s\n", i + 1, db[i].name, db[i].number);
                }
                break;
        }
    } while (select != 5);
    
    return 0;
}
