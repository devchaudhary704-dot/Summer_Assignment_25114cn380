#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    printf("Enter word: ");
    scanf("%s", word);
    
    int size = strlen(word);
    printf("Result: ");
    for (int i = 0; i < size; i++) {
        int count = 1;
        while (i < size - 1 && word[i] == word[i + 1]) {
            count++;
            i++;
        }
        printf("%c%d", word[i], count);
    }
    printf("\n");
    return 0;
}
