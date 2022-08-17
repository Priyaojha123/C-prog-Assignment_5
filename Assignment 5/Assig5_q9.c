#include<stdio.h>
#include<conio.h>
int main ()
{
   int s,c,p;
   printf("enter selling price and cost price") ;
   scanf("%d %d",&s,&c);
   p=(s-c)/c*100 ;
   printf("profit percent is %d",p);
   getch();
}
