// Wap to find maximum and minimum score in marks array.
#include <stdio.h>

int main()
{
    int marks[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the marks for %d student:", i + 1);
        scanf("%d", &marks[i]);
    }
    int Max = marks[0];
    int Min = marks[0];
    for (int i = 0; i < 5; i++)
    {
        if (marks[i] > Max)
        {
            Max = marks[i];
        }
        if (marks[i] < Min)
        {
            Min = marks[i];
        }
    }
    printf("The Minimum score is %d\n", Min);
    printf("The Maximum Score is %d", Max);

    return 0;
}