/***************************************************************************
Problem statement: Write a program on Structures
Div: L   Batch: L1/B1
Roll No.:06
Name:KUBER MARKAD
***************************************************************************/

#include<stdio.h>
#include<string.h>

struct Account
{
    char type[50];
    char holder[50];
    char branch[50];
    char accno[50];
    int bal;
};

void printAcc(struct Account Ishan);

int main()
{
    struct Account Ishan;

    strcpy(Ishan.type,"Savings");
    strcpy(Ishan.holder,"Ishan");
    strcpy(Ishan.branch,"Narayan Peth");
    strcpy(Ishan.accno,"ABCDEFGHIJ");
    Ishan.bal=123456789;

    printAcc(Ishan);

    return 0;
}

void printAcc(struct Account Ishan)
{
    printf("\nBank Account Details : \n");
    printf("\n\tAccount Type : %s \n",Ishan.type);
    printf("\n\tAccount Holder : %s \n",Ishan.holder);
    printf("\n\tAccount Branch : %s \n",Ishan.branch);
    printf("\n\tAccount Number : %s \n",Ishan.accno);
    printf("\n\tAccount Balance : %d \n",Ishan.bal);

}

/**********************************************************
OUTPUT:

Bank Account Details :

        Account Type : Savings

        Account Holder : Ishan

        Account Branch : Narayan Peth

        Account Number : ABCDEFGHIJ

        Account Balance : 123456789

Process returned 0 (0x0)   execution time : 0.361 s
Press any key to continue.


**********************************************************/
