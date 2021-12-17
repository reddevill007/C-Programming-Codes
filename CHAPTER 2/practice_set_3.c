#include <stdio.h>

int main()
{
    //to determine wheather a no is divisible by 97 or not
    int num;
    printf("ENTER THE NUMBER\n");
    scanf("%d", &num);
    printf("DIVISIBILITY TEST RETURNS %d\n", num%97);

    //step by step evalution of 3*x/y-z+k
    int x = 2, y = 3, z = 3, k = 1;
    int result=3*x/y-z+k;
    //3*2/3-3+1
    //6/3-3+1
    //2-3+1
    //0
    printf("the value of result is %d",result);
    return 0;
}