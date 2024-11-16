// Wap to check whether the score is even or odd in an array.
#include <stdio.h>
int main()
{
    int marks[] = {24, 23, 56, 99, 38};
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        if (marks[i] % 2 == 0)
        {
            printf("%d is even\n", marks[i]);
        }
        else
        {
            printf("%d is odd\n", marks[i]);
        }
    }
    return 0;
}