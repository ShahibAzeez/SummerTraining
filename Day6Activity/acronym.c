#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];

    printf("Enter phrase:\n");
    fgets(str, sizeof(str), stdin);

    printf("Acronym: ");

    if(str[0] != ' ')
        printf("%c", toupper(str[0]));

    for(int i=1; str[i]; i++) {
        if(str[i-1]==' ' && str[i]!=' ')
            printf("%c", toupper(str[i]));
    }

    return 0;
}