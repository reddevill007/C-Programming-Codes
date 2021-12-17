#include <stdio.h>
int main()
{
    int i, n, lar, sm, sum, count;
    printf("Enter first number \n");
    scanf("%d", &n);
    count = 1;
    sum = n;
    lar = n;
    sm = n;
    for (i = 1; i > 0; i++)
    {
        printf("\n Enter another number \n");
        scanf("%d", &n);
        if (n > lar)
            lar = n;
        if (n < sm && n!=0)
            sm = n;
        if (n == 0)
        {
            break;
        }
        sum = sum + n;
        count++;
    }
    float avg =(float) sum / count;
    printf("\n The largest number is %d", lar);
    printf("\n The smallest number is %d", sm);
    printf("\n The average of all the number entered by the user is %f", avg);
    return 0;
}