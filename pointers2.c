/* pointers2.c */

#include <stdio.h>

int main()
{
    int numb = 3; // Step 1: Declare an integer variable
    int *p;       // Step 2: Declare a pointer to an integer
    p = &numb;    // Step 3: Assign the address of numb to the pointer p

    /*
    int numb =3;
    int *p = &numb;
    */
 

    printf("Value of numb: %d\n", numb);                    // Prints: 3
    printf("Address of numb: %p\n", (void *)&numb);         // Prints the address of numb
    printf("Pointer p points to address: %p\n", (void *)p); // Same as address of numb
    printf("Value at address p: %d\n", *p);                 // Dereference p to get the value (3)

    return 0;
}