#include <stdio.h>

int main()
{
    int i = 1, sum = 0, n;
    printf("ENTER THE VALUE OF n\n", n);
    scanf("%d", &n);

    // for (i = 0; i <= n; i++)
    // {
    //     sum += i;
    // }

    // while (i <= n)
    // {
    //     sum += i;
    //     i++;
    // }

    do
    {
     sum += i;
     i++;
    } while (i<=n);
    
    printf("THE VALUE OF SUM 1 TO n IS %d\n", sum);
    return 0;
}