/* 14.LAB EXERCISE 2: Check Number Properties 
 
-> Write a C program that takes an integer from the user and checks the following using 
different operators: 
o Whether the number is even or odd. 
o Whether the number is positive, negative, or zero. 
o Whether the number is a multiple of both 3 and 5.*/

#include<stdio.h>
main()
{
	int num;
	printf("Enter a number ");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("The number is even\n");
	}
	else
	{
		printf("The number is odd\n");
	}
	if(num>0)
	{
		printf("The number is positive\n");
	}
	else if(num<0)
	{
		printf("The number is negative\n");
	}
	else
	{
		printf("The number is zero\n");
	}
	if (num % 3 == 0 && num % 5 == 0)
	{
		printf("The number is a multiple of both 3 and 5\n");
	}
    else
    {
    	printf("The number is not a multiple of both 3 and 5\n");
	}
        
	
	
}
