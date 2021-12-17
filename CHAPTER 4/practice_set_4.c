#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("MULTIPLICATION TABLE OF 10\n");
    for (int i = 1; i<=10; ++i)
    {
        printf("%d X %d =%d\n",n, i, i * n);
    }
    return 0;
}