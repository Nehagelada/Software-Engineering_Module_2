/* 27.LAB EXERCISE 2: Count Vowels and Consonants 
 
->Write a C program that takes a string from the user and counts the number of vowels and 
consonants in the string. 
-> Challenge: Extend the program to also count digits and special characters.*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int v = 0, c = 0, d = 0, s = 0; // initialize counters to 0

    printf("Enter a string: ");
    gets(str); // unsafe but okay for small examples

    for (int i = 0; str[i] != '\0'; i++)
    {
        // Vowel check
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            v++;
        }
        // Consonant check
        else if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            c++;
        }
        // Digit check
        else if (str[i] >= '0' && str[i] <= '9')
        {
            d++;
        }
        // Special character
        else
        {
            s++;
        }
    }
	printf("\n");
    printf("Vowels in string is: %d\n", v);
    printf("Consonants in string is: %d\n", c);
    printf("Digits in string is: %d\n", d);
    printf("Special Characters in string is: %d\n", s);
	
	return 0;
}

