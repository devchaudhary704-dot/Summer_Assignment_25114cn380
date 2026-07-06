#include <stdio.h>

int main() {
    int m, n, i, j;

    printf("Enter size of array 1: ");
    scanf("%d", &m);
    int a[m];
    printf("Enter elements: ");
    for (i = 0; i < m; i++)
        scanf("%d", &a[i]);

    printf("Enter size of array 2: ");
    scanf("%d", &n);
    int b[n];
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &b[i]);

    int result[m + n];
    int size = 0;

    // add all from first array
    for (i = 0; i < m; i++)
        result[size++] = a[i];

    // add from second array if not already present
    for (i = 0; i < n; i++) {
        int exists = 0;
        for (j = 0; j < size; j++) {
            if (b[i] == result[j]) {
                exists = 1;
                break;
            }
        }
        if (!exists)
            result[size++] = b[i];
    }

    printf("Union: ");
    for (i = 0; i < size; i++)
        printf("%d ", result[i]);
    printf("\n");

    return 0;
}
