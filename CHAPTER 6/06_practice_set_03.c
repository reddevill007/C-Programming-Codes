#include <stdio.h>
void sumandavg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (float)*sum / 2;
}
int main()
{
    int i, j, sum;
    float avg;
    i=3;
    j=6;
    sumandavg(i, j, &sum, &avg);
    printf("THE VALUE OF SUM IS %d\n", sum);
    printf("THE VALUE OF AVG IS %f\n", avg);
    return 0;
}