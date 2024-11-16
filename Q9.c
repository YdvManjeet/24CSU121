/* Wap to print the following pyramid:
0        0
01      01
010    010
0101  1010
0101001010
*/
#include <stdio.h>

int main()
{
    int rows = 5;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d", j % 2);
        }
        for (int k = 0; k < 2 * (rows - i); k++)
        {
            printf(" ");
        }
        for (int j = i - 1; j >= 0; j--)
        {
            printf("%d", j % 2);
        }
        printf("\n");
    }

    return 0;
}
