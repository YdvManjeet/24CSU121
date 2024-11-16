/* Wap to accept two integers numbers and swap them using 4 different methods in
C Language.
*/
#include <stdio.h>

// Method 1: Using a temporary variable
void swapUsingTemp(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Method 2: Without a temporary variable (using arithmetic operators)
void swapUsingArithmetic(int *a, int *b)
{
    *a = *a + *b; // a = a + b
    *b = *a - *b; // b = a - b => (a + b) - b = a
    *a = *a - *b; // a = a - b => (a + b) - a = b
}

// Method 3: Using bitwise XOR
void swapUsingXOR(int *a, int *b)
{
    *a = *a ^ *b; // a = a XOR b
    *b = *a ^ *b; // b = a XOR b => (a XOR b) XOR b = a
    *a = *a ^ *b; // a = a XOR b => (a XOR b) XOR a = b
}

// Method 4: Using a function to swap (pass by reference)
void swapByReference(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int num1, num2;

    // Input two integers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Display the original values
    printf("\nOriginal numbers: num1 = %d, num2 = %d\n", num1, num2);

    // Method 1: Using a temporary variable
    swapUsingTemp(&num1, &num2);
    printf("\nAfter swapping using a temporary variable: num1 = %d, num2 = %d\n", num1, num2);

    // Reset the values for next methods
    printf("\nEnter two integers again: ");
    scanf("%d %d", &num1, &num2);
    printf("\nOriginal numbers: num1 = %d, num2 = %d\n", num1, num2);

    // Method 2: Without using a temporary variable (using arithmetic)
    swapUsingArithmetic(&num1, &num2);
    printf("\nAfter swapping using arithmetic: num1 = %d, num2 = %d\n", num1, num2);

    // Reset the values for next methods
    printf("\nEnter two integers again: ");
    scanf("%d %d", &num1, &num2);
    printf("\nOriginal numbers: num1 = %d, num2 = %d\n", num1, num2);

    // Method 3: Using bitwise XOR
    swapUsingXOR(&num1, &num2);
    printf("\nAfter swapping using XOR: num1 = %d, num2 = %d\n", num1, num2);

    // Reset the values for next methods
    printf("\nEnter two integers again: ");
    scanf("%d %d", &num1, &num2);
    printf("\nOriginal numbers: num1 = %d, num2 = %d\n", num1, num2);

    // Method 4: Using a function to swap (pass by reference)
    swapByReference(&num1, &num2);
    printf("\nAfter swapping using a function (pass by reference): num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
