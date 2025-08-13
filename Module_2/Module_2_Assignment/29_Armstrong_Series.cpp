/* Extra Logic Building Challenges 
 
29.Lab Challenge 1: Armstrong Number 
 
-> Write a C program that checks whether a given number is an Armstrong number or not (e.g., 
153 = 1^3 + 5^3 + 3^3). 
->Challenge: Write a program to find all Armstrong numbers between 1 and 1000.*/ 

#include <stdio.h>
#include <math.h>

int isArmstrong(int num)
{
    int original = num, sum = 0, digits = 0, temp;

    temp = num;
    // Count digits
    while (temp > 0)
    {
        digits++;
        temp /= 10;
    }

    temp = num;
    // Calculate sum of powers
    while (temp > 0)
    {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return (sum == original);
}

int main()
{
    int n;

    // Part 1: Check a single number
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isArmstrong(n))
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);

    // Part 2: Find Armstrong numbers between 1 and 1000
    printf("\nArmstrong numbers between 1 and 1000:\n");
    for (int i = 1; i <= 1000; i++)
    {
        if (isArmstrong(i))
            printf("%d ", i);
    }
    printf("\n");

    return 0;
}

