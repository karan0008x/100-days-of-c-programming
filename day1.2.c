 #include <stdio.h>
 int main() {
    int num1, num2, sum, difference, product, quotient;


    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2;

    printf("Sum = %d", sum);
    printf("difference = %d", difference);
    printf("product = %d", product);
    printf("quotient = %d", quotient);
    

    return 0;
}