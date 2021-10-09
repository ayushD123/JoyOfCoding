#include<stdio.h>
#include<math.h>
int remove_zeros(int n)
{
    
    int r, num = 0;
    // removing zeros from n and storing the number in num
    while(n > 0)
    {
        r = n % 10;
        n = n / 10;
        if(r!=0)
        {
            num = num*10 + r;
        }
    }
    
    n = num;
    num = 0;
    while(n>0)
    {
        r = n % 10;
        n = n / 10;
        num = num*10 + r;
    }
    
    return num;
    
}
int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    printf("Number after removing zeros = %d", remove_zeros(n));
}