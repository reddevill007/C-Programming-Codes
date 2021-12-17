#include <stdio.h>
float force(float mass);
int main()
{
    int m;
    printf("Enter the value of mass in kg\n", m);
    scanf("%d", &m);
    printf("Enter the value of force in newton is\n%.3f kg/m/s^2\n", force(m));
    return 0;
}
float force(float mass){
    float result = mass * 9.8;
    return result;
}