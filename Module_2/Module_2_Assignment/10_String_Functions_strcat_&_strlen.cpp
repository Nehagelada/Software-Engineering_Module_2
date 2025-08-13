/* 10.Write a C program that takes two strings from the user and concatenates them 
using strcat(). Display the concatenated string and its length using 
strlen().*/

#include<stdio.h>
#include<string.h>
main()
{
	char str1[100];
	char str2[100];
	printf("Enter first string: ");
	gets(str1);
	printf("Enter second string: ");
	gets(str2);
	
	// Concate of two string using strcat()
	printf("\n");
	printf("Concatination of two string is\n");
	strcat(str1,str2);
	printf("%s",str1);
	printf("\n");
	
	// Find Length of two string using strlen()
	printf("Length of string is\n");
	printf("%d",strlen(str1));
}
