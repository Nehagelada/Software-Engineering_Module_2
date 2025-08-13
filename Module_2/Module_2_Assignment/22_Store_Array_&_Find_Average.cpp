/* 22.LAB EXERCISE 3: Sum of Array Elements 
 
-> Write a C program that takes N numbers from the user and stores them in an array. The 
program should then calculate and display the sum of all array elements. 
-> Challenge: Modify the program to also find the average of the numbers. */

#include<stdio.h>
main()
{
	int arr[100];
	int n,sum,average;
	printf("How many numbers you want ");
	scanf("%d",&n);
	printf("Enter the numbers\n");
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Print the numbers\n");
	for(int i=1;i<=n;i++)
	{
		printf("%d",arr[i]);
		printf("\n");
	}
	for(int i=1;i<=n;i++)
	{
		sum+=arr[i];
		average=sum/n;
	}
	printf("Sum of numbers is %d\n",sum);
	printf("Average of total numbers is %d",average);
	
}
