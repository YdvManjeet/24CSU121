// Wap to print pascal's triangle.
#include <stdio.h>

int binomial_coefficient(int n, int k)
{
    int res = 1;
    if (k > n - k)
    {
        k = n - k;
    }
    for (int i = 0; i < k; i++)
    {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}

void print_pascals_triangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("%d ", binomial_coefficient(i, k));
        }
        printf("\n");
    }
}

int main()
{
    int n = 5;
    print_pascals_triangle(n);
    return 0;
}