#include <stdio.h>

int maximum(int x, int y) {
    if (x > y)
        return x;
    else
        return y;
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int max = maximum(a, b);
    printf("Maximum is %d\n", max);

    return 0;
}
