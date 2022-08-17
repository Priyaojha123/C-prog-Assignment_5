#include<stdio.h>
#include<conio.h>
int main ()
{
  int p,r,t,a;
  printf("enter principal amount ,rate of interest,time") ;  //calculate s.i
  scanf("%d %d %d" ,&p,&r,&t);
  a=(p*r*t)/100 ;
  printf("the simple interest is %d" ,a) ;
  getch();

}
