// Wap to find out the average score of marks array.
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
    float average= sum/5.0;
    printf("The sum of scores is %d\n", sum);
    printf("The average of scores is %.2f", average);
    return 0;
}