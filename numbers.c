/* numbers.c */

#include <stdio.h>

int main()
{
    int x, y, answer;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("X: %d\n", x);
    printf("Enter another number: ");
    scanf("%i", &y);
    printf("Y: %i\n", y);

    answer = x + y;

    printf("The answer is X + Y = %d", answer);

    return 0;
}