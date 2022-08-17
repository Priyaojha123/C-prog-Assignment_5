#include<stdio.h>
#include<conio.h>
int main ()
{
    int a,b,c,d ;
    printf("enter three numbers") ;
    scanf("%d %d %d" ,&a,&b,&c);
    d=(a+b+c)/3;
    printf("avg. of three numbers is %d",d);
    getch();
}
