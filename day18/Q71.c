#include <stdio.h>

int main() {
    int total, key, found = 0;
    int first, last, middle;
    
    printf("Enter limit: ");
    scanf("%d", &total);
    
    int items[100];
    printf("Enter sorted elements: ");
    for (int idx = 0; idx < total; idx++) {
        scanf("%d", &items[idx]);
    }
    
    printf("Enter element to find: ");
    scanf("%d", &key);
    
    first = 0;
    last = total - 1;
    while (first <= last) {
        middle = (first + last) / 2;
        if (items[middle] == key) {
            printf("Found at index %d\n", middle);
            found = 1;
            break;
        } else if (items[middle] < key) {
            first = middle + 1;
        } else {
            last = middle - 1;
        }
    }
    
    if (!found) {
        printf("Not present in array\n");
    }
    return 0;
}
