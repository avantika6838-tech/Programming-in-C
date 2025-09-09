/*Experiment 2: Operators
4. ⁠Write a program to find the roots of the quadratic equations */

#include <stdio.h>
#include <math.h>
int main()  
{
	
	printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
    printf("\n-----------------------------------\n");
	
    float a,b,c,D,X1,X2;
    printf("Enter the value of coffiecients of quadratic equation: ");
    scanf("%f, %f, %f",&a,&b,&c);
    D=b*b-4*a*c;
  
    if (D>0)
    {
         X1=(-b+sqrt(D))/(2*a);
         X2=(-b-sqrt(D))/(2*a);
        printf("Roots are real and different: %f,%f",X1,X2);
    }
    else if(D==0)
    {
        X1=X2=-b / (2*a);
        printf("Roots are real and equal: %f,%f",X1,X2);
    }
    else
    {
        printf("Roots are complex");
    }
    return 0;
}
