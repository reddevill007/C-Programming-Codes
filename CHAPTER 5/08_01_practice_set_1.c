#include <stdio.h>
float average(int a, int b, int c);

int main()
{
    int a, b, c;
    printf("Enter the value of a\n", a);
    scanf("%d", &a);

    printf("Enter the value of a\n", b);
    scanf("%d", &b);

    printf("Enter the value of a\n", c);
    scanf("%d", &c);

    printf("The average of a , b and c is %f",average(a, b, c));
    return 0;
}

float average(int a, int b, int c)
{
    float result;
    result = (float)(a + b + c) / 3;
    return result;
}