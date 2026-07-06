#include <stdio.h>
#include <string.h>

int main() {
    char first[100], second[100], joined[200];
    
    printf("Enter first string: ");
    scanf("%s", first);
    printf("Enter second string: ");
    scanf("%s", second);
    
    if (strlen(first) != strlen(second)) {
        printf("Not rotation\n");
        return 0;
    }
    
    strcpy(joined, first);
    strcat(joined, first);
    
    if (strstr(joined, second) != NULL) {
        printf("String is a rotation\n");
    } else {
        printf("String is not a rotation\n");
    }
    return 0;
}
