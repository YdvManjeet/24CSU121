// Wap to find Who and how many students have scored 99 in an array marks.
#include <stdio.h>

int main()
{
    int score[5];
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the marks for %d student:", i + 1);
        scanf("%d", &score[i]);
    }
    printf("These Have scored 99 in marks:\n");
    for (int i = 0; i < 5; i++)
    {
        if (score[i] == 99)
        {
            printf("Student %d\n", i + 1);
            count += 1;
        }
    }
    printf("Total Number of students Scoring 99 are:%d", count);
    return 0;
}