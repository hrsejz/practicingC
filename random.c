/* random.c */

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int our_random_function(int max)
{
    int x;
    x = rand() % max +1;

    return x;
}

int main()
{
    int random;

    // printf("%d\n", getpid());
    // return 0;
    
    /* *********************** */

    srand(getpid());  // srand(3);
    random = our_random_function(5);
    printf("%d\n", random);

    random = our_random_function(10);
    printf("%d\n", random);

    return 0;
}