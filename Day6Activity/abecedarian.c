#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];

    printf("Enter word: ");
    scanf("%s", str);

    for(int i=1; str[i]; i++) {
        if(tolower(str[i]) < tolower(str[i-1])) {
            printf("Not Abecedarian\n");
            return 0;
        }
    }

    printf("Abecedarian\n");
    return 0;
}