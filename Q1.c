// Wap to increase every student marks by 5 and then print the updated array.
#include <stdio.h>

int main()
{
    int marks[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the marks for %d student:", i+1);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        marks[i] += 5;
        printf("The Marks for student %d are %d\n", i+1, marks[i]);
    }

    return 0;
}