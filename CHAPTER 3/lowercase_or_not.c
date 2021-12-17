#include <stdio.h>

int main()
{
    // 97-122 = a-z ASCII values
    char ch;
    printf("ENTER THE CHARACTER\n");
    scanf("%c", &ch);

    if(ch<=122 && ch>=97){
        printf("IT IS LOWERCASE\n");
    }
    else
    {
    printf("IT IS UPPERCASE\n");
    }
    
    return 0;
}