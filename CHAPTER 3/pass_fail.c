#include <stdio.h>

int main()
{
    int physics, chemistry, maths;
    float total;

    printf("ENTER YOUR MARKS IN PHYSICS\n");
    scanf("%d", &physics);

    printf("ENTER YOUR MARKS IN CHEMISTRY\n");
    scanf("%d", &chemistry);

    printf("ENTER YOUR MARKS IN MATHS\n");
    scanf("%d", &maths);

total = (physics + chemistry + maths) / 3;
if ((total <40) || physics<33 || maths<33 || chemistry<33)
{
printf("YOUR TOTAL  PERCENTAGE IS %f AND YOU ARE FAILED\n", total);
}
else {
    printf("YOUR TOTAL  PERCENTAGE IS %f AND YOU ARE PASS\n", total);
}
    return 0;
}