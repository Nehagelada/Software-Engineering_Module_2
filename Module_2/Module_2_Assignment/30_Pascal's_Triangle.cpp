/* 30.Lab Challenge 2: Pascal’s Triangle 
 
->Write a C program that generates Pascal’s Triangle up to N rows using loops. 
-> Challenge: Implement the same program using a recursive function. */

#include <stdio.h>

// ---------- Loop Version Functions ----------
long factorial(int num) 
{
    long fact = 1;
    for (int i = 1; i <= num; i++) 
	{
        fact *= i;
    }
    return fact;
}

long nCr(int n, int r) 
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

void pascalLoop(int n) 
{
    printf("\nPascal's Triangle using loops:\n");
    for (int i = 0; i < n; i++) 
	{
        for (int space = 0; space < n - i - 1; space++) 
		{
            printf("  ");
        }
        for (int j = 0; j <= i; j++) {
            printf("%4ld", nCr(i, j));
        }
        printf("\n");
 }
}

// ---------- Recursion Version Functions ----------
int pascalValue(int row, int col) {
    if (col == 0 || col == row) {
        return 1;
    }
    return pascalValue(row - 1, col - 1) + pascalValue(row - 1, col);
}

void pascalRecursion(int n) 
{
    printf("\nPascal's Triangle using recursion:\n");
    for (int i = 0; i < n; i++) 
	{
        for (int space = 0; space < n - i - 1; space++) 
		{
            printf("  ");
        }
        for (int j = 0; j <= i; j++) 
		{
            printf("%4d", pascalValue(i, j));
        }
        printf("\n");
    }
}

main() 
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    pascalLoop(n);
    pascalRecursion(n);

}
