#include <stdio.h>

int sum(int x);
int main()
{
    int n;
    printf("Enter the value of n\n", n);
    scanf("%d", &n);

    printf("The sum of first n number is %d\n",sum(n));
    return 0;
}
int sum(int x)
{
    if (x == 1 || x == 0)
    {
        return 1;
    }
    else
    {
        return x + sum(x - 1);
    }
}