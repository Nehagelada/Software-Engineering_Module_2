/* 5.Write a C program to print numbers from 1 to 10 using all three types of loops 
(while, for, do-while).*/

#include<stdio.h>
main()
{
	
	// Using While Loop
	printf("Print 1 to 10 Using While Loop\n");
	int i=1;
	while(i<=10)
	{
		printf("%d\n",i);
			i++;
	}
	printf("\n");
	
	// Using For Loop
	printf("Print 1 to 10 Using For Loop\n");
	for(int i=1;i<=10;i++)
	{
		printf("%d\n",i);
	}
	printf("\n");
	
	//Using Do-While Loop
	int j=1;
	printf("Print 1 to 10 Using Do Loop\n");
	do
	{
		printf("%d\n",j);
		j++;
	}while(j<=10);
}
