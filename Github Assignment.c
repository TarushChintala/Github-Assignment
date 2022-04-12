/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a;
    char b;
    double c;
    long int d;
    unsigned int e;
    long double f;
    short int g;
    unsigned long int h;
    unsigned short i;
    float j;
        printf("The size of int data type is %lu",sizeof(a));
        printf("\nThe size of char data type is %lu",sizeof(b));
        printf("\nThe size of double data type is %lu",sizeof(c));
        printf("\nThe size of long int data type is %lu",sizeof(d));
        printf("\nThe size of unsigned int data type is %lu",sizeof(e));
        printf("\nThe size of long double data type is %lu",sizeof(f));
        printf("\nThe size of short data type is %lu",sizeof(g));
        printf("\nThe size of unsigned long int data type is %lu",sizeof(h));
        printf("\nThe size of unsigned short data type is %lu",sizeof(i));
        printf("\nThe size of float data type is %lu",sizeof(j));

    return 0;
}
