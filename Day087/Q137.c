// Create an enum for user roles (ADMIN, USER, GUEST)
// and display messages based on role.

#include <stdio.h>

int main()
{
    enum role
    {
        ADMIN = 1,
        USER,
        GUEST
    };

    enum role userRole;

    printf("1. Admin\n");
    printf("2. User\n");
    printf("3. Guest\n");

    printf("Enter your role: ");
    scanf("%d", &userRole);

    if (userRole == ADMIN)
    {
        printf("Welcome Admin.");
    }
    else if (userRole == USER)
    {
        printf("Welcome User.");
    }
    else if (userRole == GUEST)
    {
        printf("Welcome Guest.");
    }
    else
    {
        printf("Invalid role.");
    }

    return 0;
}