/*4.3.3*/

#include<stdio.h>
int main()
{
    printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
    printf("\n-----------------------------------\n");

printf("The pattern is:\n");
int i, j, k=1;
for(i=1; i<=5; i++)
{
for(j=1; j<=i; j++)
{
printf("%d ", k);
k++;
}
printf("\n");
}
}
