#include <stdio.h>

int main()
{
    int i = 34;
    int *j = &i; // j will now store the address of i
    printf("THE VALUE OF i IS %d\n", i);
    printf("THE VALUE OF i IS %d\n", *j);
    printf("THE ADDRESS OF i IS %u\n", &i);
    printf("THE ADDRESS OF i IS %u\n", j);
    printf("THE ADDRESS OF j IS %u\n", &j);
    printf("THE VALUE OF j IS %u\n", *(&j));

    return 0;
}