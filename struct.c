/* struct.c */

#include <stdio.h>
#include <string.h>

struct person
{
    char title[8];
    char name[32];
    int age;
};

int main()
{
    struct person haris;

    strncpy(haris.title, "doctor", 7);
    strncpy(haris.name, "haris", 31);
    haris.age = 38;

    printf("%s %s of age %i\n",
           haris.title,
           haris.name,
           haris.age);

    return 0;
}