// Challenge 1: Separate and club Even and Odd numbers
#include <stdio.h>

int main()
{
    int number[] = {3, 6, 9, 12, 15, 18, 21};
    int size = sizeof(number) / sizeof(number[0]);
    int countE = 0, countO = 0;

    printf("Even Numbers are: ");
    for (int i = 0; i < size; i++)
        if (number[i] % 2 == 0)
        {
            printf("%d ", number[i]);
            countE++;
        }

    printf("\nOdd Numbers are: ");
    for (int i = 0; i < size; i++)
        if (number[i] % 2 != 0)
        {
            printf("%d ", number[i]);
            countO++;
        }

    printf("\nTotal Even Numbers are %d\nTotal Odd Numbers are %d\n", countE, countO);
    return 0;
}
