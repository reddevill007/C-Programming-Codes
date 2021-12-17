#include <stdio.h>

int main(){
      int age;
      int vippass=0;
      vippass=1;
    printf("ENTER YOUR AGE\n");
    scanf("%d", &age);

    if ((age <=70 && age>=18) || vippass==1)
    {
        printf("YOU ARE BETWEEN 18 AND 17 YOU CAN DRIVE\n");
    }
    else{
        printf("YOU CAN NOT DRIVE\n");
    }

    if (age==50){
        printf("HALF CENTUARY\n");
    }
    return 0;
}