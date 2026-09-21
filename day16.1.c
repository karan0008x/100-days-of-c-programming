//Write a program to take a number as input and print its equivalent binary representation
#include <stdio.h> 
int main() {
int num, i;
printf("enter a number: ");
scanf("%d", &num);
printf("binary representation: ");
for (i = 31; i >= 0; i--) {
    if (num & (1 << i)) {
        printf("1");
    } else {
        printf("0");
    }
}
printf("\n");
return 0;
}