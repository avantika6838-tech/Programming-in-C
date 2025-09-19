/*Experiment 3: Conditional Statements
 1.Write a C program to check whether a number is Even or ODD*/

#include<stdio.h>
int main()
{
	printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
	printf("\n-----------------------------------\n");
    int a,b;
    printf("Enter value of a:");
    scanf("%d",&a);
    b=a%2;
    if
    (b==0)
    {
    	printf("Value is Even");
	}
	else
	{
		printf("Value is Odd");
	}
    return 0;
}
