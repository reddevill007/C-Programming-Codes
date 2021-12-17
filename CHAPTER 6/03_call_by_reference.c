#include <stdio.h>
void swap(int *a, int *b);
void wrong_swap(int a, int b);
int main()
{
    int x = 3, y = 4;
    printf("THE VALUE OF x AND b BEFORE SWAP IS %d AND %d\n", x, y);
    // wrong_swap(x,y); //WILL NOT WORK DUE TO CALL BY VALUE
    swap(&x, &y);//WILL  WORK DUE TO CALL BY REFFRENCE
    printf("THE VALUE OF x AND b AFTER SWAP IS %d AND %d\n", x, y);

    return 0;
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void wrong_swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}