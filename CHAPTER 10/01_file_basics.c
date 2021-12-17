#include <stdio.h>
#include <string.h>

int main()
{
    FILE *ptr;
    ptr = fopen("sample.txt", "r"); //-->for reading the file (if file does not exist it will return NULL)
    ptr = fopen("sample.txt", "w"); //-->for writing the file (if file does not exist it will create the file)
    return 0;
}