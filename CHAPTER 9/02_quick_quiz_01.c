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
    struct employee e1,e2,e3;
    printf("Enter code of e1 : ");
    scanf("%d", &e1.code);

    printf("Enter the salary of e1 : ");
    scanf("%f", &e1.salary);

    printf("Enter the name of e1 : ");
    scanf("%s", &e1.name);

    printf("Enter code of e2 : ");
    scanf("%d", &e1.code);
    
    printf("Enter the salary of e2 : ");
    scanf("%f", &e1.salary);

    printf("Enter the name of e2 : ");
    scanf("%s",&e1.name); 

    printf("Enter code of e3 : ");
    scanf("%d", &e1.code);
    
    printf("Enter the salary of e3 : ");
    scanf("%f", &e1.salary);

    printf("Enter the name of e3 : ");
    scanf("%s", &e1.name);
    return 0;
}