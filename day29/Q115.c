#include <stdio.h>
#include <string.h>

int main() {
    char first[100], second[100], mix[200];
    int action, len, match;
    
    do {
        printf("\n--- Strings ---\n");
        printf("1. Length\n2. Reverse\n3. Palindrome\n4. Concat\n5. Compare\n6. Exit\n");
        printf("Action: ");
        scanf("%d", &action);
        
        switch (action) {
            case 1:
                printf("String: ");
                scanf("%s", first);
                printf("Size = %d\n", (int)strlen(first));
                break;
            case 2:
                printf("String: ");
                scanf("%s", first);
                len = strlen(first);
                printf("Reverse: ");
                for (int i = len - 1; i >= 0; i--) printf("%c", first[i]);
                printf("\n");
                break;
            case 3:
                printf("String: ");
                scanf("%s", first);
                len = strlen(first);
                match = 1;
                for (int i = 0; i < len / 2; i++) {
                    if (first[i] != first[len - 1 - i]) {
                        match = 0;
                        break;
                    }
                }
                if (match) printf("Palindrome\n");
                else printf("Not palindrome\n");
                break;
            case 4:
                printf("String 1: ");
                scanf("%s", first);
                printf("String 2: ");
                scanf("%s", second);
                strcpy(mix, first);
                strcat(mix, second);
                printf("Combined: %s\n", mix);
                break;
            case 5:
                printf("String 1: ");
                scanf("%s", first);
                printf("String 2: ");
                scanf("%s", second);
                int c = strcmp(first, second);
                if (c == 0) printf("Equal\n");
                else printf("Not equal\n");
                break;
        }
    } while (action != 6);
    
    return 0;
}
