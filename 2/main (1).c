#include <stdio.h>

int main()
{
  int age;

  printf("Enter your age=");
  scanf("%d", &age);

  if (age >= 18)
  {
    printf("User is eligible to vote \n");
  }
  else
  {
    printf("User is not eligible to vote \n");
  }
  
  printf("Using Ternary operator-\n");
  
      (age >= 18) ? printf("User is eligible to vote \n")
            : printf("User is Not eligible to vote \n");

  return 0;
}