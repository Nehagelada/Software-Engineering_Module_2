/* 4. Arrays 
20.LAB EXERCISE 1: Maximum and Minimum in Array 
 
-> Write a C program that accepts 10 integers from the user and stores them in an array. The 
program should then find and print the maximum and minimum values in the array. 
-> Challenge: Extend the program to sort the array in ascending order.*/

#include<stdio.h>

main() 
{
    int arr[10];
    int max, min;

    // Input: 10 integers
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) 
	{
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }

    // Initialize max and min with first element
    max = min = arr[0];

    // Find max and min
    for (int i = 1; i < 10; i++)
	 {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    // Print max and min
    printf("\nMaximum value = %d", max);
    printf("\nMinimum value = %d\n", min);

    // Sort array in ascending order (simple bubble sort)
     for (int i = 0; i < 9; i++)
	 {
        for (int j = 0; j < 9 - i; j++) 
		{
            if (arr[j] > arr[j + 1]) 
			{
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Print sorted array
    printf("\nArray in ascending order: ");
    for (int i = 0; i < 10; i++) 
	{
        printf("%d ", arr[i]);
    }
}

