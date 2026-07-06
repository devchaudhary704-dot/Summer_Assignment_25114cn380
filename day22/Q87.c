#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int freq[256] = {0};
    int i;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i]; i++)
        freq[(int)str[i]]++;

    printf("Character frequencies:\n");
    for (i = 0; i < 256; i++) {
        if (freq[i] > 0 && i != ' ')
            printf("'%c' = %d\n", i, freq[i]);
    }

    return 0;
}
