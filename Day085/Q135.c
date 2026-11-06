// Assign explicit values starting from 10 to enum constants
// and print them.

#include <stdio.h>

int main()
{
    enum numbers
    {
        FIRST = 10,
        SECOND,
        THIRD,
        FOURTH,
        FIFTH
    };

    printf("FIRST = %d\n", FIRST);
    printf("SECOND = %d\n", SECOND);
    printf("THIRD = %d\n", THIRD);
    printf("FOURTH = %d\n", FOURTH);
    printf("FIFTH = %d\n", FIFTH);

    return 0;
}