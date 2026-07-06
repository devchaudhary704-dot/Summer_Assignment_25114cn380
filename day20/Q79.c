#include <stdio.h>

int main() {
    int table[3][3];
    
    printf("Enter 3x3 matrix values:\n");
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            scanf("%d", &table[row][col]);
        }
    }
    
    for (int row = 0; row < 3; row++) {
        int sum = 0;
        for (int col = 0; col < 3; col++) {
            sum += table[row][col];
        }
        printf("Row %d sum = %d\n", row + 1, sum);
    }
    return 0;
}
