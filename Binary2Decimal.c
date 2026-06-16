#include <stdio.h>

int isBinary(int num) {
    while (num > 0) {
        if (num % 10 > 1)
            return 0;
        num /= 10;
    }
    return 1;
}

int main()
{
    int binary, decimal = 0;
    int base = 1;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    if (!isBinary(binary)) {
        printf("Warning: %d is not a valid binary number! Binary numbers contain only 0s and 1s.\n", binary);
        return 1;
    }

    int temp = binary;
    while (temp > 0)
    {
        int digit = temp % 10;

        decimal = decimal + digit * base;

        base = base * 2;

        temp = temp / 10;
    }

    printf("Decimal = %d\n", decimal);

    return 0;
}