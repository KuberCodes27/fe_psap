/***************************************************************************
Problem statement: Write a program on Arrays (1-D,2-D)
Div: L   Batch: L1/B1
Roll No.:06
Name:KUBER MARKAD
***************************************************************************/

#include<stdio.h>
void main()
{
    int ch,n,i,j,k,temp,row1,row2,col1,col2;
    int arr[100],a[100][100],b[100][100],mult[100][100];
    char ch1='y';
    do
    {
        printf("\nProgram for Arrays : ");
        printf("\nCase 1 : Sorting of elements (1-D Array)");
        printf("\nCase 2 : Multiplying 2 matrices (2-D Array)");
        printf("\nEnter the choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1 :
            printf("\n 1 : Sorting of elements (1-D Array)");
            printf("\n\tEnter the number of elements in the array : ");
            scanf("%d",&n);

            printf("\n\tEnter %d elements : \n",n);

            for(i=0;i<n;i++)
            {
                printf("\n\tArray[%d] : ",i);
                scanf("%d",&arr[i]);
            }

            for(i=1;i<n;i++)
            {
                temp=arr[i];
                j=i-1;
                while((temp<arr[j]) && (j>=0))
                    {
                        arr[j+1]=arr[j];
                        j=j-1;
                    }
                    arr[j+1]=temp;
            }

            printf("\n\tSorted Array : \n\n");
            for(i=0;i<n;i++)
            {
                printf("\t%d",arr[i]);
            }

            break;

        case 2 :
            printf("\n 2 : Multiplying 2 matrices (2-D Array)");
            printf("\n\tEnter number of rows and columns of first matrix : ");
            scanf("%d%d",&row1,&col1);

            printf("\n\tEnter number of rows and columns of second matrix : ");
            scanf("%d%d",&row2,&col2);


            if (col1!=row2)
            {
                printf("\n\tThe multiplication isn't possible.\n");
            }

            for(i=0;i<row1;i++)
            {
                for(j=0;j<col1;j++)
                {
                    printf("\n\tEnter the values for [%d][%d] => ",i,j);
                    scanf("%d",&a[i][j]);
                }
            }

            printf("\n\tFirst Matrix : \n");

            for(i=0;i<row1;i++)
            {
                printf("\n\t");
                for(j=0;j<col1;j++)
                {
                    printf("%d\t",a[i][j]);
                }

            }

            for(i=0;i<row2;i++)
            {
                for(j=0;j<col2;j++)
                {
                    printf("\n\n\tEnter the values for [%d][%d] => ",i,j);
                    scanf("%d",&b[i][j]);
                }
            }

            printf("\n\tSecond Matrix : \n");

            for(i=0;i<row2;i++)
            {
                printf("\n\t");
                for(j=0;j<col2;j++)
                {
                    printf("%d\t",b[i][j]);
                }
            }

            //for multiplication
            for(i=0;i<row1;i++)
            {
                for(j=0;j<col2;j++)
                {
                    mult[i][j]=0;
                    for(k=0;k<row2;k++)
                    {
                        mult[i][j]+=a[i][k]*b[k][j];
                    }
                }
            }

            printf("\n\n\tProduct of the first and second matrix is :\n");

            for(i=0;i<row1;i++)
            {
                printf("\n\t");
                for (j=0;j<col2;j++)
                {
                    printf("%d\t", mult[i][j]);
                }
            }

            break;

        default:
            printf("\n\tWrong choice");
        }
        printf("\nDo you want to repeat? \n(y/n) : ");
        scanf(" %c",&ch1);
    }while(ch1=='y');
}

/*********************************************************************************
OUTPUT:

Program for Arrays :
Case 1 : Sorting of elements (1-D Array)
Case 2 : Multiplying 2 matrices (2-D Array)
Enter the choice : 1

 1 : Sorting of elements (1-D Array)
        Enter the number of elements in the array : 5

        Enter 5 elements :

        Array[0] : 11

        Array[1] : 59

        Array[2] : 23

        Array[3] : 91

        Array[4] : 2

        Sorted Array :

        2       11      23      59      91
Do you want to repeat?
(y/n) : y

Program for Arrays :
Case 1 : Sorting of elements (1-D Array)
Case 2 : Multiplying 2 matrices (2-D Array)
Enter the choice : 2

 2 : Multiplying 2 matrices (2-D Array)
        Enter number of rows and columns of first matrix : 2 2

        Enter number of rows and columns of second matrix : 2 2

        Enter the values for [0][0] => 1

        Enter the values for [0][1] => 2

        Enter the values for [1][0] => 3

        Enter the values for [1][1] => 4

        First Matrix :

        1       2
        3       4

        Enter the values for [0][0] => 5


        Enter the values for [0][1] => 6


        Enter the values for [1][0] => 7


        Enter the values for [1][1] => 8

        Second Matrix :

        5       6
        7       8

        Product of the first and second matrix is :

        19      22
        43      50
Do you want to repeat?
(y/n) : n

Process returned 110 (0x6E)   execution time : 28.148 s
Press any key to continue.


*********************************************************************************/
