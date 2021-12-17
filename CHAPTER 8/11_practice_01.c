#include <stdio.h>
#include <string.h>

int main()
{
    char s1[34];
    char s2[34];
    char c;
    int i=0;

    printf("ENTER THE VALUE OF FIRST STRING\n");
    scanf("%s", s1);
    printf("ENTER THE VALUE OF SECOND STRING CHARACTER BY CHARACTER\n");
    fflush(stdin);

    while (c != '\n'){
    fflush(stdin);
    scanf("%c", &c);
        s2[i] = c;
        i++;
    }
    s2[i]='\0';

    printf("THE VALUE OF s1 IS %s\n",s1);
    printf("THE VALUE OF s2 IS %s\n",s2);
    printf("strcmp for these strings return %d",strcmp(s1,s2));

    return 0;
}