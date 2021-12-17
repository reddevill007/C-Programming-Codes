#include <stdio.h>

int main()
{
    int a=4;
    int *ptr;
    ptr=&a;
        printf("THE VALUE OF VARIABLE a IS %d\n", a);
    printf("THE ADDRESS OF VARIABLE a IS %u\n", ptr);
    printf("THE VALUE OF VARIABLE a IS %d\n", *ptr);

    return 0;
}