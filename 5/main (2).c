/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int size,num,pos;
    printf("enter size:\n");
    scanf("%d",&size);
    int arr[999];
    printf("enter array elements:\n");
    for(int i=0;i<size;++i){
       scanf("%d",&arr[i]); 
    }
    printf("enter position:\n");
    scanf("%d",&pos);
    printf("enter number to be deleted:\n");
    scanf("%d",&num);
    for(int i=pos-1;i<size-1;++i){
        arr[i]=arr[i+1];
    }
    
    
    for(int i=0;i<size;++i){
        printf("%d\t",arr[i]);
    }
    
    
    
    

    return 0;
}
