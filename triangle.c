/* triangle.c */

#include <stdio.h>

int area_triangle(int base, int height)
{
    int area;
    area = (base * height) / 2;

    return area;
}

int main()
{
    int b, h, a;

    printf("Triangle Base: ");
    fflush(stdout);
    scanf("%d", &b);

    printf("Triangle Height: ");
    fflush(stdout);
    scanf("%d", &h);

    a = area_triangle(b, h);
    printf("Triangle Area: %d\n", a);

    return 0;
}