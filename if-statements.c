/* if-statements.c */

#include <stdio.h>

int main()
{
    int speed;

    printf("How fast are you driving? (km/h)\n");
    scanf("%d", &speed);

    if (speed > 100)
    {
        printf("You are overspeeding!\n");
    }
    else if (speed > 80)
    {
        printf("You are driving fast!!\n");
    }
    else if (speed > 40)
    {
        printf("You are driving at normal speed\n");
    }
    else
    {
        printf("Speed: OK\n");
    }

    return 0;
}