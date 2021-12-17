#include <stdio.h>
int sum(int a, int b);
int main()
{
    int x = 4, y = 7;
    printf("THE VALUE OF 4+7 IS %d\n", sum(x, y));
    printf("THE VALUE OF x AND b IS %d AND %d\n", x, y);
    printf("THE VALUE OF x AND b AFTER FUNCTION CALL IS %d AND %d\n", sum(x, y));
    return 0;
}
int sum(int a, int b)
{
    int c = a + b;
    b = 3434;
    a = 23432;
    return c;
}