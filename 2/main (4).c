#include<stdio.h>
#include<stdlib.h>
void main()
{
int rank; // Declaration of variables

printf("Enter the Rank\n"); 
scanf("%d",&rank);

if(rank<= 3250){
    printf("admission possible in all branch \n");
    
}else if(rank>3250 && rank<=6505){
printf("admission possible in all branch except cse \n");

}else if(rank>6505 && rank<=12012){
    printf("admission possible in all branch except cse and ise \n");
}else if(rank>12012 && rank<=22340){
    printf("admission possible in only in mechanical \n");
}else{
    printf("admission possible not possible \n");
}
}