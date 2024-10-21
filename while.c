/* while.c */

#include <stdio.h>

int main()
{
    int x = 0;
    while (x < 10)
    {
        printf("Do you want to quit? Press 10 or any number above\n");
        scanf("%d", &x);
    }
    
    return 0;
}