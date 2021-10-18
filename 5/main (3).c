/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[999];
    int size;
    printf("Enter Size Of Array \n");
    scanf("%d",&size);
    for(int i=0;i<size;++i){
        scanf("%d",&arr[i]);
    }
    printf("Duplicate Elements Are:\n");
    for(int i=0;i<size;++i){
        for(int j-i+1;j<size;++j){
            if(arr[i]==arr[j]){
                printf("%d\n",arr[i]);
            }
        }
    }
    
   
    
    
    
    

    return 0;
}
