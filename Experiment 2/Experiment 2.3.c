/*Experiment 2: Operators
3. ⁠Write a program to calculate Compound Interest.*/

#include <stdio.h>
#include <math.h>
int main()
{ 
 	printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
    printf("\n-----------------------------------\n");
	
 
    float P,r,t,A,C;
    printf("Enter the value of Principal value(P),rate(r) and time(t): ");
    scanf("%f %f %f",&P,&r,&t);

    A= P* pow((1 + r/100),t);
    C=A-P;
    printf("Compounded interest is: %.2f",C);
    return 0;
} 
