#include <stdio.h>

int main() {
    int sz1, sz2;
    int x[50], y[50], res[100];
    
    printf("Size of first array: ");
    scanf("%d", &sz1);
    printf("First elements: ");
    for (int i = 0; i < sz1; i++) scanf("%d", &x[i]);
    
    printf("Size of second array: ");
    scanf("%d", &sz2);
    printf("Second elements: ");
    for (int i = 0; i < sz2; i++) scanf("%d", &y[i]);
    
    int ptr1 = 0, ptr2 = 0, out = 0;
    while (ptr1 < sz1 && ptr2 < sz2) {
        if (x[ptr1] < y[ptr2]) {
            res[out++] = x[ptr1++];
        } else {
            res[out++] = y[ptr2++];
        }
    }
    
    while (ptr1 < sz1) res[out++] = x[ptr1++];
    while (ptr2 < sz2) res[out++] = y[ptr2++];
    
    printf("Merged: ");
    for (int i = 0; i < sz1 + sz2; i++) {
        printf("%d ", res[i]);
    }
    printf("\n");
    return 0;
}
