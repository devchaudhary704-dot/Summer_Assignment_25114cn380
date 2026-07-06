#include <stdio.h>

int main() {
    int arr[100], count = 0, opt, val, index;
    
    do {
        printf("\n--- Array Menu ---\n");
        printf("1. Insert\n2. Delete\n3. Search\n4. Show\n5. Sort\n6. Exit\n");
        printf("Opt: ");
        scanf("%d", &opt);
        
        switch (opt) {
            case 1:
                printf("Value and index: ");
                scanf("%d %d", &val, &index);
                if (index < 0 || index > count) {
                    printf("Out of bounds\n");
                } else {
                    for (int i = count; i > index; i--) {
                        arr[i] = arr[i - 1];
                    }
                    arr[index] = val;
                    count++;
                }
                break;
            case 2:
                printf("Index to delete: ");
                scanf("%d", &index);
                if (index < 0 || index >= count) {
                    printf("Out of bounds\n");
                } else {
                    for (int i = index; i < count - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    count--;
                }
                break;
            case 3:
                printf("Value to search: ");
                scanf("%d", &val);
                int found = -1;
                for (int i = 0; i < count; i++) {
                    if (arr[i] == val) {
                        found = i;
                        break;
                    }
                }
                if (found != -1) printf("Found at %d\n", found);
                else printf("Not found\n");
                break;
            case 4:
                for (int i = 0; i < count; i++) printf("%d ", arr[i]);
                printf("\n");
                break;
            case 5:
                for (int i = 0; i < count - 1; i++) {
                    for (int j = i + 1; j < count; j++) {
                        if (arr[i] > arr[j]) {
                            int t = arr[i];
                            arr[i] = arr[j];
                            arr[j] = t;
                        }
                    }
                }
                printf("Sorted.\n");
                break;
        }
    } while (opt != 6);
    
    return 0;
}
