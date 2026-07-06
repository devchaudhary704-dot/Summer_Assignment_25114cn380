#include <stdio.h>

int main() {
    int choice;
    float x, y;
    int a, b;
    
    do {
        printf("\n--- Operations ---\n");
        printf("1. Add\n2. Sub\n3. Mul\n4. Div\n5. Mod\n6. Exit\n");
        printf("Enter: ");
        scanf("%d", &choice);
        
        if (choice >= 1 && choice <= 4) {
            printf("Numbers: ");
            scanf("%f %f", &x, &y);
        } else if (choice == 5) {
            printf("Integers: ");
            scanf("%d %d", &a, &b);
        }
        
        switch (choice) {
            case 1: printf("Result = %.2f\n", x + y); break;
            case 2: printf("Result = %.2f\n", x - y); break;
            case 3: printf("Result = %.2f\n", x * y); break;
            case 4: 
                if (y != 0) printf("Result = %.2f\n", x / y);
                else printf("Zero error\n");
                break;
            case 5: 
                if (b != 0) printf("Result = %d\n", a % b);
                else printf("Zero error\n");
                break;
        }
    } while (choice != 6);
    
    return 0;
}
