#include <stdio.h>

int main() {
    int status[10] = {0};
    int select, id;
    
    do {
        printf("\n--- Ticket Booking ---\n");
        printf("1. View Seats\n2. Reserve\n3. Cancel\n4. Quit\n");
        printf("Enter option: ");
        scanf("%d", &select);
        
        switch (select) {
            case 1:
                for (int i = 0; i < 10; i++) {
                    printf("Seat %d: %s | ", i + 1, status[i] ? "Reserved" : "Open");
                }
                printf("\n");
                break;
            case 2:
                printf("Seat choice (1-10): ");
                scanf("%d", &id);
                if (id < 1 || id > 10) {
                    printf("Invalid seat!\n");
                } else if (status[id - 1] == 1) {
                    printf("Taken.\n");
                } else {
                    status[id - 1] = 1;
                    printf("Reserved seat %d\n", id);
                }
                break;
            case 3:
                printf("Seat to cancel (1-10): ");
                scanf("%d", &id);
                if (id < 1 || id > 10) {
                    printf("Invalid seat!\n");
                } else if (status[id - 1] == 0) {
                    printf("Not reserved.\n");
                } else {
                    status[id - 1] = 0;
                    printf("Cancelled seat %d\n", id);
                }
                break;
        }
    } while (select != 4);
    
    return 0;
}
