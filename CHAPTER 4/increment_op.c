#include <stdio.h>

int main(){
    int i=5;
printf("THE VALUE AFTER i++ IS %d\n ",i++);
 //i++ means first print then increment 
printf("THE VALUE AFTER i++ IS %d\n ",++i); 
//++i means first increment then print 
printf("THE VALUE OF i IS %d\n",i);
i+=10;
//increment is by 10
printf("THE VALUE OF i IS %d\n",i);
    return 0;
}