/* pointers.c */

#include <stdio.h>
#include <string.h>

int main()
{
    char str[32];
    char *p;
    strncpy(str, "I love apples", 31);
    p = str;
    printf("1st: %s\n", p);

    /* ******************************* */

    char str2[32];
    char *p2;
    strncpy(str2, "I love apples", 31);
    p2 = str2;
    p2 += 2;
    printf("2nd: %s\n", p2);

    /* ******************************* */

    char str3[32];
    char *p3;
    strncpy(str3, "I love apples", 31);
    p3 = str3;
    printf("3rd: %c\n", *p3);

    /* ******************************* */

    char str4[32];
    char *p4;
    strncpy(str4, "I love apples", 31);
    p4 = str4;
    p4 += 3;
    printf("4th: %c\n", *p4);

    return 0;
}