#include <stdio.h>
int main()
{
  char s[1000];
  int c = 0;

  printf("Input a string\n");
  scanf("%s",s);

  while (s[c] != '\0')
    c++;

  printf("Length of the string: %d\n", c);

  return 0;
}