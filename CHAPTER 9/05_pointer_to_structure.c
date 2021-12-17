#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

int main()
{
    struct employee e1;
    struct employee *ptr;

    ptr=&e1;
    //(*ptr).code=101;
    ptr->code=101;  //---> same as above line (arrow operator)
    printf("%d",e1.code);

    return 0;
}