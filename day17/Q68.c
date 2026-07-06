#include <stdio.h>

int main() {
    int m, n, i, j, found;

    printf("Enter size of array 1: ");
    scanf("%d", &m);
    int arr1[m];
    printf("Enter elements:\n");
    for (i = 0; i < m; i++)
        scanf("%d", &arr1[i]);

    printf("Enter size of array 2: ");
    scanf("%d", &n);
    int arr2[n];
    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr2[i]);

    printf("Common elements: ");
    found = 0;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                found = 1;
                break;
            }
        }
    }

    if (!found)
        printf("None");
    printf("\n");

    return 0;
}
