/*
    <=== free() function in C ===>
    -> Used to free the allocated memory
    -> The memory occupied by malloc() or calloc() functions must be released by calling free() function. Otherwise, it will consume memory until program exit.
    -> The syntax of realloc() function is given below:
            free(ptr);
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

    free(ptr);
    return 0;
}