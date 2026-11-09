// Print all enum names and integer values using a loop.

#include <stdio.h>

int main()
{
    enum days
    {
        SUNDAY,
        MONDAY,
        TUESDAY,
        WEDNESDAY,
        THURSDAY,
        FRIDAY,
        SATURDAY
    };

    char names[7][10] = {
        "SUNDAY",
        "MONDAY",
        "TUESDAY",
        "WEDNESDAY",
        "THURSDAY",
        "FRIDAY",
        "SATURDAY"
    };

    int i;

    for (i = SUNDAY; i <= SATURDAY; i++)
    {
        printf("%s = %d\n", names[i], i);
    }

    return 0;
}