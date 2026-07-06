#include <stdio.h>

int main() {
    int mat[3][3];
    int primary = 0, secondary = 0;
    
    printf("Enter elements of 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    
    for (int i = 0; i < 3; i++) {
        primary += mat[i][i];
        secondary += mat[i][2 - i];
    }
    
    printf("Primary diagonal sum: %d\n", primary);
    printf("Secondary diagonal sum: %d\n", secondary);
    return 0;
}
