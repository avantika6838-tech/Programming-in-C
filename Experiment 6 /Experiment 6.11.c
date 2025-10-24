/*4.3.11*/

#include<stdio.h>
int main()
{
    printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
    printf("\n-----------------------------------\n");

printf("The pattern is:\n");
int i, l;
for(i=1; i<=6; i++)
{
int m=7-i;
for(l=1; l<i; l++)
{
printf("%d", m);
m++;
}
printf("\n");
}
return 0;
}
