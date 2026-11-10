// Show that enums store integers by printing assigned values.

#include <stdio.h>

int main()
{
    enum values
    {
        FIRST = 5,
        SECOND = 10,
        THIRD = 15,
        FOURTH = 20
    };

    printf("FIRST = %d\n", FIRST);
    printf("SECOND = %d\n", SECOND);
    printf("THIRD = %d\n", THIRD);
    printf("FOURTH = %d\n", FOURTH);

    return 0;
}