#include <stdio.h>
#include <string.h>

int main()
{
    char s1[45]="HELLO";
    char *s2="GAURABH";
    int val=strcmp(s1,s2);
    printf("NOW val IS %d",val);
    return 0;
}