#include <stdio.h>
#include <string.h>

int main()
{
    int count = 0;
    long long n;
    printf("Enter the number: ");
    scanf("%lld",&n);
    while (n!=0)
    {
        n/=10;
        count++;
    }
    printf("numer of digit is : %d",count);
    return 0;
}