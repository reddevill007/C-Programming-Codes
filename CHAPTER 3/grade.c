// THIS ISTHE PROGRAM TO GRADE 
#include <stdio.h>

int main()
{
    int grade;
    printf("ENTER YOUR GRADE(1-100)\n");
    scanf("%d", &grade);

     if (grade >=90 && grade <=100)
    {
        printf("YOUR GRADE IS A\n");
    }
    else if (grade >=80 && grade <=90)
    {
        printf("YOUR GRADE IS B\n");
    }
    else if (grade >=70 && grade <=80)
    {
        printf("YOUR GRADE IS C\n");
    }
        else if (grade >=60 && grade <=70)
    {
        printf("YOUR GRADE IS D\n");
    }
        else if (grade >=60 && grade <=70)
    {
        printf("YOUR GRADE IS E\n");
    }
        else if (grade >=0 && grade<=60)
    {
        printf("YOUR GRADE IS F\n");
    }
    else
    {
    printf("INVALID GRADE\n");
    }
    return 0;
}