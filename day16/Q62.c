#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int maxFreq = 0, maxElem = arr[0];

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }
        if (count > maxFreq) {
            maxFreq = count;
            maxElem = arr[i];
        }
    }

    printf("Element %d has maximum frequency = %d\n", maxElem, maxFreq);

    return 0;
}
