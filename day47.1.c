#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100];
    int freq[256]={0};
    int i;

    scanf("%99s %99s", a, b);

    if(strlen(a) != strlen(b)) {
        printf("Not Anagram");
        return 0;
    }

    for(i=0; a[i]!='\0'; i++) {
        freq[(unsigned char)a[i]]++;
        freq[(unsigned char)b[i]]--;
    }

    for(i=0; i<256; i++) {
        if(freq[i] != 0) {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");

    return 0;
}