#include <stdio.h>

int main()
{
    int marks[4]; //allocate space for 4 integer
    printf("ENTER THE VALUE OF marks FOR STD 1\n");
    scanf("%d", &marks[0]);

    printf("ENTER THE VALUE OF marks FOR STD 2\n");
    scanf("%d", &marks[1]);

    printf("ENTER THE VALUE OF marks FOR STD 3\n");
    scanf("%d", &marks[2]);

    printf("ENTER THE VALUE OF marks FOR STD 4\n");
    scanf("%d", &marks[3]);

    printf("YOU HAVE ENTERED %d, %d, %d AND %d\n", marks[0], marks[1], marks[2], marks[3]);

    return 0;
}