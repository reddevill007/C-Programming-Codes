#include <stdio.h>
#include <string.h>

typedef struct bank
{
    int acc_no;
    float balance;
    char name[10];
}bank;
void display(bank c){
    printf("Account number: %d\n",c.acc_no);
    printf("Name of the account holder: %s\n",c.name);
    printf("Balance: %d\n",c.balance);
}

int main()
{
    bank e1,e2,e3;
    printf("Enter account number of e1 : ");
    scanf("%d", &e1.acc_no);

    printf("Enter the amount of money in the bank account of e1 : ");
    scanf("%f", &e1.balance);

    printf("Enter the name of e1 : ");
    scanf("%s", &e1.name);

    printf("Enter account number of e2 : ");
    scanf("%d", &e1.acc_no);
    
    printf("Enter the amount of money in the bank account of e2 : ");
    scanf("%f", &e1.balance);

    printf("Enter the name of e2 : ");
    scanf("%s",&e1.name); 

    printf("Enter account number of e3 : ");
    scanf("%d", &e1.acc_no);
    
    printf("Enter the amount of money in the bank account of e3 : ");
    scanf("%f", &e1.balance);

    printf("Enter the name of e3 : ");
    scanf("%s", &e1.name);

    void disply(e1);
    void disply(e2);
    void disply(e3);
    return 0;
}