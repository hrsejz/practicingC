#include <stdio.h>

int main()
{
    // scanner function
    int age;
    double weight;
    char grade;

    printf("Enter your age here: ");
    scanf("%d", &age);
    printf("Age = %d\n", age);

    printf("Enter your grade: ");
    scanf("\n");
    scanf("%c", &grade);
    printf("Grade = %c\n", grade);

    printf("Enter your weight: ");
    scanf("%lf", &weight);
    printf("Weight = %.2lf\n", weight);

    int a;
    char b;
    printf("Enter an int and then a char,e.g. 8: ");
    scanf("%i %c", &a, &b);
    printf("Interger: %i\n", a);
    printf("Character: %c",b);

    return 0;
}