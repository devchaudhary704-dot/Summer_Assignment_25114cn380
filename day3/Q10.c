#include <stdio.h>

int main() {
    int low, high;
    printf("Enter lower and upper range: ");
    scanf("%d %d", &low, &high);

    printf("Prime numbers between %d and %d:\n", low, high);

    for (int num = low; num <= high; num++) {
        if (num < 2) continue;

        int isPrime = 1;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            printf("%d ", num);
    }
    printf("\n");

    return 0;
}
