#include <stdio.h>

int main() {
    char str[200];
    int i, j;

    printf("Enter a string: ");
    gets(str);

    for (i = 0, j = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';

    printf("String without spaces: %s\n", str);

    return 0;
}
