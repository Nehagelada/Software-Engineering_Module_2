/* 12.Write a C program to create a file, write a string into it, close the file, then 
open the file again to read and display its contents.*/

#include<stdio.h>
main()
{
	FILE *fptr;
	char data[100];
	char ch;
	fptr=fopen("sample.txt","w");
	printf("Enter the Some data\n");
	gets(data);
	fprintf(fptr,"%s",data);
	fclose(fptr);
	fptr=fopen("sample.txt","r");
	ch=fgetc(fptr);
	while(ch != EOF)
	{
		printf("%c",ch);
		ch=fgetc(fptr);
	}
	fclose(fptr);
	
	
	
	
}
