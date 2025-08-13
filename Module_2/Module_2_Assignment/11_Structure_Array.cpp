/* 11.Write a C program that defines a structure to store a student's details (name, 
roll number, and marks). Use an array of structures to store details of 3 
students and print them.*/

#include<stdio.h>
struct student
{
	char name[100];
	int roll_no;
	int marks;	
};
main()
{
	struct student s1[3];
	printf("\n----------Enter the Details of the Students----------\n");
	for(int i=0;i<3;i++)
	{
		printf("Enter the name of the students ");
		scanf("%s",&s1[i].name);
		printf("Enter a Roll Number of the student ");
		scanf("%d",&s1[i].roll_no);
		printf("Enter Marks of the student ");
		scanf("%d",&s1[i].marks);
		printf("\n");
	}
	printf("\n");
	printf("\n----------Details of the Student----------\n");
	for(int i=0;i<3;i++)
	{
		printf("Name of the student is %s\n",s1[i].name);
		printf("Roll Number of the student is %d\n",s1[i].roll_no);
		printf("Marks of the student is %d\n",s1[i].marks);
		printf("\n");
	}
	
}
