/*Experiment 2: Operators
1. WAP a C program to calculate the area and perimeter of a rectangle based on its length and width.*/

#include <stdio.h>
	int main()
	{ 
	
    	printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
    	printf("\n-----------------------------------\n");

	    int L,W,A,P;
	    printf("Give the value of L: ");
	    scanf("%d",&L);
	    printf("Give the value of W: ");
	    scanf("%d",&W);
	    A=L*W;   
	    P=2*(L+W);  
	    printf("Area of rectangle is: %d \n",A);
	      
	    printf("Perimeter of rectangle is :%d \n",P);

return 0;
}


