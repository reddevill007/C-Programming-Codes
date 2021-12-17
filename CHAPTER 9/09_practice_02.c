#include <stdio.h>
#include <string.h>

struct vector
{
    int x;
    int y;
};

struct vector sumvector(struct vector v1,struct vector v2)
{
    struct vector result;
    result.x = v1.x +v2.x;
    result.y = v1.y +v2.y;
return result;
}

int main()
{
    struct vector v1, v2 ,sum;
    v1.x = 34;
    v1.y = 54;
    printf("X dim is %d and Y dim is %d\n", v1.x, v1.y);

    v2.x = 4;
    v2.y = 5;
    printf("X dim is %d and Y dim is %d\n", v2.x, v2.y);
    sum = sumvector(v1,v2);
    printf("X dim is %d and Y dim is %d\n", sum.x, sum.y);

    return 0;

}