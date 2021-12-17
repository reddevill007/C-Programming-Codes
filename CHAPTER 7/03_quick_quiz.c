#include <stdio.h>

int main()
{
    int n, array[n], count = 0;

    printf("Enter the no of elements in array: ");
    scanf("%d", &n);

    printf("Enter the elements of array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
        count++;
    }

    printf("The no of elements in your array is %d\n", count);
    
    return 0;
}