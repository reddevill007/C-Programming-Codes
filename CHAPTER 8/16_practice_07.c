#include <stdio.h>
#include <string.h>

int main()
{
    char st[100];
    char c;
    int count=0;
    printf("Enter a sentence\n");
    gets(st);
    printf("Enter the character to know its repitition in the sentence\n",c);
    scanf("%c", &c);
    
    for (int i = 0; i < strlen(st); i++)
    {
        if(st[i]==c)
        {
            count++;
        }
    }
    
    printf("Letter %c repeted %d times\n",c, count);
    return 0;
}