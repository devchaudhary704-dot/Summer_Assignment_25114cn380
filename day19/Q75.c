#include <stdio.h>

int main() {
    int m[3][3], t[3][3];
    
    printf("Enter 3x3 matrix:\n");
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            scanf("%d", &m[row][col]);
        }
    }
    
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            t[col][row] = m[row][col];
        }
    }
    
    printf("Transpose matrix is:\n");
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            printf("%d ", t[row][col]);
        }
        printf("\n");
    }
    return 0;
}
