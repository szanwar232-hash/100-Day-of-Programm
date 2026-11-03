// Define an enum for traffic lights (RED, YELLOW, GREEN)
// and print "Stop", "Wait", or "Go" based on its value.

#include <stdio.h>

int main()
{
    enum trafficLight
    {
        RED,
        YELLOW,
        GREEN
    };

    enum trafficLight light;

    printf("Enter traffic light value (0 for RED, 1 for YELLOW, 2 for GREEN): ");
    scanf("%d", &light);

    if (light == RED)
    {
        printf("Stop");
    }
    else if (light == YELLOW)
    {
        printf("Wait");
    }
    else if (light == GREEN)
    {
        printf("Go");
    }
    else
    {
        printf("Invalid value");
    }

    return 0;
}