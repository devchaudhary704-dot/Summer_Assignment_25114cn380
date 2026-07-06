#include <stdio.h>
#include <string.h>

struct Book {
    char title[50];
    char author[50];
    int quantity;
};

int main() {
    struct Book list[100];
    int count = 0, opt;
    char query[50];
    
    do {
        printf("\n--- Library ---\n");
        printf("1. Add Book\n2. Search Book\n3. Issue Book\n4. Return Book\n5. Exit\n");
        printf("Choice: ");
        scanf("%d", &opt);
        
        switch (opt) {
            case 1:
                printf("Title: ");
                scanf("%s", list[count].title);
                printf("Author: ");
                scanf("%s", list[count].author);
                printf("Quantity: ");
                scanf("%d", &list[count].quantity);
                count++;
                printf("Added!\n");
                break;
            case 2:
                printf("Title to search: ");
                scanf("%s", query);
                int found = 0;
                for (int i = 0; i < count; i++) {
                    if (strcmp(list[i].title, query) == 0) {
                        printf("Title: %s, Author: %s, Qty: %d\n", list[i].title, list[i].author, list[i].quantity);
                        found = 1;
                        break;
                    }
                }
                if (!found) printf("Not found.\n");
                break;
            case 3:
                printf("Title to issue: ");
                scanf("%s", query);
                found = 0;
                for (int i = 0; i < count; i++) {
                    if (strcmp(list[i].title, query) == 0) {
                        if (list[i].quantity > 0) {
                            list[i].quantity--;
                            printf("Issued. Stock left: %d\n", list[i].quantity);
                        } else {
                            printf("Out of stock.\n");
                        }
                        found = 1;
                        break;
                    }
                }
                if (!found) printf("Not found.\n");
                break;
            case 4:
                printf("Title to return: ");
                scanf("%s", query);
                found = 0;
                for (int i = 0; i < count; i++) {
                    if (strcmp(list[i].title, query) == 0) {
                        list[i].quantity++;
                        printf("Returned. Total stock: %d\n", list[i].quantity);
                        found = 1;
                        break;
                    }
                }
                if (!found) printf("Not found.\n");
                break;
        }
    } while (opt != 5);
    
    return 0;
}
