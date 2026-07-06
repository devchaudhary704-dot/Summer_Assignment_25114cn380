#include <stdio.h>
#include <string.h>

int main() {
    char titles[100][50];
    int ids[100];
    int status[100]; // 1: available, 0: issued
    int count = 0, opt, target_id;
    
    do {
        printf("\n--- Mini Library (Parallel Arrays) ---\n");
        printf("1. Add\n2. Issue\n3. Return\n4. Display\n5. Exit\n");
        printf("Choice: ");
        scanf("%d", &opt);
        
        switch (opt) {
            case 1:
                printf("Book Title: ");
                scanf("%s", titles[count]);
                printf("Book ID: ");
                scanf("%d", &ids[count]);
                status[count] = 1;
                count++;
                printf("Book registered.\n");
                break;
            case 2:
                printf("Book ID to issue: ");
                scanf("%d", &target_id);
                int ok = 0;
                for (int i = 0; i < count; i++) {
                    if (ids[i] == target_id) {
                        if (status[i] == 1) {
                            status[i] = 0;
                            printf("Book issued successfully!\n");
                        } else {
                            printf("Already issued.\n");
                        }
                        ok = 1;
                        break;
                    }
                }
                if (!ok) printf("Book ID not registered.\n");
                break;
            case 3:
                printf("Book ID to return: ");
                scanf("%d", &target_id);
                ok = 0;
                for (int i = 0; i < count; i++) {
                    if (ids[i] == target_id) {
                        if (status[i] == 0) {
                            status[i] = 1;
                            printf("Book returned!\n");
                        } else {
                            printf("Book was not issued.\n");
                        }
                        ok = 1;
                        break;
                    }
                }
                if (!ok) printf("Book ID not registered.\n");
                break;
            case 4:
                for (int i = 0; i < count; i++) {
                    printf("ID: %d | Name: %s | Status: %s\n", ids[i], titles[i], status[i] ? "Available" : "Issued");
                }
                break;
        }
    } while (opt != 5);
    
    return 0;
}
