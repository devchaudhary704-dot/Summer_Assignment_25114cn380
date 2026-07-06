#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i, j, flag = 1;

    printf("Enter a string: ");
    gets(str);

    int len = strlen(str);

    for (i = 0, j = len - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("%s is a palindrome\n", str);
    else
        printf("%s is not a palindrome\n", str);

    return 0;
}
