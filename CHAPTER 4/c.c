#include <stdio.h>

int main()
{
    long long n;
    int  m, z, x = 0, y = 0;
    printf("Please insert the number for the program:");
    scanf("%lld", &n);
    int flag = 0;
    int counter = 1;
    while (n != 0)
    {
        if (counter % 2 == 0)
        {
            y += n % 10;
            n /= 10;
        }
        else
        {
            x += n % 10;
            n /= 10;
        }
        counter++;
    }

    if (counter % 2 == 0)
    {
        int temp = x;
        x = y;
        y = temp;
    }
    z=x-y;
    printf("Sum of digits in odd  places:%d\n", y);
    printf("Sum of digits in even  places:%d\n", x);
    printf("The value of x-y is:%d\n", z);
    return 0;
}