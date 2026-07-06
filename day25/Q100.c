#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char list[50][50];
    char swap[50];
    int count = 0, i = 0, j = 0;
    
    printf("Enter sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    
    while (str[i] != '\0') {
        if (str[i] != ' ') {
            list[count][j++] = str[i];
        } else if (j > 0) {
            list[count][j] = '\0';
            count++;
            j = 0;
        }
        i++;
    }
    if (j > 0) {
        list[count][j] = '\0';
        count++;
    }
    
    for (i = 0; i < count - 1; i++) {
        for (int k = i + 1; k < count; k++) {
            if (strlen(list[i]) > strlen(list[k])) {
                strcpy(swap, list[i]);
                strcpy(list[i], list[k]);
                strcpy(list[k], swap);
            }
        }
    }
    
    printf("Sorted: ");
    for (i = 0; i < count; i++) {
        printf("%s ", list[i]);
    }
    printf("\n");
    return 0;
}
