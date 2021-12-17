#include <stdio.h>
void multable(int *mul,int num,int n){
    printf("the multiplication table of %d is :\n",num);
    for (int i = 0; i < 10; i++)
    {
        mul[i] = 2 * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d    X    %d  =  %d\n", num,i + 1, mul[i]);
    }
    printf("********************************************************************************************************\n");
}
int main(){
    int n,x,y;
    int table[3][10];
    printf("the three number whose table you want\n");
    scanf("%d %d %d",&n,&x,&y);

    multable(table[0],n,10);
    multable(table[1],x,10);
    multable(table[2],y,10);
    return 0;
}