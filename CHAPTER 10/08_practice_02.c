#include <stdio.h>
#include <string.h>

int main()
{
    int num;
    FILE *ptr;
    printf("Enter the integer you need table of\n");
    scanf("%d", &num);
    ptr = fopen("table.txt", "w");
    for(int i =0; i<10;i++)
    {
        fprintf(ptr,"%d X %d = %d\n",num , i+1, num*(i+1));
    }
    fclose(ptr);
    printf("Table genrated");
    return 0;
}