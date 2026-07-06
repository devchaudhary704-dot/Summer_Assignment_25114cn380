#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i, j;
    char temp;

    printf("Enter a string: ");
    gets(str);

    int n = strlen(str);
    for (i = 0, j = n - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
