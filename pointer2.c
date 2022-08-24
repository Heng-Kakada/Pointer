#include <stdio.h>

void nextLine();

int main(void)
{
    int m = 300;
    float fx = 300.600006;
    char cht = 'z';
    printf("Pointer : Demonstrate the use of & and * operator :\n");
    nextLine();

    printf("m = %d\n", m);
    printf("fx = %f\n", fx);
    printf("cht = %c\n", cht);

    printf("Using & operator : \n");
    nextLine();

    printf("address of m = %p\n", &m);
    printf("address of fx = %p\n", &fx);
    printf("address of z = %p\n", &cht);

    printf("Using & and * operator : \n");
    nextLine();

    printf("value at address of m = %d\n", *(&m));
    printf("value at address of fx = %f\n", *(&fx));
    printf("value at address of z = %c\n", *(&cht));

    int *p1 = &m;
    float *p2 = &fx;
    char *p3 = &cht;

    printf("Using only pointer operator :\n");
    nextLine();

    printf("address of m = %p\n", p1);
    printf("address of fx = %p\n", p2);
    printf("address of cht = %p\n", p3);

    printf("Using only pointer operator :\n");
    nextLine();

    printf("value at address of m = %d\n", *p1);
    printf("value at address of fx = %f\n", *p2);
    printf("value at address of cht = %c\n", *p3);
}

void nextLine()
{
    printf("----------------------------------------------------------\n");
}

// Pointer : Demonstrate the use of & and * operator :
// ----------------------------------------------------------
// m = 300
// fx = 300.600006
// cht = z
// Using & operator :
// ----------------------------------------------------------
// address of m = 0x16ba031dc
// address of fx = 0x16ba031d8
// address of z = 0x16ba031d7
// Using & and * operator :
// ----------------------------------------------------------
// value at address of m = 300
// value at address of fx = 300.600006
// value at address of z = z
// Using only pointer operator :
// ----------------------------------------------------------
// address of m = 0x16ba031dc
// address of fx = 0x16ba031d8
// address of cht = 0x16ba031d7
// Using only pointer operator :
// ----------------------------------------------------------
// value at address of m = 300
// value at address of fx = 300.600006
// value at address of cht = z