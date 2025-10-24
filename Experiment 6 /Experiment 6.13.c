/*4.3.13*/
#include<stdio.h>
int main()
{
    printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
    printf("\n-----------------------------------\n");

printf("The pattern is:\n");
int i, j, k;
for(i=1; i<6; i++)
{
for(k=1; k<=i; k++)
{
printf(" ");
}
for(j=5; j>=i; j--)
{
printf("%d", j);
}
printf("\n");
}
return 0;
}
