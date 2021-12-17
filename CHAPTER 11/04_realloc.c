/*
    <=== realloc() function in C ===>
    -> stands for reallocation.
    -> If memory is not sufficient for malloc() or calloc(), you can reallocate the memory by realloc() function. In short, it changes the memory size.
    -> The syntax of realloc() function is given below:
            ptr = realloc(ptr, new-size);
*/


#include <stdio.h>
#include <string.h>
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
    
    printf("Enter the size of realloc: ");
    scanf("%d", &n);

    ptr = realloc(ptr, n*sizeof(int)); 

    for (int i = 0; i < n; i++)
    {
        printf("Enter the new value of %d element is: ", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The new value of %d element is: %d\n", i, ptr[i]);
    }
    return 0;
}