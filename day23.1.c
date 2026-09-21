 //Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms
#include <stdio.h>
int main() {
    int n, i;
    float sum = 0, numerator = 2, denominator = 3;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += numerator / denominator;
        numerator += 2;
        denominator += 4;
    }

    printf("The sum of the series is: %.2f", sum);
    return 0;
} 