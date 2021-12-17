#include <stdio.h>
#include <string.h>

int main()
{
    char *st = "THIS";
    char st2[45];
    strcpy(st2, st);
    printf("NOW st2 IS %s",st2);
    return 0;
}