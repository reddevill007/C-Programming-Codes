#include <stdio.h>

int main()
{
    int i = 0, n, factorial = 1;
    printf("ENTER THE NUMBER\n", n);
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
        printf("THE VALUE OF FACTORIAL %d IS %d\n", n, factorial);
    return 0;
}