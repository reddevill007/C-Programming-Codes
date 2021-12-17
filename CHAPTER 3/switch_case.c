#include <stdio.h>

int main()
{
    int rating;
    printf("ENTER YOUR RATIN(1-5)\n");
    scanf("%d", &rating);

    switch (rating)
    {
    case 1:
        printf("YOUR RATING IS 1\n");
        break;
    case 2:
        printf("YOUR RATING IS 2\n");
        break;
    case 3:
        printf("YOUR RATING IS 3\n");
        break;
    case 4:
        printf("YOUR RATING IS 4\n");
        break;
    case 5:
        printf("YOUR RATING IS 5\n");
        break;
    default:
        printf("INVALID RATING\n");
        break;
    }
    return 0;
}