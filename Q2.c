/* Wap to print grades of students as per their marks given in an array.
(>=75--A Grade,74-60--B Grade,59-40--C Grade below 40 D Grade).
 */
#include <stdio.h>

int main()
{
    int marks[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the marks for %d student:", i + 1);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (marks[i] >= 75)
        {
            printf("Student %d -- A Grade\n", i + 1);
        }
        else if (marks[i] >= 60 && marks[i] < 74)
        {
            printf("Student %d -- B Grade\n", i + 1);
        }
        else if (marks[i] >= 40 && marks[i] < 59)
        {
            printf("Student %d -- C Grade\n", i + 1);
        }
        else if (marks[i] < 40)
        {
            printf("Student %d -- D Grade\n", i + 1);
        }
    }
    return 0;
}