#include <stdio.h>

int main() {
    int a[101], n, position, value, i;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d %d", &position, &value);

    for(i = n; i > position; i--)
        a[i] = a[i-1];

    a[position] = value;
    n++;

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}