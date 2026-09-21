 //Write a program to find the 1’s complement of a binary number and print it 
 #include <stdio.h>
int main() {    
    long long binaryNum, tempNum;
    int remainder, onesComplement = 0, placeValue = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &binaryNum);

    tempNum = binaryNum;

    // Calculate the 1's complement
    while (tempNum != 0) {
        remainder = tempNum % 10; // Get the last digit
        if (remainder == 0) {
            onesComplement += 1 * placeValue; // Change 0 to 1
        }
        // If remainder is 1, we do nothing as it remains 0 in 1's complement
        placeValue *= 10; // Move to the next place value
        tempNum /= 10; // Remove the last digit
    }

    printf("1's complement of %lld is: %d", binaryNum, onesComplement);

    return 0;
}

