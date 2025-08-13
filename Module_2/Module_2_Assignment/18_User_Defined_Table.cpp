/* 18.LAB EXERCISE 2: Multiplication Table 
 
-> Write a C program that takes an integer input from the user and prints its multiplication 
table using a for loop. 
-> Challenge: Allow the user to input the range of the multiplication table (e.g., from 1 to N).*/

#include<stdio.h>
main()
{
	int n,start,end;
	printf("Enter a number for print the table ");
	scanf("%d",&n);
	printf("Enter the starting point of table ");
	scanf("%d",&start);
	printf("Enter the ending point of the table ");
	scanf("%d",&end);
	printf("\nMultiplication Table of %d from %d to %d:\n", n, start, end);
	for(int i=start;i<=end;i++)
	{
		printf("%d * %d = %d",n,i,n*i);
		printf("\n");
	}
}
