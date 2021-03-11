#include<stdio.h>
int main()
{
    int n,i,j,k,l=32;

    printf("Enter the upper limit for pattern :");
    scanf("%d",&n);

    printf("\nEnter ASCII value of character to be used in pattern :");
    scanf("%d",&k);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1 || i==n || j==1 || j==n)

                printf("%c",k);

            else

                printf("%c",l);
        }

        printf("\n");
    }

}
