/***************************************************************************
Problem statement: Write a program on Basic Control Flow
Div: L   Batch: L1/B1
Roll No.:06
Name:KUBER MARKAD
***************************************************************************/

#include<stdio.h>
#include<string.h>

void main()
{
    int ch,x1=0,y1=0,x2=200,y2=0,x3=200,y3=200,x4=0,y4=200;
    int a,b,c,d,x,y;
    char ch1='y',*str[50];

    printf("\nProgram on Basic Control Flow :");

    do
    {
        printf("\nCase 1 : Position of point w.r.t to a rectangle");
        printf("\nCase 2 : Selecting the day of a week");
        printf("\nEnter a choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1 :
            printf("\n\t 1 :Position of point w.r.t to a rectangle");
            do
            {
                printf("\n\tCase 1 : Using if-else");
                printf("\n\tCase 2 : Using if-else-if");
                printf("\n\tEnter a choice : ");
                scanf("%d",&ch);
                switch(ch)
                {
                case 1 :
                    printf("\n\t 1 : Using if-else");
                    printf("\n\tEnter x coordinate of point : ");
                    scanf("%d",&x);
                    printf("\n\tEnter y coordinate of point : ");
                    scanf("%d",&y);

                    a=b=c=d=0;

                    if(x>=x1)
                    {
                        a=1;
                    }
                    if(x<=x2)
                    {
                        b=1;
                    }
                    if(y>=y1)
                    {
                        c=1;
                    }
                    if(y<=y4)
                    {
                        d=1;
                    }
                    if(a && b && c && d)
                    {
                        printf("\n\n\tPoint lies inside the rectangle");
                    }
                    else
                    {
                        printf("\n\n\tPoint lies outside the rectangle");
                    }

                    break;

                case 2 :
                    printf("\n\t 2 : Using if-else-if");
                    printf("\n\tEnter x coordinate of point : ");
                    scanf("%d",&x);
                    printf("\n\tEnter y coordinate of point : ");
                    scanf("%d",&y);

                    if(x<x1 || x>x2)
                    {
                        a=0;
                    }
                    else if(y<y1 || y>y4)
                    {
                        a=0;
                    }
                    else
                    {
                        a=1;
                    }
                    if(a==1)
                    {
                        printf("\n\n\tPoint lies inside the rectangle");
                    }
                    else
                    {
                        printf("\n\n\tPoint lies outside of the rectangle");
                    }

                    break;
                default:
                    printf("\n\tWrong choice");
                }
                printf("\n\tDo you want to repeat? \n\t(y/n) : ");
                scanf(" %c",&ch1);
            }while(ch1=='y');

            break;

        case 2 :
            printf("\n\t 2 : Selecting the day of a week");
            do
            {
                printf("\n\tDay 1 : Monday");
                printf("\n\tDay 2 : Tuesday");
                printf("\n\tDay 3 : Wednesday");
                printf("\n\tDay 4 : Thursday");
                printf("\n\tDay 5 : Friday");
                printf("\n\tDay 6 : Saturday");
                printf("\n\tDay 7 : Sunday");
                printf("\n\tEnter the day : ");
                scanf("%d",&ch);
                switch(ch)
                {
                case 1 :
                    printf("\n\tDay 1 : Monday");
                    str[50]="Monday";
                    break;
                case 2 :
                    printf("\n\tDay 2 : Tuesday");
                    str[50]="Tuesday";
                    break;
                case 3 :
                    printf("\n\tDay 3 : Wednesday");
                    str[50]="Wednesday";
                    break;
                case 4 :
                    printf("\n\tDay 4 : Thursday");
                    str[50]="Thursday";
                    break;
                case 5 :
                    printf("\n\tDay 5 : Friday");
                    str[50]="Friday";
                    break;
                case 6 :
                    printf("\n\tDay 6 : Saturday");
                    str[50]="Saturday";
                    break;
                case 7 :
                    printf("\n\tDay 7 : Sunday");
                    str[50]="Sunday";
                break;
                default:
                    printf("\n\tWrong choice");
                }


                if(strcmp(str[50],"Sunday")==0)
                {
                    printf("\n\tHoliday!");
                }
                else
                {
                    printf("\n\tWorking Day!");
                }
            printf("\n\tDo you want to repeat? \n\t(y/n) : ");
            scanf(" %c",&ch1);
            }while(ch1=='y');

            break;
        default:
            printf("\n\tWrong choice");
        }
        printf("\nDo you want to repeat? \n(y/n) : ");
        scanf(" %c",&ch1);
    }while(ch1=='y');
}

/******************************************************************
OUTPUT:

Program on Basic Control Flow :
Case 1 : Position of point w.r.t to a rectangle
Case 2 : Selecting the day of a week
Enter a choice : 1

         1 :Position of point w.r.t to a rectangle
        Case 1 : Using if-else
        Case 2 : Using if-else-if
        Enter a choice : 1

         1 : Using if-else
        Enter x coordinate of point : 150

        Enter y coordinate of point : 100


        Point lies inside the rectangle
        Do you want to repeat?
        (y/n) : y

        Case 1 : Using if-else
        Case 2 : Using if-else-if
        Enter a choice : 2

         2 : Using if-else-if
        Enter x coordinate of point : 150

        Enter y coordinate of point : 250


        Point lies outside of the rectangle
        Do you want to repeat?
        (y/n) : n

Do you want to repeat?
(y/n) : y

Case 1 : Position of point w.r.t to a rectangle
Case 2 : Selecting the day of a week
Enter a choice : 2

         2 : Selecting the day of a week
        Day 1 : Monday
        Day 2 : Tuesday
        Day 3 : Wednesday
        Day 4 : Thursday
        Day 5 : Friday
        Day 6 : Saturday
        Day 7 : Sunday
        Enter the day : 3

        Day 3 : Wednesday
        Working Day!
        Do you want to repeat?
        (y/n) : y

        Day 1 : Monday
        Day 2 : Tuesday
        Day 3 : Wednesday
        Day 4 : Thursday
        Day 5 : Friday
        Day 6 : Saturday
        Day 7 : Sunday
        Enter the day : 7

        Day 7 : Sunday
        Holiday!
        Do you want to repeat?
        (y/n) : n

Do you want to repeat?
(y/n) : n

Process returned 110 (0x6E)   execution time : 37.179 s
Press any key to continue.


******************************************************************/
