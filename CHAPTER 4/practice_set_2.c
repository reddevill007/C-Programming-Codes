#include <stdio.h>

int main()
{
    printf("REVERSE MULTIPLICATION TABLE OF 10\n");
    for (int i = 10; i; i--)
    {
        printf("10 X %d =%d\n", i, i * 10);
    }
    return 0;
}