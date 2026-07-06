#include <stdio.h>

int main() {
    char str[200];
    int len = 0;

    printf("Enter a string: ");
    gets(str);

    while (str[len] != '\0')
        len++;

    printf("Length of string = %d\n", len);

    return 0;
}
