/* countdown.c */

#include <stdio.h>
#include <unistd.h>

int main()
{
    int number;
    number = 5;

    // while (number >= 0)
    // {
    //     printf("Countdown: %d\n", number);
    //     sleep(1);
    //     number = number - 1;
    // }
    // printf("\nCouuntdown Over");

    while (1)
    {
        printf("Countdown: %d\n", number);
        sleep(0.5);
        number -= 1; //number = number - 1; OR number--;

        if (number < 1)
            break;
    }
    printf("\nCountdown Over");

    return 0;
}