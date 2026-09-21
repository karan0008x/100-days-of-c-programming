 //Write a program to check if a number is a perfect number
#include <stdio.h>
int main() {
    int num, sum = 0, i;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Calculate the sum of factors
    for (i = 1; i < num; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // Check if the sum of factors equals the number
    if (sum == num)
        printf("%d is a perfect number.", num);
    else
        printf("%d is not a perfect number.", num);

    return 0;
}