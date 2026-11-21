#include <stdio.h>

int main() {
    int a[100], n, i;
    int current, maximum;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    current=maximum=a[0];

    for(i=1;i<n;i++) {
        if(current+a[i] > a[i])
            current=current+a[i];
        else
            current=a[i];

        if(current>maximum)
            maximum=current;
    }

    printf("%d",maximum);

    return 0;
}