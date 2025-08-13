/* 25.LAB EXERCISE 3: Palindrome Check 
 
-> Write a C program that takes a number as input and checks whether it is a palindrome using 
a function. 
-> Challenge: Modify the program to check if a given string is a palindrome.*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int number_palidrome();
main()
{
	printf("-------String Palidome-------\n");
	char str[100];
	int length,k=0;
	printf("Enter a string ");
	gets(str);
	length=strlen(str);
	length=length-1;
	//while is used to check the string palindrome
	while(length>k)
	{
		if(str[length]!=str[k])
		{
			printf("%s is not a palidrome\n",str);
			//exit(0);
			break;
		}
		length--;
		k++;
		
	}
	printf("%s is a palidrome\n",str);


	printf("\n-------Number Palidrome-------\n");
	number_palidrome();
	
}
int number_palidrome()
{
	int n,original,rev,digit=0;
	printf("Enter a number ");
	scanf("%d",&n);
	original=n;
	while(n>0)
	{
		rev=n%10;
		digit=rev+(digit*10);
		n=n/10;
	}
	if(original==digit)
	{
		printf("%d is a palidrome number\n",original);
	}
	else
	{
		printf("%d is not a palidrome number\n",original);
	}
	return 0;
	
}

