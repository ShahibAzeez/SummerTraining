#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Enter first word: ");
    scanf("%s", str1);

    printf("Enter second word: ");
    scanf("%s", str2);

    for(int i=0; str1[i]; i++) {
        for(int j=0; str2[j]; j++) {
            if(str1[i] == str2[j]) {
                printf("Not Antigram\n");
                return 0;
            }
        }
    }

    printf("Antigram\n");
    return 0;
}