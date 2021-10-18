#include <stdio.h>
  
int main()
{
  
    
    char str1[999];
    char str2[999];
  
    
    char str3[9999];
  
    int i = 0, j = 0;
  
    printf("\nEnter First string:");
    scanf("%s",str1);
    printf("\nEnter Second string:");
    scanf("%s",str2);
  
    
    while (str1[i] != '\0') {
        str3[j] = str1[i];
        i++;
        j++;
    }
  
    
    i = 0;
    while (str2[i] != '\0') {
        str3[j] = str2[i];
        i++;
        j++;
    }
    str3[j] = '\0';
  
    
    printf("\nConcatenated string: %s", str3);
  
    return 0;
}