/* 8.Write a C program that stores 5 integers in a one-dimensional array and prints 
them. Extend this to handle a two-dimensional array (3x3 matrix) and 
calculate the sum of all elements.*/

#include<stdio.h>
main()
{
	// Array Using One Dimensional
	int arr[5];
	int sum;
	printf("Enter 5 integers\n");
	for(int i=0;i<=4;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n");
	printf("This is the number you had printed:-\n");
	for(int i=0;i<=4;i++)
	{
		printf("Value of %d is %d\n",i,arr[i]);
	}
	
	// Array Using Two Dimensional
	int matrix[3][3];
	printf("\n-------Matrix of 3*3--------\n");
	printf("Enter the elments of 1st matrix\n");
	for(int row=0;row<3;row++)
	{
		for(int col=0;col<3;col++)
		{
			scanf("%d",&matrix[row][col]);
			sum+=matrix[row][col];
		}
		printf("\n");
	}
	printf("Print the elements of matrix of 3*3 is:-\n");
	for(int row=0;row<3;row++)
	{
		for(int col=0;col<3;col++)
		{
			printf("%d\t",matrix[row][col]);
		}
		printf("\n");
	}
	printf("\n");
	printf("Sum of all elements in the matrix is %d",sum);
	
}
