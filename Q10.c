// WAP to count prime numbers in an array.
#include <stdio.h>

int isPrime(int num)
{
    if (num <= 1)
        return 0;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int marks[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter Number %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        if (isPrime(marks[i]))
        {
            printf("Number %d (%d) is a prime number\n", i + 1, marks[i]);
        }
        else
        {
            printf("Number %d (%d) is not a prime number\n", i + 1, marks[i]);
        }
    }

    return 0;
}
