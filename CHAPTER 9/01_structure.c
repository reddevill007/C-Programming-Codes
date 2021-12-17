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
    int a=34;
    char b='g';
    float d=87.8789;
    //employ e1;
    //e1.salary=34.655;-----> wont work without employ structure
    struct employee e1;
    e1.code=100;
    e1.salary=34.454;
    //e1.name="Harry";---->wont work
    strcpy(e1.name, "Saurabh");    
    printf("%d\n", e1.code);
    printf("%s\n", e1.name);
    printf("%f\n", e1.salary);
    return 0;
}