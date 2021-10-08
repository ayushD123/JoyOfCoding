#include<stdio.h>
#include<stdlib.h>
void main()
{
int books,cost; // Declaration of variables

printf("Enter number of books\n"); 
scanf("%d",&books);
cost=books*10;

if(books<10000){
    printf("no discount \n");
    printf("total cost=%d",cost);
    
}else if(books>=10000 && books<15000){
printf("Hey u got 10'%' discount \n");
cost=cost-(cost*0.1);
printf("total cost=%d",cost);

}
else{
    printf("Hey u got 20'%' discount \n");
cost=cost-(cost*0.2);
printf("total cost=%d",cost);
}
}