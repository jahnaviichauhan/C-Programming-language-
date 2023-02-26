/*Program to Compute Addition Subtraction and Multiplication*/

#include<stdio.h>
int main()
{
     // declare variables
     int num1, num2, sum, subtract, multiple;

     // take inputs
     printf("Enter two integers: ");
     scanf("%d %d", &num1, &num2);

     // calculate addition
     sum = num1 + num2;

     // calculate subtraction
     subtract = num1 - num2;

     // calculate multiplication
     multiple = num1 * num2;

     // display results
     printf("%d + %d = %d\n", num1, num2, sum);
     printf("%d - %d = %d\n", num1, num2, subtract);
     printf("%d * %d = %d\n", num1, num2, multiple);

     return 0;
}