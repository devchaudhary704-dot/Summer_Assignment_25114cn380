#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100];
    int f1[256] = {0}, f2[256] = {0};
    
    printf("String 1: ");
    scanf("%s", a);
    printf("String 2: ");
    scanf("%s", b);
    
    for (int i = 0; a[i] != '\0'; i++) f1[(unsigned char)a[i]]++;
    for (int i = 0; b[i] != '\0'; i++) f2[(unsigned char)b[i]]++;
    
    printf("Shared chars: ");
    for (int i = 0; i < 256; i++) {
        if (f1[i] > 0 && f2[i] > 0) {
            printf("%c ", i);
        }
    }
    printf("\n");
    return 0;
}
