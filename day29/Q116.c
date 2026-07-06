#include <stdio.h>
#include <string.h>

struct Product {
    char title[50];
    int qty;
    float cost;
};

int main() {
    struct Product list[100];
    int total = 0, select;
    char search_title[50];
    
    do {
        printf("\n--- Inventory ---\n");
        printf("1. Add\n2. Search\n3. Update\n4. List\n5. Exit\n");
        printf("Select: ");
        scanf("%d", &select);
        
        switch (select) {
            case 1:
                printf("Name: ");
                scanf("%s", list[total].title);
                printf("Qty: ");
                scanf("%d", &list[total].qty);
                printf("Cost: ");
                scanf("%f", &list[total].cost);
                total++;
                printf("Saved.\n");
                break;
            case 2:
                printf("Search Name: ");
                scanf("%s", search_title);
                int found = 0;
                for (int i = 0; i < total; i++) {
                    if (strcmp(list[i].title, search_title) == 0) {
                        printf("Product: %s | Stock: %d | Cost: %.2f\n", list[i].title, list[i].qty, list[i].cost);
                        found = 1;
                        break;
                    }
                }
                if (!found) printf("No record.\n");
                break;
            case 3:
                printf("Update Name: ");
                scanf("%s", search_title);
                found = 0;
                for (int i = 0; i < total; i++) {
                    if (strcmp(list[i].title, search_title) == 0) {
                        printf("New quantity: ");
                        scanf("%d", &list[i].qty);
                        printf("Updated.\n");
                        found = 1;
                        break;
                    }
                }
                if (!found) printf("No record.\n");
                break;
            case 4:
                for (int i = 0; i < total; i++) {
                    printf("%d. %s (Qty: %d, Cost: %.2f)\n", i + 1, list[i].title, list[i].qty, list[i].cost);
                }
                break;
        }
    } while (select != 5);
    
    return 0;
}
