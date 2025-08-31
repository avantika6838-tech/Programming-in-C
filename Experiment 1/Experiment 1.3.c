/* Experiment 1: Installation, Environment Setup and starting with C language
3. Write a C program to add two numbers, take number from user.*/

#include<stdio.h>
int main()
{
	printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
	printf("\n-----------------------------------\n");
    int a,b,sum;
	printf("Enter the value of a ");
	scanf("%d",&a);
	printf("Enter the value of b");
	scanf("%d",&b);
	sum=a+b;
	printf("%d",sum);
	return 0;

}

