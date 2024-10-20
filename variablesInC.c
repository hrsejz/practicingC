#include <stdio.h>

int main()
{
    printf("Hello World!\n");
    //'%d' format specifier
    int age = 25;       // int 4 bytes
    char initial = 'H'; // char 1 byte;
    double weight = 69.69;
    printf("age: %d\ninitial: %c\nweight: %.2f\n", age, initial, weight);

    int firstNumber = 33;
    printf("firstNumber: %d\n", firstNumber);
    int secondNumber = firstNumber;
    printf("secondNumber: %i", secondNumber);

    float flt = 8.8f; // float 4 bytes
    double dbl = 8.8; // double 8 bytes
    printf("\ntesting float %f and testing double %f\n", flt, dbl);

    printf("int size = %zu\n", sizeof(age));
    printf("double size = %zu\n", sizeof(weight));
    printf("%zu", sizeof(char));

    return 0;
}