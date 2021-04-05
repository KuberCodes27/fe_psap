#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10];
	int i,j,row,col;

	printf("\n\tEnter the size of rows and columns of the matrices => ");
	scanf("%d%d",&row,&col);

	for(i=0;i<row;i++)
	{
	    for(j=0;j<col;j++)
        {
            printf("\nEnter the values for [%d][%d] => ",i,j);
            scanf("%d",&a[i][j]);
        }
	}

    printf("\nFirst Matrix : \n");

	for(i=0;i<row;i++)
    {
        printf("\n\t");
        for(j=0;j<col;j++)
        {
            printf("%d\t",a[i][j]);
        }

    }

    for(i=0;i<row;i++)
	{
	    for(j=0;j<col;j++)
        {
            printf("\n\nEnter the values for [%d][%d] => ",i,j);
            scanf("%d",&b[i][j]);
        }
	}

    printf("\nSecond Matrix : \n");

	for(i=0;i<row;i++)
    {
        printf("\n\t");
        for(j=0;j<col;j++)
        {
            printf("%d\t",b[i][j]);
        }

    }

    printf("\n\nSubtraction of first and second matrix : \n");

    for(i=0;i<row;i++)
    {
        printf("\n\t");
        for(j=0;j<col;j++)
        {
            c[i][j] = a[i][j] - b[i][j];
            printf("%d\t",c[i][j]);
        }
    }

    return 0;
}

/*****************************************************************
OUTPUT:

        Enter the size of rows and columns of the matrices => 3 3

Enter the values for [0][0] => 10

Enter the values for [0][1] => 11

Enter the values for [0][2] => 12

Enter the values for [1][0] => 13

Enter the values for [1][1] => 14

Enter the values for [1][2] => 15

Enter the values for [2][0] => 16

Enter the values for [2][1] => 17

Enter the values for [2][2] => 18

First Matrix :

        10      11      12
        13      14      15
        16      17      18

Enter the values for [0][0] => 1


Enter the values for [0][1] => 2


Enter the values for [0][2] => 3


Enter the values for [1][0] => 4


Enter the values for [1][1] => 5


Enter the values for [1][2] => 6


Enter the values for [2][0] => 7


Enter the values for [2][1] => 8


Enter the values for [2][2] => 9

Second Matrix :

        1       2       3
        4       5       6
        7       8       9

Subtraction of first and second matrix :

        9       9       9
        9       9       9
        9       9       9
Process returned 0 (0x0)   execution time : 18.713 s
Press any key to continue.


*****************************************************************/
