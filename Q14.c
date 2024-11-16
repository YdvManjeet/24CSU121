/* Given an array of n integers. The task is to print the duplicates in the given array. If there are no duplicates then print -1.
Examples:
Input: {2, 10,10, 100, 2, 10, 11,2,11,2}
Output: 2 10 11
Input: {5, 40, 1, 40, 100000, 1, 5, 1}
Output: 5 40 1
*/
#include <stdio.h>

int main()
{
    int integers[10] = {23, 36, 34, 45, 65, 65, 23, 78, 98, 34};
    int foundDuplicate = 0;
    int printed[10] = {0};

    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (integers[i] == integers[j] && !printed[i])
            {
                printf("%d\n", integers[i]);
                printed[i] = 1;
                foundDuplicate = 1;
                break;
            }
        }
    }

    if (!foundDuplicate)
    {
        printf("-1\n");
    }

    return 0;
}
