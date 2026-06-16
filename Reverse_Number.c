#include<stdio.h>
int main()
{
    int Num;
    int Remainder;
    int Quotient;
    int sum =0;
    int Counter =0;
   
    printf("Enter Number:- ");
    scanf("%d",&Num);
    while (Num != 0)
    {
        Remainder = Num % 10;
        Quotient = Num/10 ;
        Num = Quotient;
        sum = sum + Remainder;
        Counter = Counter +1;//How many Digit this number Have
        
    }
    printf("%d\n",sum);
    printf("%d\n",Counter);
    return 0;
}