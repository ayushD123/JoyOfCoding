#include<stdio.h>
#include<stdlib.h>

void main()
{
   int a,b,c,ans;    
   printf("Enter three number\n");
   scanf("%d %d %d",&a,&b,&c);
   if(a<0 || b<0 || c<0){
       printf("invalid number in input \n");
      exit(0);
   }else{
       ans = a>b?a>c?a:c:b>c?b:c;       
    printf("largest number is : %d",ans); 
   }
    
   
}