/* 13.LAB EXERCISE 1: Simple Calculator 
 
->Write a C program that acts as a simple calculator. The program should take two numbers 
and an operator as input from the user and perform the respective operation (addition, 
subtraction, multiplication, division, or modulus) using operators. 
->Challenge: Extend the program to handle invalid operator inputs.*/

#include<stdio.h>
#include <cmath>
main()
{
	char op;
	float n1,n2,result;
	printf("Enter the first number ");
	scanf("%f",&n1);
	printf("Enter the second number ");
	scanf("%f",&n2);
	printf("Enter the operator to perform the operation on two numbers(+,-,*,/,%):- ");
	scanf(" %c",&op);
	if(op =='+' || op == '-'|| op == '*' || op == '/' || op == '%')
	{
	
		switch(op)
		{
			case '+':
				printf("Addition of two number is %.2f",n1+n2);
				break;
			case '-':
				printf("Subtraction of two number is %.2f",n1-n2);
				break;
			case '*':
				printf("Multiplication of two number is %.2f",n1*n2);
				break;
			case '/':
				printf("Division of two number is %.2f",n1/n2);
				break;
			case '%':
				result = fmod(n1, n2);				
				printf("Modulus of two number is %.2f",result);
				break;
			default:
				printf("You entered invalid number");
		}
	}
	else
	{
		printf("You entered invalid operator");
	}
 
}
