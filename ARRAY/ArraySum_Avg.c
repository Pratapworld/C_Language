#include <stdio.h>
int main()
{
    int table[8] = {3, 6, 9, 12, 15, 18, 21, 24};
    int count =sizeof(table)/4;
    int sum=0;
    int Avg = 0;

    for (int i = 0; i < 8; i++)

    {
        sum = sum + table [i];
        
        
        
    }
    printf("Avg = %d\n",sum/count);
    printf("sum = %d",sum);
    return 0;
}