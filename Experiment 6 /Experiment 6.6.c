/*4.3.6*/
#include<stdio.h>
int main()
{
    printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
    printf("\n-----------------------------------\n");

printf("The pattern is:\n");
int i, j;
for(i=1; i<=5; i++)
{
for(j=6-i; j>=1; j--)
{
printf("%d", j);
}
printf("\n");
}
return 0;
}
