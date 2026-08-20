 #include <stdio.h>
 int main() {
    int n, sum = 0, i;
    printf("enter n: ");
    scanf("%d", &n);
    for (i=1; i<=n; i++) {
        sum = sum + i;
    }
    printf("sum of first %d natural numbers is %d",  n, sum);
    return 0;
    
 }