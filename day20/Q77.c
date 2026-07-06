#include <stdio.h>

int main() {
    int matrix1[3][3], matrix2[3][3], prod[3][3];
    
    printf("Enter matrix 1:\n");
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            scanf("%d", &matrix1[r][c]);
        }
    }
    
    printf("Enter matrix 2:\n");
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            scanf("%d", &matrix2[r][c]);
        }
    }
    
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            prod[r][c] = 0;
            for (int k = 0; k < 3; k++) {
                prod[r][c] += matrix1[r][k] * matrix2[k][c];
            }
        }
    }
    
    printf("Multiplication result:\n");
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            printf("%d ", prod[r][c]);
        }
        printf("\n");
    }
    return 0;
}
