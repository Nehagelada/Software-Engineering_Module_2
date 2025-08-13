/* 19.LAB EXERCISE 3: Sum of Digits 
 
-> Write a C program that takes an integer from the user and calculates the sum of its digits 
using a while loop. 
-> Challenge: Extend the program to reverse the digits of the number. */

#include<stdio.h>
int main() 
{
    int num, sum = 0, reverse = 0, digit;
    printf("Enter an integer: ");
    scanf("%d", &num);

    int original = num;        // keep a copy because we'll change `num` below

    while (num != 0) {
        digit = num % 10;           // <-- extracts the last digit
        sum += digit;               // <-- add that digit to the running sum
        reverse = reverse * 10 + digit; // <-- append digit to the end of `reverse`
        num /= 10;                  // <-- remove the last digit from `num`
    }

    printf("Sum of digits of %d = %d\n", original, sum);
    printf("Reverse of %d = %d\n", original, reverse);

    return 0;
}


