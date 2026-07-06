#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int freq[256] = {0};
    int i, max = 0;
    char result;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i]; i++) {
        if (str[i] != ' ')
            freq[(int)str[i]]++;
    }

    for (i = 0; i < 256; i++) {
        if (freq[i] > max) {
            max = freq[i];
            result = i;
        }
    }

    printf("Maximum occurring character: '%c' (occurs %d times)\n", result, max);

    return 0;
}
