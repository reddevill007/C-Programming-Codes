#include <stdio.h>

int main()
{
    int marks[4];
    int *ptr;
    // ptr = &marks[0];
    ptr = marks;

    for (int i = 0; i < 4; i++)
    {
        printf("ENTER THE VALUE OF MARKS FOR  STD %d: \n", i+1);
        scanf("%d", ptr);
        ptr++;
    }

       for (int i = 0; i < 4; i++)
    {
        printf("ENTER THE VALUE OF MARKS FOR  STD %d is %d\n",i+1, marks[i]);
    }
    return 0;
}