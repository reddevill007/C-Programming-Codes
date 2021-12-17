#include <stdio.h>

int main()
{
    int i = 0;
    int n;
    printf("ENTER THE NUMBER\n", n);
    scanf("%d", &n);

    do
    {
printf("THE NUMBER IS %d\n",i);
i++;
    } while (i < n);
    return 0;
}