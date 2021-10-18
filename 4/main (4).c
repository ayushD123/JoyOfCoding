/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[10];
    int n;
    int c=0;
    printf("Enter Chits Value:\n");
    for(int i=0;i<10;++i){
        scanf("%d",&arr[i]);
    }
    printf("Enter Chit To Be Found:\n");
    scanf("%d",&n);
    for(int i=0;i<10;++i){
        if(n==arr[i]){
            c++;
        }
        n=10-c;
    }
    printf("Number of attempts:%d\n",n);
    
    

    return 0;
}
