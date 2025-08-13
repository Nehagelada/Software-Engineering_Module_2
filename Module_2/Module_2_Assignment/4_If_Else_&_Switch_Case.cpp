/* 4.Write a C program to check if a number is even or odd using an if-else 
statement. Extend the program using a switch statement to display the month 
name based on the user’s input (1 for January, 2 for February, etc.). */

#include<stdio.h>
main()
{
	// Using If-Else 
	int a,ch;
	printf("Enter a number to check if number is odd or even ");
	scanf("%d",&a);
	if((a%2)==0)
	{
		printf("%d is a even number",a);
	}
	else
	{
		printf("%d is a odd number\n",a);
	}
	
	// Using Switch Case
	printf("\n");
	printf("Enter a number according to the month ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("1 for January");
			break;
		case 2:
			printf("2 for Febuary");
			break;
		case 3:
			printf("3 for March");
			break;
		case 4:
			printf("4 for April");
			break;
		case 5:
			printf("5 for May");
			break;
		case 6:
			printf("6 for June");
			break;
		case 7:
			printf("7 for July");
			break;
		case 8:
			printf("8 for August");
			break;
		case 9:
			printf("9 for September");
			break;
		case 10:
			printf("10 for October");
			break;
		case 11:
			printf("11 for November");
			break;
		case 12:
			printf("12 for December");
			break;
		}
}
