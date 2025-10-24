/*4.3.12*/
#include<stdio.h>
int main()
{
    printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
   	printf("\n-----------------------------------\n");

printf("The pattern is:\n");
int i, l;
for(i=5; i>=1; i--)
{
for(l=6-i; l<=5; l++)
{
printf("%d", l);
}
printf("\n");
}
return 0;
}
