#include <stdio.h>
#include <string.h>

typedef struct date
{
    int date,month,year;
}date;

void display(date d)
{
    printf("The date is: %d/%d/%d\n",d.date,d.month,d.year);
}

int dateCmp(date d1, date d2)
{
//decision on the basis of year month and date comparision
    if (d1.year>d2.year)
    {
        return 1;
    }
    if (d1.year<d2.year)
    {
        return -1;
    }
//decision on the basis of month comparision

    if (d1.month>d2.month)
    {
        return 1;
    }
    if (d1.month<d2.month)
    {
        return -1;
    }    
//decision on the basis of date comparision
    if (d1.date>d2.date)
    {
        return 1;
    }
    if (d1.date<d2.date)
    {
        return -1;
    }
    return 0;
}
int main()
{
    date d1={2,1,21};
    date d2={2,1,21};
    display(d1);
    display(d2);
    int a= dateCmp(d1, d2);
    printf("Date comparision function returns: %d\n", a);
    return 0;
}