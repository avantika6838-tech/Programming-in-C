/*Experiment 3: Conditional Statements
3. WAP to compute the BMI Index of the person and print the BMI values as per the following ranges. You can use the following formula to compute BMI= weight(kgs)/Height(Mts)*Height(Mts).*/

#include <stdio.h>
int main()
{
	printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
	printf("\n-----------------------------------\n");

    float W,H,B;
    printf("Enter the value of Weight in Kg: ");
    scanf("%f",&W);
    printf("Enter the value of Height in metres: ");
    scanf("%f",&H);
    B=W/(H*H);
    printf("value of B: %f \n",B);
if (B <=15)
    { 
        printf("Starvation");
        
    }
    else if ((B >=15.1) && (B <=17.5))
    {
        printf("Anorexic");
        
    }
    else if ((B >=17.6) && (B <=18.5))
    {
        printf("Underweight");
        
    }
    else if ((B >=18.6) && (B <=24.9))
    {
        printf("Ideal");
        
    }
    else if ((B >=25) && (B <=25.9))
    {
        printf("Overweight");
        
    }
    else if ((B >=30) && (B <=39.9))
    {
        printf("Obese");
        
    }
    else
    {
        printf("Morbidity Obese+");
    }   
    return 0; 
}


 
