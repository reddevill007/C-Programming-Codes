#include <stdio.h>

int main()
{
    int age;
    printf("ENTER YOUR AGE\n");
    scanf("%d", &age);

    if (age >=70)
    {
        printf("YOU ARE ABOVE 70 YOU CAN NOT DRIVE");
    }
    else{
        printf("YOU CAN DRIVE\n");
    }

    if (age==50){
        printf("HALF CENTUARY\n");
    }
    return 0;
}