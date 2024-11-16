// Wap to check whether the number is perfect number or not.
#include <stdio.h>

int main()
{
    int num, sum = 0;
    printf("Enter the Number:");
    scanf("%d", &num);
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    if (sum == num)
    {
        printf("%d is the perfect number", num);
    }
    else
        printf("%d is not the perfect number", num);

    return 0;
}