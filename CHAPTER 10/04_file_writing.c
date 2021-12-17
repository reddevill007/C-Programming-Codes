#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fptr;
    int num=45;
    fptr=fopen("genrated.txt", "w");
    fprintf(fptr, "The number is %d\n", num);
    fprintf(fptr, "thanxx for using fprintf");
    fclose(fptr);
    return 0;
}