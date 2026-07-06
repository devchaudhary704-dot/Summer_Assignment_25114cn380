#include <stdio.h>
#include <math.h>

int main() {
    long long bin;
    int dec = 0, pos = 0;

    printf("Enter binary number: ");
    scanf("%lld", &bin);

    while (bin != 0) {
        int rem = bin % 10;
        dec += rem * pow(2, pos);
        bin /= 10;
        pos++;
    }

    printf("Decimal: %d\n", dec);
    return 0;
}
