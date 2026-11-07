// Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY)
// and perform operations using switch.

#include <stdio.h>

int main()
{
    enum operation
    {
        ADD = 1,
        SUBTRACT,
        MULTIPLY
    };

    enum operation choice;
    int a, b;

    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch (choice)
    {
        case ADD:
            printf("Result = %d", a + b);
            break;

        case SUBTRACT:
            printf("Result = %d", a - b);
            break;

        case MULTIPLY:
            printf("Result = %d", a * b);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}