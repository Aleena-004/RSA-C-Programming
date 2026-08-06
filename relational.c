#include <stdio.h>
#include<conio.h>

int main()
{
    int a = 10, b = 4;

    if (a > b)
        printf("a > b\n");
    else
        printf("a <= b\n");

    if (a >= b)
        printf("a >= b\n");
    else
        printf("a < b\n");

    if (a < b)
        printf("a < b\n");
    else
        printf("a >= b\n");

    if (a <= b)
        printf("a <= b\n");
    else
        printf("a > b\n");

    if (a == b)
        printf("a == b\n");
    else
        printf("a != b\n");

    if (a != b)
        printf("a != b\n");
    else
        printf("a == b\n");

    return 0;
}
