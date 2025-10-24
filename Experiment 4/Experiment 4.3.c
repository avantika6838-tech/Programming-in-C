/*3. WAP using ternary operator, the user should input the length and breadth of a rectangle, 
one has to find out which rectangle has the highest perimeter. 
The minimum number of rectangles should be three.  */ 

#include <stdio.h>
int main()
{
    	printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
    	printf("\n-----------------------------------\n");

  float L1,B1,Peri1;
  float L2,B2,Peri2;
  float L3,B3,Peri3;
  float H_Peri;
  
  printf("Enter Length Of Rectangle 1 = \n");
  scanf("%f", &L1);  
  printf("Enter Breadth Of Rectangle 1 = \n");
  scanf("%f", &B1); 
  Peri1 = 2*(L1 + B1);
  
  printf("Enter Length Of Rectangle 2 = \n");
  scanf("%f", &L2);  
  printf("Enter Breadth Of Rectangle 2 = \n");
  scanf("%f", &B2); 
  Peri2 = 2*(L2 + B2);
  
  printf("Enter Length Of Rectangle 3 = \n");
  scanf("%f", &L3);  
  printf("Enter Breadth Of Rectangle 3 = \n");
  scanf("%f", &B3); 
  Peri3 = 2*(L3 + B3);
  
  H_Peri = (Peri1 > Peri2) ?
                      ((Peri1 > Peri3) ? Peri1 : Peri3) : 
                      ((Peri2 > Peri3) ? Peri2 : Peri3) ; 
 
 printf("\nPerimeter Of Rectangle 1 = %.2f\n",Peri1);
 printf("\nPerimeter Of Rectangle 2 = %.2f\n",Peri2);
 printf("\nPerimeter Of Rectangle 3 = %.2f\n",Peri3);
 printf("\nThe Highest Perimeter Among The Rectangles Is = %.2f\n",H_Peri);
  return 0;
  }


 
