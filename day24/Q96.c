#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int present[256] = {0};
    
    printf("Enter text: ");
    scanf("%s", str);
    
    printf("Result: ");
    for (int i = 0; str[i] != '\0'; i++) {
        if (present[(unsigned char)str[i]] == 0) {
            printf("%c", str[i]);
            present[(unsigned char)str[i]] = 1;
        }
    }
    printf("\n");
    return 0;
}
