// Challenge 4: Reverse Array

#include <stdio.h>
int main()
{
    int Numbers[10] = {99, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int Count = sizeof Numbers / sizeof Numbers[0];
    int position = Count - 1;

    for (int i = position; i >= 0; i--)
        {
        printf("%d\n", Numbers[i]);
        }
    return 0;
}
