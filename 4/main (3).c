/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[6]={560,660,590,760,480,960};
    float f[6]={97.50,66.0,79.25,76.55,98.45,96.40};
    char c[6]={'M','T','W','t','F','S'};
    int maxi=0;
    float maxf=0;
    
    for(int i=0;i<6;++i){
        
        maxi=(maxi>arr[i] ? maxi:arr[i]);
        maxf=(maxf>f[i] ? maxf:f[i]);
    }
   
    printf("%d \n",maxi);
    printf("%f \n",maxf);

    return 0;
}
