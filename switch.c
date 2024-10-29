/* switch.c */

#include <stdio.h>

int main()
{
    int x;
    printf("Press a number: 1 for Apples, 2 For Bananas, 3 for Oranges, 4 for Kiwi\n");
    scanf("%d", &x);

    switch (x)
    {
    case 1:
        printf("Apples\n");
        break;
    case 2:
        printf("Bananas\n");
        break;
    case 3:
        printf("Oranges\n");
        break;
    case 4:
        printf("Kiwi\n");
        break;
    default:
        printf("Something Else\n");
        break;
    }

    return 0;
}