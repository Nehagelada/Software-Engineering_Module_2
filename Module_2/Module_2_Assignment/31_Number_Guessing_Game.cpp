/* 31.Lab Challenge 3: Number Guessing Game 
 
->Write a C program that implements a simple number guessing game. The program should 
generate a random number between 1 and 100, and the user should guess the number 
within a limited number of attempts. 
-> Challenge: Provide hints to the user if the guessed number is too high or too low. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main() 
{
    int number, guess, attempts = 0, maxAttempts = 7;

    srand(time(0));
    number = 57; 

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have chosen a number between 1 and 100.\n");
    printf("You have %d attempts to guess it.\n\n", maxAttempts);

    while (attempts < maxAttempts) 
	{
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess == number) 
		{
            printf("?? Congratulations! You guessed the number in %d attempts.\n", attempts);
            break;
        }
        else if (guess > number) 
		{
            printf("Too high! Try a smaller number.\n");
}
        else 
		{
            printf("Too low! Try a larger number.\n");
        }

        if (attempts == maxAttempts) 
		{
            printf("\n? Sorry! You've used all your attempts. The number was %d.\n", number);
        }
    }

}
