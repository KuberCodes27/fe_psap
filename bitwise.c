#include<stdio.h>
void main()
{
    int choice,i;
    int a,b,c,d;
    int option;

    do
    {
    printf("\nDifferent types of operators are as follows:-\n");
    printf("\n\t 1: Pre and Post Increment Decrement");
    printf("\n\t 2: Bitwise");
    printf("\n\t 3: Comma");
    printf("\n\t 4: Arrow");
    printf("\n\tSelect operator to know the working:\t");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
           printf("\nPre and Post Increment Decrement:-\n");
           printf("\n\tTo Check the working, enter an integer value for a counter variable i:\t");
           scanf("%d",&i);

           printf("\n\tx = i   ==> x = %d\n",i);

           printf("\n\tPre-Increment Operator: \t\t      x = ++i ==> x = %d\n",++i);
           printf("\n\tPost-Increment Operator:\t\t      x = i++ ==> x = %d\n",i++);
           printf("\n\tSum of Pre & Post Increment Operator:\tx = i++ + ++i ==> x = %d\n",i++ + ++i);

           printf("\n\tPre-Decrement Operator: \t\t      x = --i ==> x = %d\n",--i);
           printf("\n\tPost-Decrement Operator:\t\t      x = i-- ==> x = %d\n",i--);
           printf("\n\tSum of Pre & Post Decrement Operator:\tx = i-- + --i ==> x = %d\n",i-- + --i);

           break;
    case 2:
           printf("\nBitwise Operators:");
            do
            {
                printf("\n\tBitwise operators");
                printf("\n\t 1: &");
                printf("\n\t 2: |");
                printf("\n\t 3: ^");
                printf("\n\t 4: ~");
                printf("\n\tEnter the choice:\t");
                scanf("%d",&choice);
                switch(choice)
                {
                case 1:
                        printf("\n\t& :\tThis is an AND operator.\n\t\tIt performs AND operation between each bit of the two numbers.\n\tEnter two numbers to check the AND operator:\n\t");
                        scanf("%d",&a);
                        printf("\t");
                        scanf("%d",&b);
                        printf("\n\n\t%d & %d = %d",a,b,a&b);

                        break;
                case 2:
                        printf("\n\t| :\tThis is an OR operator.\n\t\tIt performs OR operation between each bit of the two numbers.\n\tEnter two numbers to check the OR operator:\n\t");
                        scanf("%d",&a);
                        printf("\n\t");
                        scanf("%d",&b);
                        printf("\n\n\t%d | %d = %d",a,b,a|b);

                        break;
                case 3:
                        printf("\n\t^: \tThis is a XOR operator.\n\t\tIt performs XOR operation between each bit of the two numbers.\n\tEnter two numbers to check the XOR operator:\n\t");
                        scanf("%d",&a);
                        printf("\n\t");
                        scanf("%d",&b);
                        printf("\n\n\t%d ^ %d = %d",a,b,a^b);

                        break;
                case 4:
                        printf("\n\t~: \tThis is a NOT operator.\n\t\tIt performs NOT operation on the bits of number.\n\tEnter a numbers to check the NOT operator:\t");
                        scanf("%d",&a);

                        printf("\n\n\t~%d = %d",a,~a);

                        break;
                default:
                        printf("\n\t Wrong Choice");
                }
                printf("\n\n\nDo you want to check other bitwise operator?\n\t1.Yes\n\t2.No\n\t");
                scanf("%d",&option);
            }

            while(option == 1);

            break;


    case 3:
           printf("\nComma Operator: , \n\tComma operator is used to seperate declaration of multiple variables");
           printf("\n\tIt has Lowest Precedence i.e it is having lowest priority so it is evaluated at last.");
           printf("\n\tIt returns the value of the rightmost operand when multiple comma operators are used inside an expression.");

           printf("\n\n\t\tEnter three integers to see working of Comma Operator:\n\t\t");
           scanf("%d",&a);
           printf("\t\t");
           scanf("%d",&b);
           printf("\t\t");
           scanf("%d",&c);

           printf("\n\t\tIf we declare d = (%d,%d,%d), the value in d wil be %d",a,b,c,c);

           break;


    case 4:
           printf("\nArrow Operator:\t ->");
           printf("\n\tAn Arrow operator is used for accessing members of structure using pointer variable.");
           printf("\n\tWhen pointer to a structure is used then arrow operator is used.");
           break;


    default:
           printf("\n\t Wrong Choice");

    }

    printf("\n\nDo you want to check any other operator?\n\t1.Yes\n\t2.No\n\t");
    scanf(" %d",&option);
    }

    while(option==1 );

}
