#include <stdio.h>

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int first = -1, second = -1;

    for (int i = 0; i < n; i++) {
        if (first == -1 || arr[i] > arr[first]) {
            second = first;
            first = i;
        } else if (arr[i] != arr[first] && (second == -1 || arr[i] > arr[second])) {
            second = i;
        }
    }

    if (second == -1)
        printf("No second largest element\n");
    else
        printf("Second largest element is %d\n", arr[second]);

    return 0;
}
