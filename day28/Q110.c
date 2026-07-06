#include <stdio.h>
#include <string.h>

struct Account {
    int id;
    char owner[50];
    float bal;
};

int main() {
    struct Account user;
    user.id = 0;
    int choice;
    float sum;
    
    do {
        printf("\n--- Bank System ---\n");
        printf("1. Create\n2. Deposit\n3. Withdraw\n4. Balance\n5. Exit\n");
        printf("Option: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Acc ID: ");
                scanf("%d", &user.id);
                printf("Owner name: ");
                scanf("%s", user.owner);
                printf("Deposit: ");
                scanf("%f", &user.bal);
                printf("Account open!\n");
                break;
            case 2:
                if (user.id == 0) {
                    printf("No account exists.\n");
                    break;
                }
                printf("Amount to deposit: ");
                scanf("%f", &sum);
                user.bal += sum;
                printf("Current balance: %.2f\n", user.bal);
                break;
            case 3:
                if (user.id == 0) {
                    printf("No account exists.\n");
                    break;
                }
                printf("Amount to withdraw: ");
                scanf("%f", &sum);
                if (sum <= user.bal) {
                    user.bal -= sum;
                    printf("Withdrawn. Remaining: %.2f\n", user.bal);
                } else {
                    printf("Low balance.\n");
                }
                break;
            case 4:
                if (user.id == 0) {
                    printf("No account exists.\n");
                    break;
                }
                printf("Owner: %s | Bal: %.2f\n", user.owner, user.bal);
                break;
        }
    } while (choice != 5);
    
    return 0;
}
