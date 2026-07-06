#include <stdio.h>
#include <string.h>

int main() {
    int total;
    char items[50][50], temp[50];
    
    printf("Count: ");
    scanf("%d", &total);
    
    printf("Enter strings:\n");
    for (int i = 0; i < total; i++) {
        scanf("%s", items[i]);
    }
    
    for (int i = 0; i < total - 1; i++) {
        for (int j = i + 1; j < total; j++) {
            if (strcmp(items[i], items[j]) > 0) {
                strcpy(temp, items[i]);
                strcpy(items[i], items[j]);
                strcpy(items[j], temp);
            }
        }
    }
    
    printf("Sorted:\n");
    for (int i = 0; i < total; i++) {
        printf("%s\n", items[i]);
    }
    return 0;
}
