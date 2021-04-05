#include<stdio.h>
int main()
{
    int a[10][10],t[10][10];
    int i,j,row,col;

    printf("\n\tEnter the size of rows and columns : ");
    scanf("%d%d",&row,&col);

    printf("\nEnter the elements of the matrix : ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\n\nEnter the values of [%d][%d] => ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nThe matrix is : \n");
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
            t[j][i] = a[i][j];
        }
    }

    printf("\nTranspose of the matrix : \n");
    for(i=0;i<col;i++)
    {
       printf("\n\t");
       for(j=0;j<row;j++)
       {
           printf("%d\t",t[i][j]);
       }
    }

    return 0;
}

/***************************************************************
OUTPUT:

        Enter the size of rows and columns : 3 3

Enter the elements of the matrix :

Enter the values of [0][0] => 1


Enter the values of [0][1] => 2


Enter the values of [0][2] => 3


Enter the values of [1][0] => 4


Enter the values of [1][1] => 5


Enter the values of [1][2] => 6


Enter the values of [2][0] => 7


Enter the values of [2][1] => 8


Enter the values of [2][2] => 9

The matrix is :

        1       2       3
        4       5       6
        7       8       9
Transpose of the matrix :

        1       4       7
        2       5       8
        3       6       9
Process returned 0 (0x0)   execution time : 7.429 s
Press any key to continue.


***************************************************************/
