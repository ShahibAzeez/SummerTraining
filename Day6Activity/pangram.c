#include <stdio.h>
#include <ctype.h>

int main() {
    char str[500];
    int alpha[26] = {0};

    printf("Enter sentence:\n");
    fgets(str, sizeof(str), stdin);

    for(int i=0; str[i]; i++) {
        if(isalpha(str[i]))
            alpha[tolower(str[i])-'a'] = 1;
    }

    for(int i=0; i<26; i++) {
        if(alpha[i] == 0) {
            printf("Not Pangram\n");
            return 0;
        }
    }

    printf("Pangram\n");
    return 0;
}