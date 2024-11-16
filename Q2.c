// Wap to read two integers and print their HCF(Highest Common Factor).

#include <stdio.h>

int main()
{
    int num1, num2, hcf;
    printf("Enter Number 1:");
    scanf("%d", &num1);
    printf("Enter Number 2:");
    scanf("%d", &num2);

    if (num1 > num2)
    {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    for (int i = 1; i <= num1; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            hcf = i;
        }
    }
    printf("The HCF of %d and %d is %d", num1, num2, hcf);
    return 0;
}