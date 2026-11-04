// Create an enum for months and print how many days each month has.

#include <stdio.h>

int main()
{
    enum month
    {
        JANUARY = 1,
        FEBRUARY,
        MARCH,
        APRIL,
        MAY,
        JUNE,
        JULY,
        AUGUST,
        SEPTEMBER,
        OCTOBER,
        NOVEMBER,
        DECEMBER
    };

    enum month m;
    int days;

    printf("Enter month number (1-12): ");
    scanf("%d", &m);

    if (m == FEBRUARY)
    {
        days = 28;
    }
    else if (m == APRIL || m == JUNE || m == SEPTEMBER || m == NOVEMBER)
    {
        days = 30;
    }
    else if (m >= JANUARY && m <= DECEMBER)
    {
        days = 31;
    }
    else
    {
        printf("Invalid month");
        return 0;
    }

    printf("Number of days = %d", days);

    return 0;
}