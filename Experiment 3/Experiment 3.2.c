/*Experiment 3: Conditional Statements
2. WAP to check if the triangle is valid or not. If the validity is established, do check if the triangle is isosceles, equilateral, right angle, or scalene. Take sides of the triangle as input from a user*/



 #include <stdio.h>
#include <math.h>

int main(void) 
{
    int a, b, c;
    printf("Enter the values for a, b, c: ");
    scanf("%d%d%d", &a, &b, &c);

    int h, perpendicular, base;

    
    if ((a >= b) && (a >= c))
    {
        h = a; perpendicular = b; base = c;
    } else if ((b >= a) && (b >= c)) 
	{
        h = b; perpendicular = a; base = c;
    } else 
	{
        h = c; perpendicular = a; base = b;
    }

     // Valid triangle check
    if ((a + b > c) && (b + c > a) && (a + c > b))
	 {
        // Triangle classification
        if (a == b && b == c) 
		{
            printf("Equilateral triangle\n");
        } else if (a == b || b == c || a == c)
	    {
            printf("Isosceles triangle\n");
        } else if ((h * h) == (perpendicular * perpendicular) + (base * base))
	    {
            printf("Right Angled triangle\n");
        } else {
            printf("Scalene triangle\n");
        }
    }
	 else 
	{
        printf("Not a valid triangle\n");
    }

    return 0;
}
