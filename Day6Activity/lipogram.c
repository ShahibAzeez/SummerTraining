#include <stdio.h>
#include <ctype.h>

int main() {
    char str[500];
    char missing;

    printf("Enter sentence:\n");
    fgets(str, sizeof(str), stdin);

    printf("Enter missing letter: ");
    scanf(" %c", &missing);

    missing = tolower(missing);

    for(int i=0; str[i]; i++) {
        if(tolower(str[i]) == missing) {
            printf("Not Lipogram\n");
            return 0;
        }
    }

    printf("Lipogram\n");
    return 0;
}