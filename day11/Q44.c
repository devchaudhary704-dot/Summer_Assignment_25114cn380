#include <stdio.h>

long factorial(int n) {
    long fact = 1;
    int i;
    for (i = 1; i <= n; i++)
        fact = fact * i;
    return fact;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Factorial not defined for negative numbers\n");
    else
        printf("Factorial of %d = %ld\n", n, factorial(n));

    return 0;
}
