#include <stdio.h>

int main() {
    char str[500];
    int count = 0, i;

    printf("Enter a sentence: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
            count++;
    }

    // if string is not empty, there is at least 1 word
    if (str[0] != '\0')
        count++;

    printf("Number of words: %d\n", count);

    return 0;
}
