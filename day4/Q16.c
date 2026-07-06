#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int temp = num, digits = 0, sum = 0;

    while (temp) {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp) {
        int d = temp % 10;
        sum += pow(d, digits);
        temp /= 10;
    }

    return sum == num;
}

int main() {
    int low, high;
    printf("Enter range (low high): ");
    scanf("%d %d", &low, &high);

    printf("Armstrong numbers between %d and %d:\n", low, high);
    for (int i = low; i <= high; i++) {
        if (isArmstrong(i))
            printf("%d ", i);
    }
    printf("\n");

    return 0;
}
