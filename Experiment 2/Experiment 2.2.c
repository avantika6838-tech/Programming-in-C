/*Experiment 2: Operators
2. ⁠WAP a C program to Convert temperature from Celsius to Fahrenheit using the formula: F = (C * 9/5) + 32.*/

#include <stdio.h>

int main() 
{
	
    	printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
    	printf("\n-----------------------------------\n");
	
	
	     float c,F;
	     printf("Enter the value Celsius temperature: ");
	     scanf("%f",&c);
	     F=((9.0/5.0)*c)+32; // 9/5 is integer and the output is 1.8 to to get this result 
	                        // we will use decimal .0 else it will give 1 in integer form but we  need in full decimal form 
	     printf("Fahrenheit=%f",F);
	     return 0;

}
 
