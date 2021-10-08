/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>

void main()
{
   int a,b,c,ans;    
   printf("Enter three number\n");
   scanf("%d %d %d",&a,&b,&c);
   ans = a>b?a>c?a:c:b>c?b:c;       
   printf("largest number is : %d",ans);  
   
}
