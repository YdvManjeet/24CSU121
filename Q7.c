/* Wap for binary to decimal conversion and decimal to binary for a given number as
per user's choice.
*/
#include <stdio.h>
#include <math.h>

int binaryToDecimal(long long binary);
long long decimalToBinary(int decimal);

int main()
{
    int choice;
    printf("Choose an option:\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        long long binary;
        printf("Enter a binary number: ");
        scanf("%lld", &binary);
        printf("Decimal equivalent: %d\n", binaryToDecimal(binary));
    }
    else if (choice == 2)
    {
        int decimal;
        printf("Enter a decimal number: ");
        scanf("%d", &decimal);
        printf("Binary equivalent: %lld\n", decimalToBinary(decimal));
    }
    else
    {
        printf("Invalid choice!\n");
    }

    return 0;
}

int binaryToDecimal(long long binary)
{
    int decimal = 0, base = 1;
    while (binary > 0)
    {
        int lastDigit = binary % 10;
        decimal += lastDigit * base;
        base *= 2;
        binary /= 10;
    }
    return decimal;
}

long long decimalToBinary(int decimal)
{
    long long binary = 0;
    int base = 1;
    while (decimal > 0)
    {
        int remainder = decimal % 2;
        binary += remainder * base;
        base *= 10;
        decimal /= 2;
    }
    return binary;
}
