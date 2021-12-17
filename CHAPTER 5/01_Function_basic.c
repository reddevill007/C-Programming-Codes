#include <stdio.h>
void display(); //function prototype

int main(){
    int a;
    printf("Initializing display function\n");
    display(); //function call
        printf("display function finished it work\n");
    return 0;
}

void display()   //function defination
{
    printf("This is display\n");
}