#include <stdio.h>
void printAdd(int a)
{
    printf("THE ADDRESS OF VARIABLE a IS %u\n",&a);
}
int main(){
    int i=4;
    printf("THE VALUE OF VARIABLE i IS %d\n", i);
printAdd(i);
    printf("THE ADDRESS OF VARIABLE i IS %u\n",&i);
    return 0;
}