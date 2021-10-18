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
    float sumi=0,sumf=0,avgi=0,avgf=0;
    
    for(int i=0;i<6;++i){
        sumi=sumi+arr[i];
        sumf=sumf+f[i];
    }
    avgi=sumi/6;
    avgf=sumf/6;
    printf("%f %f \n",sumi,avgi);
    printf("%f %f \n",sumf,avgf);

    return 0;
}
