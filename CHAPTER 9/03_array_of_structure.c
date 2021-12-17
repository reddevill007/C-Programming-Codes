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
  struct employee facebook[100];
  facebook[0].code=100;
  facebook[0].salary=100;
  strcpy(facebook[0].name,"Saurabh");

    facebook[1].code=101;
  facebook[1].salary=100.123;
  strcpy(facebook[1].name,"Shubham");

    facebook[3].code=102;
  facebook[3].salary=100.345;
  strcpy(facebook[3].name,"Rahul");

    facebook[4].code=103;
  facebook[4].salary=100.22;
  strcpy(facebook[4].name,"Shivam");
  printf("done");
  return 0;
}