// Define an enum with SUCCESS, FAILURE, and TIMEOUT,
// and print messages accordingly.

#include <stdio.h>

int main()
{
    enum status
    {
        SUCCESS,
        FAILURE,
        TIMEOUT
    };

    enum status result;

    printf("Enter status (0 for SUCCESS, 1 for FAILURE, 2 for TIMEOUT): ");
    scanf("%d", &result);

    if (result == SUCCESS)
    {
        printf("Operation successful.");
    }
    else if (result == FAILURE)
    {
        printf("Operation failed.");
    }
    else if (result == TIMEOUT)
    {
        printf("Operation timed out.");
    }
    else
    {
        printf("Invalid status.");
    }

    return 0;
}