/* 28.LAB EXERCISE 3: Word Count 
 
->Write a C program that counts the number of words in a sentence entered by the user. 
->Challenge: Modify the program to find the longest word in the sentence. */


#include <stdio.h>
#include<string.h>
int main() 
{
    char sentence[200];
    int word_count = 0;
    int max_length = 0;
    int length = 0;
    int i = 0;
    char longest_word[50];

    printf("Enter a sentence: ");
    fgets(sentence,200, stdin);

    for (i = 0; sentence[i] != '\0'; i++) 
    {
        if (sentence[i] != ' ' && sentence[i] != '\n') 
        {          
            length++;
        } 
        else 
        {
           if (length > 0) 
           {
                word_count++;

                if (length > max_length) 
                {
                    max_length = length;

                    
                    for (int k = 0; k < length; k++) 
                    {
                         longest_word[k] = sentence[i - length + k];
                    }
                    longest_word[length] = '\0';
                }
               length = 0;
           }  
       }
    }
 

    printf("Number of words: %d\n", word_count);
    printf("Longest word: %s\n", longest_word);

    return 0;
}

