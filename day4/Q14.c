#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int a = 0, b = 1, c;
    if (n == 1) {
        printf("The %dth Fibonacci term = %d\n", n, a);
        return 0;
    }

    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    printf("The %dth Fibonacci term = %d\n", n, b);
    return 0;
}
