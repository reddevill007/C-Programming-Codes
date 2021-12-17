#include <stdio.h>
float conver();
int main()
{
    conver();
    return 0;
}
float conver()
{
    float celcius, far;
    printf("ENTER THE TEMPERATURE IN CELCIUS\n", celcius);
    scanf("%f", &celcius);
    far = (celcius * 9 / 5) + 32;
    printf("THE VALUE OF THIS CELCIUS TEMPERTAURE IN FAHRENHEIT IS %f\n", far);
    return 0;
}