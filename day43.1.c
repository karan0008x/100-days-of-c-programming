#include <stdio.h>
#include <string.h>

int main() {
    char str[200], temp;
    int i, length;

    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    length = strlen(str);

    for(i=0; i<length/2; i++) {
        temp = str[i];
        str[i] = str[length-i-1];
        str[length-i-1] = temp;
    }

    printf("%s", str);

    return 0;
}