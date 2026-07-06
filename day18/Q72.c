#include <stdio.h>

int main() {
    int num, temp;
    printf("Enter size: ");
    scanf("%d", &num);
    
    int vals[100];
    printf("Enter numbers: ");
    for (int i = 0; i < num; i++) {
        scanf("%d", &vals[i]);
    }
    
    for (int i = 0; i < num - 1; i++) {
        for (int j = i + 1; j < num; j++) {
            if (vals[i] < vals[j]) {
                temp = vals[i];
                vals[i] = vals[j];
                vals[j] = temp;
            }
        }
    }
    
    printf("Sorted in descending order: ");
    for (int i = 0; i < num; i++) {
        printf("%d ", vals[i]);
    }
    printf("\n");
    return 0;
}
