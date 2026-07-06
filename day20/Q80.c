#include <stdio.h>

int main() {
    int values[3][3];
    
    printf("Enter matrix: \n");
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            scanf("%d", &values[r][c]);
        }
    }
    
    for (int c = 0; c < 3; c++) {
        int total = 0;
        for (int r = 0; r < 3; r++) {
            total += values[r][c];
        }
        printf("Column %d sum = %d\n", c + 1, total);
    }
    return 0;
}
