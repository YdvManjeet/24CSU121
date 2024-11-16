/* Simple Calculator is a C language-based application used for performing all
the simple arithmetic operations like addition, multiplication, division, and
subtraction. The application can be made using basic knowledge of C like if-else
statements, loops, etc.
The functionalities of the application are mentioned below:
1.Addition
2.Subtraction
3.Multiplication
4.Division
5.Logarithmic values
6.Square roots
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int function;
    float num1, num2;
    printf("ENTER Functionalities of the application are mentioned below:\n1 Addition\n2 Subtraction\n3 Multiplication\n4 Division\n5 Logarithmic values\n6 Square Roots\n");
    scanf("%d", &function);
    if (function == 1)
    {
        printf("Enter Number 1 and 2:\n");
        scanf("%f%f", &num1, &num2);
        printf("The Sum of %.1f and %.1f is %.1f", num1, num2, num1 + num2);
    }
    else if (function == 2)
    {
        printf("Enter Number 1 and 2:\n");
        scanf("%f%f", &num1, &num2);
        if (num2 > num1)
        {
            printf("Difference between %.1f and %.1f is %.1f", num2, num1, num2 - num1);
        }
        else
            printf("Difference between %.1f and %.1f is %.1f", num1, num2, num1 - num2);
    }
    else if (function == 3)
    {
        printf("Enter Number 1 and 2:\n");
        scanf("%f%f", &num1, &num2);
        printf("Multiplication between %.1f and %.1f is %.1f", num1, num2, num1 * num2);
    }
    else if (function == 4)
    {
        printf("Enter Number 1 and 2:\n");
        scanf("%f%f", &num1, &num2);
        printf("Num1/Num2 is %.1f", num1 / num2);
    }
    else if (function == 5)
    {
        printf("Enter the Number:");
        scanf("%f", &num1);

        // Natural logarithm (base e)
        double log_e = log(num1);
        printf("Natural log of %.2f is: %.2f\n", num1, log_e);

        // Logarithm base 10
        double log_10 = log10(num1);
        printf("Log base 10 of %.2f is: %.2f\n", num1, log_10);

        // Logarithm base 2 (using the change of base formula)
        double log_2 = log(num1) / log(2);
        printf("Log base 2 of %.2f is: %.2f\n", num1, log_2);
    }
    else if (function == 6)
    {
        printf("Enter the Number:");
        scanf("%f", &num1);
        printf("The Square root of %.1f is %.1f", num1, pow(num1, (0.5)));
    }

    return 0;
}