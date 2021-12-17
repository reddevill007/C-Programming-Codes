/*
    <=== malloc() function in C ===>
    -> stands for memory allocation.
    -> The malloc() function allocates single block of requested memory.
    -> It doesn't initialize memory at execution time, so it has garbage value initially
    -> It returns NULL if memory is not sufficient.
    -> The return value is void pointer to the allocated space.
    -> therefore the void pointer need to be casted to the appropriate type as per reqirement.
    -> The syntax of malloc() function is given below:
            ptr=(cast-type*) malloc(byte-size);
            
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr, n;

    printf("Enter the size of malloc: ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int)); 

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