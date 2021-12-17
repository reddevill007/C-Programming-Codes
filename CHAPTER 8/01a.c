#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100] = "IITBHUVARANASI";
    printf("Given string is %s\n", str1);

    strcpy(str1, "IIT (BHU) Varanasi");
    printf("Format 1 of given string is %s\n", str1);

    strcpy(str1, "I.I.T. (BHU) VARANASI");
    printf("Format 2 of given string is %s\n", str1);

    strcpy(str1, "IIT-BHU Varanasi");
    printf("Format 3 of given string is %s\n", str1);

    strcpy(str1, "IIT (BHU) Varanasi U.P. India");
    printf("Format 4 of given string is %s\n", str1);

    strcpy(str1, "IIT (BHU) Varanasi Uttar Pradesh India-221005");
    printf("Format 5 of given string is %s\n", str1);

    return 0;
}