#include <stdio.h>
#include <string.h>

void decrypt(char *c){
    char*ptr=c;
    while (*ptr!='\0')
    {
        *ptr=*ptr-1;
        ptr++;
    }
    
}

int main()
{
    char c[] = "dpnf!up!nz!sppn";
    decrypt(c);
    printf("Decrypted string is: %s",c);
    return 0;
}