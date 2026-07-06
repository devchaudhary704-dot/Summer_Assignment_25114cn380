#include <stdio.h>

int main() {
    int arr[3][3], check = 1;
    
    printf("Enter 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] != arr[j][i]) {
                check = 0;
                break;
            }
        }
    }
    
    if (check == 1) {
        printf("Symmetric matrix\n");
    } else {
        printf("Not symmetric matrix\n");
    }
    return 0;
}
