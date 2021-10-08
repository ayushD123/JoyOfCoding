/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main()
{
 int a = 5, b = 5, c = 10;
 printf("%d == %d is %d \n", a, b, a == b);
 printf("%d == %d is %d \n", a, c, a == c);
 printf("%d > %d is %d \n", a, b, a > b);
 printf("%d > %d is %d \n", a, c, a > c);
 printf("%d < %d is %d \n", a, b, a < b);
 printf("%d < %d is %d \n", a, c, a < c);
 printf("%d != %d is %d \n", a, b, a != b);
 printf("%d != %d is %d \n", a, c, a != c);
 printf("%d >= %d is %d \n", a, b, a >= b);
 printf("%d >= %d is %d \n", a, c, a >= c);
 printf("%d <= %d is %d \n", a, b, a <= b);
 printf("%d <= %d is %d \n", a, c, a <= c);
 return 0;
}