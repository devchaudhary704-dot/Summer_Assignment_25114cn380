#include <stdio.h>

int main() {
    char str[200];
    int visited[256] = {0};
    int i;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        if (visited[(int)str[i]]) {
            printf("First repeating character: %c\n", str[i]);
            return 0;
        }
        visited[(int)str[i]] = 1;
    }

    printf("No repeating character found\n");
    return 0;
}
