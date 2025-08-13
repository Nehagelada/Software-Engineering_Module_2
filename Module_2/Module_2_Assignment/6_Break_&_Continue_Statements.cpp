/* 6.Write a C program that uses the break statement to stop printing numbers 
when it reaches 5. Modify the program to skip printing the number 3 using the 
continue statement.*/

#include<stdio.h>
main()
{
	// Using Break Statements
	printf("Using break statment to stop printing numbers when it reaches 5\n");
	int a=5;
	for(int i=1;i<=10;i++)
	{
		if(i==a)
		{
			break;
		}
		printf("%d\n",i);
	}
	printf("\n");
	
	//Using Continue Statements
	printf("Using continue statement to skip printing the number 3\n");
	for(int i=1;i<=10;i++)
	{
		if(i==3)
		{
			continue;
		}
		printf("%d\n",i);
	}
	
	
	
} 
