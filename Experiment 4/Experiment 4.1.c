/*1.WAP to check if three points (x1,y1), (x2,y2) and (x3,y3) are collinear or not.*/
#include <stdio.h>

int main()
{ 
      printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
    	printf("\n-----------------------------------\n");


int x1,x2,x3,y1,y2,y3,S1,S2;
printf("Enter the value for x1,x2,x3:\n");
scanf("%d %d %d",&x1,&x2,&x3);
printf("Enter the value for y1,y2,y3:\n");
scanf("%d %d %d",&y1,&y2,&y3);
 S1=(y2-y1)/(x2-x1);
 S2=(y3-y2)/(x3-x2);
 
 if (S1=S2)
 {
     printf("Points are collinear");
     
 }
 else 
 {
     printf("Points are not collinear");
 }

 return 0;
}
