#include <stdio.h>

int main() {
    int n, even = 0, odd = 0;

    printf("How many elements? ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even elements: %d\n", even);
    printf("Odd elements: %d\n", odd);

    return 0;
}
