#include <stdio.h>
int main(void)
{
    int m = 29;
    int *ab = &m;

    printf("Now ab is assigned with the address of m.\n");
    printf("Address of pointer ab : %p\n", ab);
    printf("Content of pointer ab : %d\n", *ab);

    m = 34;

    printf("The value of m assigned to 34 now.\n");
    printf("Address of pointer ab : %p\n", ab);
    printf("Content of pointer ab : %d\n", *ab);

    *ab = 7;

    printf("The pointer variable ab is assigned with the value 7 now\n");
    printf("Address of m : %p\n", &m);
    printf("Value of m : %d\n", m);
}

// output

// Now ab is assigned with the address of m.
// Address of pointer ab : 0x16eed31dc
// Content of pointer ab : 29
// The value of m assigned to 34 now.
// Address of pointer ab : 0x16eed31dc
// Content of pointer ab : 34
// The pointer variable ab is assigned with the value 7 now
// Address of m : 0x16eed31dc
// Value of m : 7