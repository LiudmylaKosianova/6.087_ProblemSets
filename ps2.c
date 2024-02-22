#include <stdio.h>
#include <limits.h>
#include <float.h>


int main(){

    printf("Size of char is %zu\n", sizeof(char));
    printf("Minimum value of char is %d\n", CHAR_MIN);
    printf("Maximum value of char is %d\n", CHAR_MAX);

    unsigned char mu = 0;
    printf("Size of unsigned char is %zu\n", sizeof(mu));
    printf("Minimum value of unsigned char is %d\n", 0);
    printf("Maximum value of unsigned char is %d\n", UCHAR_MAX);

    short int a = 0;
    printf("Size of short int is %zu\n", sizeof(a));
    printf("Minimum value of short int is %d\n", SHRT_MIN);
    printf("Maximum value of short int is %d\n", SHRT_MAX);

    int b = 0;
    printf("Size of int is %zu\n", sizeof(b));
    printf("Minimum value of int is %d\n", INT_MIN);
    printf("Maximum value of int is %d\n", INT_MAX);

    unsigned int c = 0;
    printf("Size of unsigned int is %zu\n", sizeof(c));
    printf("Minimum value of unsigned int is %d\n", 0);
    printf("Maximum value of unsigned int is %u\n", UINT_MAX);

    unsigned long d = 0;
    printf("Size of unsigned long is %zu\n", sizeof(d));
    printf("Minimum value of unsigned long is %d\n", 0);
    printf("Maximum value of unsigned long is %lu\n", ULONG_MAX);

    float e = 0;
    printf("Size of float is %zu\n", sizeof(e));
    printf("Minimum value of float is %E\n", FLT_MIN);
    printf("Maximum value of float is %E\n", FLT_MAX);





    return 0;
}