#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Enter first word: ");
    scanf("%s", str1);

    printf("Enter second word: ");
    scanf("%s", str2);

    int len = strlen(str1);

    if(len != strlen(str2)) {
        printf("Not Semordnilap\n");
        return 0;
    }

    for(int i=0; i<len; i++) {
        if(str1[i] != str2[len-1-i]) {
            printf("Not Semordnilap\n");
            return 0;
        }
    }

    printf("Semordnilap\n");
    return 0;
}