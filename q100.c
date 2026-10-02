//Q100: Write a program to solve question 100 for 100 Days of Code.

/*
Sample Test Cases:
Input 1:
5
Output 1:
Result = 5
*/

#include <stdio.h>
int main() {
    float val;
    printf("Enter input for question 100: ");
    if (scanf("%f", &val) == 1) {
        printf("The result for Q100 is:-> %.2f\n", val);
    }
    return 0;
}
