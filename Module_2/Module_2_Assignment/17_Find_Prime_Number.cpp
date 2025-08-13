/* 17.LAB EXERCISE 1: Prime Number Check 
->Write a C program that checks whether a given number is a prime number or not using a 
for loop. 
->Challenge: Modify the program to print all prime numbers between 1 and a given number.*/

#include<stdio.h>
main()
{
	int num,count=0;
	printf("Enter a number: ");
	scanf("%d",&num);
	for(int i=2;i<=num;i++)
	{                                  
		count=0;
		for(int j=1;j<=num;j++)
		{
			if(num%j==0)
			{
				count++;
			}
			
		}
	}
	if(count==2)
	{
		printf("The given number is prime\n");
	}
	else
	{
		printf("The given is not a prime number\n");
	}
	

    printf("Prime numbers between 1 and %d are:\n", num);

    for (int i = 2; i <= num; i++)  // loop through all numbers
    {
        count = 0;  // reset divisor count for this i

        for (int j = 1; j <= i; j++) // check divisors of i
        {
            if (i % j == 0)
            {
                count++;
            }
        }

        if (count == 2) // prime number found
        {
            printf("%d ", i);
            
		}
		
    }

    printf("\n");
}

	


