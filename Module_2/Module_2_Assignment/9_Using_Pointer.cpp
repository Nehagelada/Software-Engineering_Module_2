/* 9.Write a C program to demonstrate pointer usage. Use a pointer to modify the 
value of a variable and print the result.*/

#include<stdio.h>
main()
{
	int num=10;
	int *ptr;
	ptr=&num;
	printf("Value of num is %d\n",num);
	printf("Value of ptr is %d\n",*ptr);
	printf("Address of num is %d\n",&num);
	printf("Address of ptr is %d\n",ptr);
	printf("Own Address of ptr is %d\n",&ptr);
	
	// Using Pointer Modify the Value
	printf("\n");
	printf("Using Pointer Modify the value of ptr\n");
	*ptr=25;
	printf("Value of num is %d\n",num);
	printf("Value of ptr is %d\n",*ptr);
	printf("Address of num is %d\n",&num);
	printf("Address of ptr is %d\n",ptr);
	printf("Own Address of ptr is %d\n",&ptr);
}
