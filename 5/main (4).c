/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{

    int size;
    printf("Enter Size Of Array \n");
    scanf("%d",&size);
    int arr[size];
    printf("enter Elements of array:\n");
    for(int i=0;i<size;++i){
        scanf("%d",&arr[i]);
    }
    int freq[10000]={0};
    printf("Duplicate Elements Are:\n");
    for(int i=0;i<size;++i){
        
        freq[arr[i]]++;
    }
    for(int i=0;i<10000;++i){
        
        if(freq[i]){
            printf("Count Of %d is %d \n",i,freq[i]);
        }
    }
    
   
    
    
    
    

    return 0;
}
