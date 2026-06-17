//Write a menu-driven calculator using: switch

#include<stdio.h>
int main ()
{
int a,b;
char c;
printf("enter the  number :");
scanf("%d %d %c",&a,&b,&c);
switch(c){
case '+':

    printf(" addition %d \n",a+b);
    break;
case '-':
    printf("%d",a-b);
    break;
case '*':
    printf("%d",a*b);
    break;
case '/':
    printf("%d",a/b);
case '%':
    printf("%d",a%b);            
    return 0;
}
}