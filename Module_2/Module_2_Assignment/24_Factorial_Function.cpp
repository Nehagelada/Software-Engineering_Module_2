/* 24.LAB EXERCISE 2: Factorial Calculation 
 
-> Write a C program that calculates the factorial of a given number using a function. 
 
-> Challenge: Implement both an iterative and a recursive version of the factorial function and 
compare their performance for large numbers.*/

/* #include<stdio.h>
int fact(int num);
main()
{
	int num;
	printf("Enter a number for Factorial:- ");
	scanf("%d",&num);
	printf("Factorial is %d",fact(num));
}
int fact(int num)
{
	if(num == 0)
	{
		return 1;
	}
	int factnm1=fact(num - 1);
	int factn = factnm1*num;
	return factn;
}*/


#include<stdio.h>

// Recursive method
int fact_recursive(int num) 
{
    if(num == 0)
        return 1;
    return num * fact_recursive(num - 1);
}

// Iterative method
int fact_iterative(int num) 
{
    int fact = 1;
    for(int i = 1; i <= num; i++) 
	{
        fact = fact * i;
    }
    return fact;
}

 main() 
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    if(num < 0) 
	{
        printf("Factorial of a negative number is not defined.\n");
    } 
	else 
	{
        printf("Factorial using Recursive method: %d\n", fact_recursive(num));
        printf("Factorial using Iterative method: %d\n", fact_iterative(num));
    }

}

