#include <stdio.h>

int main()
{
    int a, b;

    printf("ENTER THE VALUE OF a\n");
    scanf("%d", &a);
    for (int b=1; b; b++)
    {
        printf("%d X %d =%d\n", a, b, a * b);
        if (b == 10)
        {
            break;
        }
    }
    return 0;
}