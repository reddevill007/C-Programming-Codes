#include <stdio.h>

// void printArray(int *ptr, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("THE VALUE OF ELEMENT %d IS %d\n", i + 1, *(ptr+i));
//     }
// }

void printArray(int ptr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("THE VALUE OF ELEMENT %d IS %d\n", i + 1, ptr[i]);
    }
    ptr[2]=7890; //this value wil be changed in arr array of main  as well
}

int main()
{
    int arr[] = {12, 54, 547, 52, 54, 47, 45};
    printArray(arr, 7);
    printf("%d\n", arr[2]);
    return 0;
}