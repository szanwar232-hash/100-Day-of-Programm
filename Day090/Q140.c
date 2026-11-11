// Define a struct with enum Gender and print person's gender.

#include <stdio.h>

int main()
{
    enum Gender
    {
        MALE = 1,
        FEMALE
    };

    struct Person
    {
        char name[50];
        enum Gender gender;
    };

    struct Person p;

    printf("Enter name: ");
    scanf("%s", p.name);

    printf("Enter gender (1 for Male, 2 for Female): ");
    scanf("%d", &p.gender);

    printf("Name: %s\n", p.name);

    if (p.gender == MALE)
    {
        printf("Gender: Male");
    }
    else if (p.gender == FEMALE)
    {
        printf("Gender: Female");
    }
    else
    {
        printf("Invalid gender");
    }

    return 0;
}