/* 6. Strings 
 
26.LAB EXERCISE 1: String Reversal 
 
->Write a C program that takes a string as input and reverses it using a function. 
->Challenge: Write the program without using built-in string handling functions.*/

#include<stdio.h>
#include<string.h>
void reverse_string();
main()
{
	printf("-------Reverse String Without Using Inbulit Function-------\n");
	reverse_string();
	
	
}
void reverse_string()
{
	int len;
	char str[100],temp;
	char result;
	printf("Enter a string ");
	gets(str);
	len=strlen(str);
	for(int i=0;i<len/2;i++)
	{
		temp=str[i];
		str[i]=str[len-1-i];
		str[len-1-i]=temp;
	}
	printf("Reverse String is %s",str);
	
	
}
