#include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 3; i++)
    {
        for(j = 1; j <= 5; j++)
        {
            if(j == 2)
                continue;

            if(j == 4)
                break;

            printf("(%d,%d) ", i, j);
        }
    }

    return 0;
}