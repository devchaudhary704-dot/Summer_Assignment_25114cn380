#include <stdio.h>

void fibonacci(int n) {
    int a = 0, b = 1, next;
    printf("%d %d ", a, b);
    for (int i = 2; i < n; i++) {
        next = a + b;
        printf("%d ", next);
        a = b;
        b = next;
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    if (n <= 0)
        printf("Please enter a positive number\n");
    else if (n == 1)
        printf("0\n");
    else
        fibonacci(n);

    return 0;
}
