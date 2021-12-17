#include <stdio.h>
#include <string.h>

int main()
{
    FILE *ptr;
    // fgetc demo for reading a file
    // ptr = fopen("getcdemo.txt", "r");
    // char c = fgetc(ptr);    
    // printf("The value of my character is %c\n",c;

    // printf("The value of my character is %c\n",fgetc(ptr));
    // printf("The value of my character is %c\n",fgetc(ptr));
    // printf("The value of my character is %c\n",fgetc(ptr));
    // printf("The value of my character is %c\n",fgetc(ptr));
    // printf("The value of my character is %c\n",fgetc(ptr));
    // printf("The value of my character is %c\n",fgetc(ptr));
    // printf("The value of my character is %c\n",fgetc(ptr));
    // printf("The value of my character is %c\n",fgetc(ptr));
    // printf("The value of my character is %c\n",fgetc(ptr));
    // printf("The value of my character is %c\n",fgetc(ptr));
    
    ptr = fopen("putcdemo.txt", "w");
    fputc('c', ptr);
    fclose(ptr);
    return 0;
}