#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Duplicate elements: ");
    int hasDup = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                // check if already printed
                int already = 0;
                for (int k = 0; k < i; k++) {
                    if (arr[k] == arr[i]) {
                        already = 1;
                        break;
                    }
                }
                if (!already) {
                    printf("%d ", arr[i]);
                    hasDup = 1;
                }
                break;
            }
        }
    }

    if (!hasDup)
        printf("None");
    printf("\n");

    return 0;
}
