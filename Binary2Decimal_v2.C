#include <stdio.h>

int main()
{
    int binary, temp;
    int decimal = 0;
    int base = 1;
    int Remainder;
    int isBinary = 1;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    temp = binary;

    while(temp > 0)
    {
        Remainder = temp % 10;

        if(Remainder != 0 && Remainder != 1)
        {
            isBinary = 0;
            break;
        }

        temp = temp / 10;
    }

    if(isBinary == 0)
    {
        printf("Error: %d is not a valid binary number.\n", binary);
        return 0;
    }

    temp = binary;

    while(temp > 0)
    {
        Remainder = temp % 10;

        decimal = decimal + Remainder * base;

        base = base * 2;

        temp = temp / 10;
    }

    printf("Decimal = %d\n", decimal);

    return 0;
}