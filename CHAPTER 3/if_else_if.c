#include <stdio.h>

int main()
{
    int num;
    printf("ENTER THE NUMBER\n");
    scanf("%d", &num);

    if (num == 1)
    {
        printf("YOUR NUMBER IS 1\n");
    }
    else if (num == 2)
    {
        printf("YOUR NUMBER IS 2\n");
    }
    else if (num == 3)
    {
        printf("YOUR NUMBER IS 3\n");
    }
    else
    {
    printf("ITS NOT 1 , 2 OR 3\n");
    }
    return 0;
}