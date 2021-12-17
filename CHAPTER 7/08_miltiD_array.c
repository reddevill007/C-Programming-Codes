#include <stdio.h>

int main()
{
    int n_std = 30;
    int n_sub = 3;
    int marks[30][3];
    for (int i = 0; i < n_std; i++)
    {
        for (int j = 0; j < n_sub; j++)
        {
            printf("ENTER THE MARKS OF STUDENT %d IN SUBJECT %d\n", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    for (int i = 0; i < n_std; i++)
    {
        for (int j = 0; j < n_sub; j++)
        {
            printf("THE MARKS OF STUDENT %d IN SUBJECT %d IS: %d\n", i + 1, j + 1,marks[i][j]);
        }
    }

    return 0;
}