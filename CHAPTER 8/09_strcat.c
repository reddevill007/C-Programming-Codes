#include <stdio.h>
#include <string.h>

int main(){
    char s1[11]="HELLO";
    char s2[]="SAURABH";
    strcat(s1,s2);
    printf("NOW s1 IS %s",s1);
    return 0;
}