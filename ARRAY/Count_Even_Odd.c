
// Challenge 1: Count Even and Odd
#include <stdio.h>
int main()
{
    int number[5] = {3, 6, 9, 12, 15};
    int countE = 0;
    int countO = 0;
    for (int i = 0; i < 5; i++)
    {
        if (number[i] % 2 == 0)
        {
            countE++;
        }
        else
        {

            countO++;
        }
    }
    printf("Total Even Numbers are %d \n", countE);
    printf("Total Odd Numbers are %d \n", countO);
    return 0;
}