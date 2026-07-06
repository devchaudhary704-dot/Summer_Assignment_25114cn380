#include <stdio.h>

int main() {
    int choice, pin;
    float balance = 5000.00, amount;

    printf("Enter your PIN: ");
    scanf("%d", &pin);

    if (pin != 1234) {
        printf("Wrong PIN! Exiting...\n");
        return 1;
    }

    do {
        printf("\n===== ATM Menu =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Your balance is: Rs. %.2f\n", balance);
                break;
            case 2:
                printf("Enter deposit amount: ");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("Deposited successfully. New balance: Rs. %.2f\n", balance);
                } else {
                    printf("Invalid amount!\n");
                }
                break;
            case 3:
                printf("Enter withdrawal amount: ");
                scanf("%f", &amount);
                if (amount > balance)
                    printf("Insufficient balance!\n");
                else if (amount <= 0)
                    printf("Invalid amount!\n");
                else {
                    balance -= amount;
                    printf("Withdrawn successfully. New balance: Rs. %.2f\n", balance);
                }
                break;
            case 4:
                printf("Thank you for using our ATM!\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 4);

    return 0;
}
