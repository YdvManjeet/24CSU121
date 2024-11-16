/* Wap to accept coordinate point in an XY coordinate system and detemine in
which quadrant the coordinate lies.
*/
#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter The X coordinates:");
    scanf("%d", &x);
    printf("Enter The Y coordinates:");
    scanf("%d", &y);
    if (x > 0 && y > 0)
    {
        printf("The point lies in 1st Quadrant");
    }
    else if (x < 0 && y > 0)
    {
        printf("The point lies in 2st Quadrant");
    }
    else if (x < 0 && y < 0)
    {
        printf("The point lies in 3st Quadrant");
    }
    else if (x > 0 && y < 0)
    {
        printf("The point lies in 4st Quadrant");
    }
    else if (x == 0 && y == 0)
    {
        printf("The point lies on origin");
    }
    else
        printf("The point lies on X OR Y axis");

    return 0;
}