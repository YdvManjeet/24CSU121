// Wap to find sum of all scores in marks array.
#include <stdio.h>

int main()
{
    int marks[5];
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the marks for %d student:", i + 1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }
    printf("The sum of scores is %d", sum);
    return 0;
}