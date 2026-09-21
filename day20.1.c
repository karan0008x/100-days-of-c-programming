 //Write a program to find the product of odd digits of a number
#include <stdio.h>
int main() {
    int num, product = 1, remainder, hasOddDigit = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10; // Get the last digit
        if (remainder % 2 != 0) { // Check if it's odd
            product *= remainder; // Multiply to product
            hasOddDigit = 1; // Mark that we found an odd digit
        }
        num /= 10; // Remove the last digit
    }

    if (hasOddDigit)
        printf("Product of odd digits is: %d", product);
    else
        printf("No odd digits found.");

    return 0;
}