//a program to add two numbers using increment and decrement operators
#include <stdio.h>

// Function that adds b to a without using +
int addUsingIncrement(int a, int b)
{
    if (b > 0)
    {
        while (b--)
        {
            a++;
        }
    }
    else
    {
        while (b++)
        {
            a--;
        }
    }
    return a;
}

int main(void)
{
    int a, b;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int sum = addUsingIncrement(a, b);

    // Output result
    printf("Sum = %d\n", sum);

    return 0;
}
