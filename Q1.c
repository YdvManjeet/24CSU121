// Wap to check whether the given is armstrong or not.

#include <stdio.h>
#include <math.h>

int main()
{
    int num, originalNum, sum = 0, digit, numDigits = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    originalNum = num;
    int temp = num;
    while (temp != 0)
    {
        temp /= 10;
        numDigits++;
    }

    while (num != 0)
    {
        digit = num % 10;
        sum += pow(digit, numDigits);
        num /= 10;
    }

    if (sum == originalNum)
    {
        printf("%d is an Armstrong number.\n", originalNum);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", originalNum);
    }

    return 0;
}
