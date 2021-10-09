#include <stdio.h>
int main()
{
    int n, num, d, rev = 0;
    printf("enter the codeword\n");
    scanf("%d", &n);
    num = n;
    while (num != 0)
    {
        d = num % 10;
        num = num / 10;
        if (d == 9)
            rev = rev * 10 + 0;
        else
        {
            d = d + 1;
            rev = rev * 10 + d;
        }
    }
    while (rev != 0)
    {
        d = rev % 10;
        printf("%d", d);
        rev = rev / 10;
    }
    return 0;
}