#include <stdio.h>
#include <stdlib.h>

int sum_of_digits(int n){
    if(n==0){
        return 0;
    }
    return sum_of_digits(n/10)+n%10;
}




int main(){

    
    int x;
    scanf("%d",&x);
    int ans=sum_of_digits(x);
    while(ans>=10){
        ans=sum_of_digits(ans);
    }
    printf("%d",ans);

}