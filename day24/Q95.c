#include <stdio.h>
#include <string.h>

int main() {
    char line[200];
    char longest_word[50] = "";
    char temp_word[50] = "";
    int i = 0, j = 0;
    
    printf("Enter text: ");
    fgets(line, sizeof(line), stdin);
    line[strcspn(line, "\n")] = '\0';
    
    while (line[i] != '\0') {
        if (line[i] != ' ') {
            temp_word[j++] = line[i];
        } else {
            temp_word[j] = '\0';
            if (strlen(temp_word) > strlen(longest_word)) {
                strcpy(longest_word, temp_word);
            }
            j = 0;
        }
        i++;
    }
    temp_word[j] = '\0';
    if (strlen(temp_word) > strlen(longest_word)) {
        strcpy(longest_word, temp_word);
    }
    
    printf("Longest: %s\n", longest_word);
    return 0;
}
