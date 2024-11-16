// Wap to subtract two integers without using minus(-) operator.
#include <stdio.h>

int subtract(int a, int b)
{
    return a + (~b + 1);
}

int main()
{
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    int result = subtract(num1, num2);
    printf("The result of %d - %d is: %d\n", num1, num2, result);

    return 0;
}
