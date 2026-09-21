 //Write a program to swap the first and last digit of a number
#include <stdio.h>
int main() {
    int num, firstDigit, lastDigit, swappedNum;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    lastDigit = num % 10; // Get the last digit

    // Find the first digit
    while (num >= 10) {
        num /= 10;
    }
    firstDigit = num;

    // Swap the first and last digits
    swappedNum = lastDigit;
    num = firstDigit;
    while (num >= 10) {
        swappedNum = swappedNum * 10 + num % 10;
        num /= 10;
    }
    swappedNum = swappedNum * 10 + num;

    printf("Number after swapping first and last digits: %d", swappedNum);

    return 0;
}
