//Print numbers from:1 to 100
//Skip multiples of 3
//Skip multiples of 5
//Stop completely when number reaches 77

#include <stdio.h>

int main()
{
    int i = 1;

    while (i <= 100)
    {
        if (i % 3 == 0){
            i++;
        
            continue;
        }
        if (i % 5 == 0)
        {
            i++;
        
            continue;
        }
        if(i==77){
            break;
        }


            printf("%d ", i);
        i++;
    }

    return 0;
}