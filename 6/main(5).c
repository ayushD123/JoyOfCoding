#include <stdio.h>
#include<stdlib.h>
#include <string.h>
 
int main()
{
    char str[99], rev_str[99] = {'\0'};
    int i, length = 0, flag = 0;
 
    printf("Enter a string \n");
    scanf("%s",str);
    
    for (i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    
    for (i = length - 1; i >= 0 ; i--)
    {
        rev_str[length - i - 1] = str[i];
    }
   
 
    for (flag = 1, i = 0; i < length ; i++)
    {
        if (rev_str[i] != str[i])
            flag = 0;
    }
    if (flag == 1)
       printf ("%s is a palindrome \n", str);
    else
       printf("%s is not a palindrome \n", str);
}