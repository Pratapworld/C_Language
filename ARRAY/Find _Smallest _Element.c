// Find Smallest Element

#include <stdio.h>
int main()
{
    int Numbers[10] = {9, 6, 17, 23, 5, 12, 16, 21, 88, 19};
    int Smallest = Numbers[0];

    for (int i = 1; i < 10; i++)
    {
        if (Smallest < Numbers[i])
        {
            continue;
        }
        else
        {
            Smallest = Numbers[i];
        }
    }
    printf("The Smallest Number is : %d\n", Smallest);
    return 0;
}
