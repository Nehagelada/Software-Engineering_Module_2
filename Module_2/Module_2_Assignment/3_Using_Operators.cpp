/* 3.Write a C program that accepts two integers from the user and performs 
arithmetic, relational, and logical operations on them. Display the results.*/

#include<stdio.h>
main()
{
	int a,b;
	printf("Enter First Integer ");
	scanf("%d",&a);
	printf("Enter Second Integer ");
	scanf("%d",&b);
	//Using Arithmetic Operators
	printf("\n----------Using Arithmetic Operators----------\n");
	printf("Addition Operator %d + %d : %d\n",a,b,a+b);
	printf("Subtraction Operator %d - %d : %d\n",a,b,a-b);
	printf("Multiplication Operator %d * %d : %d\n",a,b,a*b);
	if(b != 0)
	{
		printf("Division Operator %d / %d : %d\n",a,b,a/b);
		printf("Modulus Operator %d %% %d : %d\n",a,b,a%b);
	}
	else
	{
		printf("Division and Modulus are not possible because (b=0)\n");
	}
	
	//Using Relational Operators
	printf("\n----------Using Relational Operators----------\n");
	printf("1 => True\n");
	printf("0 => False\n");
	printf("\n");
	printf("Greater than Operator %d > %d : %d\n",a,b,a>b);
	printf("Less than Operator %d < %d : %d\n",a,b,a<b);
	printf("Greater than equals to Operator %d >= %d : %d\n",a,b,a>=b);
	printf("Less than equals to Operator %d <= %d : %d\n",a,b,a<=b);
	printf("Double equals to Operator %d == %d : %d\n",a,b,a==b);
	printf("Not equals to Operator %d != %d : %d\n",a,b,a!=b);
	
	//Using Logical Operators
	printf("\n----------Using Logical Operators----------\n");
	printf("1 => True\n");
	printf("0 => False\n");
	printf("\n");
	printf("AND Operator (%d && %d) : %d\n",a,b,a&&b);
	printf("OR Operator (%d || %d) : %d\n",a,b,a||b);
	printf("NOT Operator !(%d) : %d\n",a,!a);
	printf("NOT Operator !(%d) : %d\n",b,!b);
	
	
	
	
}
