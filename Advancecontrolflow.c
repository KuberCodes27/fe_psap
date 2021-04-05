/***************************************************************************
Problem statement: Write a program on Advanced Control Flow
Div: L   Batch: L1/B1
Roll No.:06
Name:KUBER MARKAD
***************************************************************************/

#include<stdio.h>
void main()
{
    int ch,n,i,j,k,fact;
    char ch1='y';

    printf("\nProgram on Advanced control flow :");

    do
    {
        printf("\n\tCase 1 : Simple loop");
        printf("\n\tCase 2 : Nested Loop");
        printf("\n\tEnter a choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1 :
            printf("\n\t 1 : Simple Loop");
            do
            {
                printf("\n\tCase 1 : Using for loop");
                printf("\n\tCase 2 : Using while loop");
                printf("\n\tCase 3 : Using do-while loop");
                printf("\n\tEnter a choice : ");
                scanf("%d",&ch);
                switch(ch)
                {
                case 1 :
                    printf("\n\t 1 : Using for loop");
                    printf("\n\tEnter a positive integer : ");
                    scanf("%d",&n);

                    fact=1;
                    for(i=1;i<=n;i++)
                    {
                        fact=fact*i;
                    }
                    printf("\n\tFactorial of %d is %d",n,fact);

                    break;

                case 2 :
                    printf("\n\t 2 : Using while loop");
                    printf("\n\tEnter a positive integer : ");
                    scanf("%d",&n);

                    i=1;
                    fact=1;
                    while(i<=n)
                    {
                        fact=fact*i;
                        i++;
                    }
                    printf("\n\tFactorial of %d is %d",n,fact);

                    break;

                case 3 :
                    printf("\n\t 3 : Using do-while loop");
                    printf("\n\tEnter a positive integer : ");
                    scanf("%d",&n);

                    i=1;
                    fact=1;
                    do
                    {
                        fact=fact*i;
                        i++;
                    }while(i<=n);
                    printf("\n\tFactorial of %d is %d",n,fact);

                    break;
                default:
                        printf("\n\tWrong choice");
                }
                printf("\n\tDo you want to repeat? \n\t(y/n) : ");
                scanf(" %c",&ch1);
            }while(ch1=='y');

            break;

        case 2 :
            printf("\n\t 2 : Using Nested Loop");
            printf("\nEnter the height of pyramid : ");
            scanf("%d",&n);

            for (i=0;i<n;i++)
            {
                for(j=0;j<n-i-1;j++)
                {
                    printf(" ");
                }
                for(k=j;k<n-1;k++)
                {
                    printf("*");
                    printf(" ");
                }
                printf("*");
                for(j=0;j<n-i-1;j++)
                {
                    printf(" ");
                }
                printf("\n");
}
            break;
        default:
            printf("\n\tWrong choice");
        }
        printf("\nDo you want to repeat? \n(y/n) : ");
        scanf(" %c",&ch1);
    }while(ch1=='y');
}

/*****************************************************************
OUTPUT:

Program on Advanced control flow :
        Case 1 : Simple loop
        Case 2 : Nested Loop
        Enter a choice : 1

         1 : Simple Loop
        Case 1 : Using for loop
        Case 2 : Using while loop
        Case 3 : Using do-while loop
        Enter a choice : 1

         1 : Using for loop
        Enter a positive integer : 7

        Factorial of 7 is 5040
        Do you want to repeat?
        (y/n) : y

        Case 1 : Using for loop
        Case 2 : Using while loop
        Case 3 : Using do-while loop
        Enter a choice : 2

         2 : Using while loop
        Enter a positive integer : 6

        Factorial of 6 is 720
        Do you want to repeat?
        (y/n) : y

        Case 1 : Using for loop
        Case 2 : Using while loop
        Case 3 : Using do-while loop
        Enter a choice : 3

         3 : Using do-while loop
        Enter a positive integer : 5

        Factorial of 5 is 120
        Do you want to repeat?
        (y/n) : n

Do you want to repeat?
(y/n) : y

        Case 1 : Simple loop
        Case 2 : Nested Loop
        Enter a choice : 2

         2 : Using Nested Loop
Enter the height of pyramid : 7
      *
     * *
    * * *
   * * * *
  * * * * *
 * * * * * *
* * * * * * *

Do you want to repeat?
(y/n) : n

Process returned 110 (0x6E)   execution time : 31.915 s
Press any key to continue.


*****************************************************************/
