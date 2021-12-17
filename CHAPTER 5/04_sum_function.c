#include <stdio.h>
//sum is a function which take a and b as input ad returns an interger as an output
int sum();
int product();
int main()
{
    sum();
    product();
    return 0;
}
int sum()
{
    int a, b;
    printf("ENTER THE VALUE OF a\n", a);
    scanf("%d", &a);

    printf("ENTER THE VALUE OF a\n", b);
    scanf("%d", &b);

    int result;
    result = a + b;
    printf("THE VALUE OF a + b IS %d\n", result);
    return result;
}
int product()
{
    int c, d;
    printf("ENTER THE VALUE OF c\n", c);
    scanf("%d", &c);

    printf("ENTER THE VALUE OF d\n", d);
    scanf("%d", &d);

    int answer;
    answer = c * d;
    printf("THE VALUE OF c * d IS %d\n", answer);
    return answer;
}