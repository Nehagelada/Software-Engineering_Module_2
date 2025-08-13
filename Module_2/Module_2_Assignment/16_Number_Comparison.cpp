/*16.LAB EXERCISE 2: Number Comparison 
 
->Write a C program that takes three numbers from the user and determines: 
o The largest number. 
o The smallest number. 
Challenge: Solve the problem using both if-else and switch-case statements.*/

#include<stdio.h>
main()
{
	
	int a,b,c;
	printf("Enter a three numbers ");
	scanf("%d %d %d",&a,&b,&c);
	printf("\n");
	printf("\n-----Using If Else-----\n");
	if(a>=b && a>=c)
	{
		printf("%d is a largest number\n",a);
	}
	else if(b>=a && b>=c)
	{
		printf("%d is a largest number\n",b);
	}
	else
	{
		printf("%d is a largest number\n",c);
	}
	
	if(a<=b && a<=c)
	{
		printf("%d is a smallest number\n",a);
	}
	else if(b<=a && b<=c)
	{
		printf("%d is a smallest number\n",b);
	}
	else
	{
		printf("%d is a smallest number\n",c);
	}
	
	//Using Switch Case
	printf("\n");
	printf("\n-----Using Switch Case Statements-----\n");
	printf("1.Find Largest Number\n");
	printf("2.Find Smallest Number\n");
	int ch;
	printf("Enter the Choice to find largest and smallest number: ");
	scanf("%d",&ch);
	switch(ch)
    {
        case 1:
        	if(a>=b && a>=c)
			{
				printf("%d is a largest number\n",a);
			}
			else if(b>=a && b>=c)
			{
				printf("%d is a largest number\n",b);
			}
			else
			{
				printf("%d is a largest number\n",c);
			}
            
            break;
        
        case 2:
        	if(a<=b && a<=c)
			{
				printf("%d is a smallest number\n",a);
			}
			else if(b<=a && b<=c)
			{
				printf("%d is a smallest number\n",b);
			}
			else
			{
				printf("%d is a smallest number\n",c);
			}
			break;
		default:
    		printf("Invalid choice.\n");
        }
}

	
