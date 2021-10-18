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
    int i;
    char ch;
    scanf("%c",&ch);
    switch(ch){
        case 'M':
        printf("%d is the mr.int",arr[0]);
        printf("%f is the salary mr.float",f[0]);
        break;
        case 'T':
        printf("%d is the mr.int",arr[0]);
        printf("%f is the salary mr.float",f[1]);
        break;
        case 'W':
        printf("%d is the mr.int",arr[0]);
        printf("%f is the salary mr.float",f[2]);
        break;
        case 't':
        printf("%d is the mr.int",arr[0]);
        printf("%f is the salary mr.float",f[3]);
        break;
        case 'F':
        printf("%d is the mr.int",arr[0]);
        printf("%f is the salary mr.float",f[4]);
        break;
        case 'S':
        printf("%d is the mr.int",arr[5]);
        printf("%f is the salary mr.float",f[5]);
        break;
        
        default:
            printf("INVALID INPUT");
            break;
            
            
        
    }
    printf("\n");
    for(i=5;i>=0;--i){
        printf("%c",c[i]);
    }
    for(i=5;i>=0;--i){
        printf("%f",f[i]);
    }
    for(i=5;i>=0;--i){
        printf("%d",arr[i]);
    }

    return 0;
}
