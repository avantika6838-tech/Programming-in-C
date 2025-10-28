/*Experiment 5: Variable and Scope of Variable
 5.4. Declare a static local variable inside a function. Observe how its value persists across function calls.*/
#include <stdio.h> 
void counterFunction() { 
static int count = 0;  // Static local variable 
count++; 
printf("Function called %d times\n", count); 
} 
int main() { 
printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
    	printf("\n-----------------------------------\n");


counterFunction(); 
counterFunction(); 
counterFunction(); 
return 0; 
}
