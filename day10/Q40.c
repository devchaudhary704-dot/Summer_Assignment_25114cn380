#include <stdio.h>

int main() {
    int r, c;
    for (r = 1; r <= 5; r++) {
        for (c = 1; c <= 5 - r; c++) {
            printf(" ");
        }
        for (c = 0; c < r; c++) {
            printf("%c", 'A' + c);
        }
        for (c = r - 2; c >= 0; c--) {
            printf("%c", 'A' + c);
        }
        printf("\n");
    }
    return 0;
}
