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
    else
    {
        printf("Speed: OK\n");
    }

    return 0;
}