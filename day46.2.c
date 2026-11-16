#include <stdio.h>

int main() {
    char str[200];
    int freq[26]={0};
    int i;

    scanf("%199s", str);

    for(i=0; str[i]!='\0'; i++) {
        if(freq[str[i]-'a'] == 1) {
            printf("%c", str[i]);
            return 0;
        }

        freq[str[i]-'a']++;
    }

    printf("No repeating character");

    return 0;
}