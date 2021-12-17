#include <stdio.h>

int main()
{
    int n;
    printf("ENTER THE VALUE OF n \n");
    scanf("%d", &n);
    for (int i = n; i; i--)
    {
        printf("THE VALUE OF i IS %d\n", i);
    }
    return 0;
}