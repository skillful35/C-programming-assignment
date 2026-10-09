#include <stdio.h>

// Function declarations
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(float a, float b);

int main()
{
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Addition = %d\n", add(num1, num2));
    printf("Subtraction = %d\n", subtract(num1, num2));
    printf("Multiplication = %d\n", multiply(num1, num2));

    if (num2 != 0)
    {
        printf("Division = %.2f\n", divide(num1, num2));
    }
    else
    {
        printf("Division by zero is not allowed.\n");
    }

    return 0;
}

// Function definitions
int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

float divide(float a, float b)
{
    return a / b;
}