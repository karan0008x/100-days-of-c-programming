 //Write a program to find the sum of digits of a number using loop without array string
 #include <stdio.h>
int main() {
    int num, sum = 0, remainder;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10; // Get the last digit
        sum += remainder;     // Add it to the sum
        num /= 10;            // Remove the last digit
    }

    printf("Sum of digits is: %d", sum);

    return 0;
}








