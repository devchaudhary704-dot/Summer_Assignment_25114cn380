#include <stdio.h>

int main() {
    int a, b, gcd;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // finding gcd first
    int x = a, y = b;
    while (y != 0) {
        int t = y;
        y = x % y;
        x = t;
    }
    gcd = x;

    int lcm = (a * b) / gcd;
    printf("LCM of %d and %d = %d\n", a, b, lcm);

    return 0;
}
