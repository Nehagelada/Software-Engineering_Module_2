/* 7.Write a C program that calculates the factorial of a number using a function. 
Include function declaration, definition, and call.*/

#include<stdio.h>
//Declaration of function
int factorial(int a);
main()
{
	int n,result;
	printf("Enter a number to find their factorial ");
	scanf("%d",&n);
	// Call a Function
	result=factorial(n);
	printf("Factorial of %d is %d",n,result);
	
}

//Definition of function
int factorial(int a)
{
	int fact=1;
	if(a < 0)
	{
		return 0;
	}
	for(int i=1;i<=a;i++)
	{
		fact=fact*i;
	}
	return fact;
	
}
