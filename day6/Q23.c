#include <stdio.h>

int main() {
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;
    while (temp > 0) {
        if (temp & 1)
            count++;
        temp = temp >> 1;
    }

    printf("Number of set bits in %d = %d\n", num, count);
    return 0;
}
