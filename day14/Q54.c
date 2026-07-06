#include <stdio.h>

int main() {
    int n, key, count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to find frequency: ");
    scanf("%d", &key);

    int i = 0;
    while (i < n) {
        if (arr[i] == key)
            count++;
        i++;
    }

    printf("Frequency of %d = %d\n", key, count);

    return 0;
}
