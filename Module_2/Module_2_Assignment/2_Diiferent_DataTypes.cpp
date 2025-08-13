/* 2.Write a C program that includes variables, constants, and comments. Declare 
and use different data types (int, char, float) and display their values. */

#include<stdio.h>
main()
{
	// All are Variables
	int a = 10;
	float b = 50.050507;
	char c = 'N';
	// Constant Variable
	const int var = 100;
	printf("Using Integer Datatype print the value of a is %d\n",a);
	printf("Using Float Datatype print the value of b is %f\n",b);
	printf("Using Char Datatype print the value of c is %c\n",c);
	printf("Using Const Integer Datatype print the value of var is %d\n",var);
	printf("\n");
	// Comments
	printf("For Single line comment // is used\n");
	printf("For Multi line comment /*  */  is used");
}
