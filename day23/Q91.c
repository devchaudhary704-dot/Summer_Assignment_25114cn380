#include <stdio.h>
#include <string.h>

int main() {
    char s1[200], s2[200];
    int count1[26] = {0}, count2[26] = {0};
    int i, flag = 1;

    printf("Enter first string: ");
    gets(s1);
    printf("Enter second string: ");
    gets(s2);

    if (strlen(s1) != strlen(s2)) {
        printf("Not anagrams\n");
        return 0;
    }

    for (i = 0; s1[i]; i++)
        count1[s1[i] - 'a']++;

    for (i = 0; s2[i]; i++)
        count2[s2[i] - 'a']++;

    for (i = 0; i < 26; i++) {
        if (count1[i] != count2[i]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("The strings are anagrams\n");
    else
        printf("Not anagrams\n");

    return 0;
}
