/*
    <=== calloc() function in C ===>
    -> stands for contiguous allocation.
    -> The malloc() function allocates multiple block of requested memory.
    -> It initially initialize all bytes to zero
    -> It returns NULL if memory is not sufficient.
    -> The return value is void pointer to the allocated space.
    -> therefore the void pointer need to be casted to the appropriate type as per reqirement.
    -> The syntax of calloc() function is given below:
            ptr = (cast-type*) calloc(number, byte-size);
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int *ptr, n;

    printf("Enter the size of calloc: ");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of %d element is: ", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The value of %d element is: %d\n", i, ptr[i]);
    }
    
    return 0;
}