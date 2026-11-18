#include <stdio.h>

int main() {
    int a[100], n, k, i;
    int sum=0, maxSum;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    scanf("%d",&k);

    for(i=0;i<k;i++)
        sum+=a[i];

    maxSum=sum;

    for(i=k;i<n;i++) {
        sum += a[i]-a[i-k];

        if(sum>maxSum)
            maxSum=sum;
    }

    printf("%d",maxSum);

    return 0;
}