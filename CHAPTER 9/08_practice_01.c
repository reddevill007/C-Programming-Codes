#include <stdio.h>
#include <string.h>

struct vector
{
    int x;
    int y;
};
int main()
{
    struct vector v1, v2 ,v3;
    v1.x = 34;
    v1.y = 54;
    printf("X dim is %d and Y dim is %d\n", v1.x, v1.y);

    v2.x = 4;
    v2.y = 5;
    printf("X dim is %d and Y dim is %d\n", v2.x, v2.y);

    v3.x = 434;
    v3.y = 554;
    printf("X dim is %d and Y dim is %d\n", v3.x, v3.y);
    return 0;
}