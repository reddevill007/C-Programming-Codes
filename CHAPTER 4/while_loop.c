#include <stdio.h>

int main()
{
    int a;
    printf("ENTER THE VALUE OF a\n", a);
    scanf("%d", &a);
    while (a < 10)
    {
        printf("%d\n", a);
        a++;
    }
//if condition never become false the loop become infinite loop
    return 0;
}