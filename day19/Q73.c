#include <stdio.h>

int main() {
    int first[3][3], second[3][3], result[3][3];
    
    printf("Enter elements of matrix 1:\n");
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            scanf("%d", &first[r][c]);
        }
    }
    
    printf("Enter elements of matrix 2:\n");
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            scanf("%d", &second[r][c]);
        }
    }
    
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            result[r][c] = first[r][c] + second[r][c];
        }
    }
    
    printf("Result of addition:\n");
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            printf("%d ", result[r][c]);
        }
        printf("\n");
    }
    return 0;
}
