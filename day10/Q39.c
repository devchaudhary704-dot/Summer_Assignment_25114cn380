#include <stdio.h>

int main() {
    int r, c;
    for (r = 1; r <= 5; r++) {
        for (c = 1; c <= 5 - r; c++) {
            printf(" ");
        }
        for (c = 1; c <= r; c++) {
            printf("%d", c);
        }
        for (c = r - 1; c >= 1; c--) {
            printf("%d", c);
        }
        printf("\n");
    }
    return 0;
}
