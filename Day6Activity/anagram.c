#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int count1[256] = {0}, count2[256] = {0};

    printf("Enter first word: ");
    scanf("%s", str1);

    printf("Enter second word: ");
    scanf("%s", str2);

    for(int i=0; str1[i]; i++)
        count1[(int)str1[i]]++;

    for(int i=0; str2[i]; i++)
        count2[(int)str2[i]]++;

    if(memcmp(count1, count2, sizeof(count1)) == 0)
        printf("Anagram\n");
    else
        printf("Not Anagram\n");

    return 0;
} 