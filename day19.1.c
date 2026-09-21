 //Write a program to find the LCM of two numbers
#include <stdio.h>

int main() {
    int num1, num2, lcm, i;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    // Find the larger number
    if (num1 > num2)
        lcm = num1;
    else
        lcm = num2;

    // Loop until we find a number that is divisible by both
    while (1) {
        if (lcm % num1 == 0 && lcm % num2 == 0) {
            printf("LCM of %d and %d is: %d", num1, num2, lcm);
            break;
        }
        ++lcm;
    }

    return 0;
}
