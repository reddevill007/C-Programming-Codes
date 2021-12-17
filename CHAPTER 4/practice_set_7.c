#include <stdio.h>

int main()
{
    int n, prime = 1;
    printf("ENTER THE NUMBER\n", n);
    scanf("%d", &n);

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 0)
    {
        printf("THIS IS NOT A PRIME NUMBER\n");
    }
    else
    {
        printf("THIS IS A PRIME NUMBER\n");
    }

    return 0;
}