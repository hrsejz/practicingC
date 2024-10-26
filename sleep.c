/* sleep.c */

#include <stdio.h>
#include <unistd.h>

int main()
{
    printf("Please wait while processing..........");
    fflush(stdout);
    sleep(2);
    printf("Thanks for waiting!");
}