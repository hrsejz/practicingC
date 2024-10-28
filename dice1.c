#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int our_random_function(int max)
{
    /* This will generate a random number between 1 and 6 */
    int x;
    x = rand() % max + 1;

    return x;
}

int main()
{
    int balance = 1000;
    int bet;
    int guess;
    int dice;

    srand(getpid());      /* This will seed the random number generator */
    pid_t pid = getpid(); // Get the current process ID
    printf("Process ID: %d\n", pid);

    while (balance > 0)

    {
        printf("\n---------------------------------\n\nPlace a Bet. You have %d$\n", balance);
        scanf("%d", &bet);
        printf("Bet: %d$\n", bet);

        printf("Guess a number between 1 to 6. Press 0 to quit.\n");
        scanf("%d", &guess);
        printf("Guess: %d\n", guess);

        if (guess == 0)
        {
            printf("\nGuessed 0...........Exiting\n");
            break;
        }

        if (guess < 1 || guess > 6)
        {
            printf("Please guess a number between 1 and 6.\nRESTARTING GAME\n");
            sleep(1);
            continue; // Prompt the user again for a valid guess
        }

        printf("Throwing..........");

        sleep(2);
        dice = our_random_function(6);
        printf("Dice: %d\n", dice);

        if (dice == guess)
        {
            printf("Guess == Dice\n");
            // printf("Guess: %d\n", guess);
            balance = balance + (bet * 3);
            printf("Inc Balance: %d\n", balance);
        }
        else
        {
            printf("Guess =/= Dice\n");
            // printf("Guess: %d\n", guess);
            balance = balance - bet;
            printf("Dec Balance: %d\n", balance);
        }
    }

    printf("\nExited: Balance: %d\n", balance);

    return 0;
}