#include <stdio.h>

int main()
{
    int year;

    printf("ENTER THE YEAR\n");
    scanf("%d", &year);

    if (year % 4 == 0  && year % 400 == 0 )
    {
        printf("THE YEAR YOU ENTER IS A LEAP YEAR\n");
    }
    else if (year % 100 == 0)
    {
        printf("THE YEAR YOU ENTER IS  NOT LEAP YEAR\n");
        
    }
    
    else
    {
        printf("THE YEAR YOU ENTER IS  NOT LEAP YEAR\n");
    }
    return 0;
}