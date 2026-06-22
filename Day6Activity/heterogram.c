#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int freq[26] = {0};

    printf("Enter word: ");
    scanf("%s", str);

    for(int i=0; str[i]; i++) {
        char ch = tolower(str[i]);

        if(freq[ch-'a']) {
            printf("Not Heterogram\n");
            return 0;
        }

        freq[ch-'a']++;
    }

    printf("Heterogram\n");
    return 0;
}