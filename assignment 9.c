#include <stdio.h>

// Function declaration
int findLargest(int a, int b, int c);

int main()
{
    int num1, num2, num3;
    int largest;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Enter third number: ");
    scanf("%d", &num3);

    // Function call
    largest = findLargest(num1, num2, num3);

    printf("Largest Number = %d\n", largest);

    return 0;
}

// Function definition
int findLargest(int a, int b, int c)
{
    int largest;

    largest = a;

    if (b > largest)
    {
        largest = b;
    }

    if (c > largest)
    {
        largest = c;
    }

    return largest;
}