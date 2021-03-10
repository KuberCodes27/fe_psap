#include<stdio.h>
int main()
{
    double i,n,sum=0,x;

    printf("\nEnter the number of elements => ");
    scanf("%lf",&n);
    //Read the number of elements

    printf("\nEnter the value of %lf elements => ",n);
    for (i=1;i<=n;i++)
    {
        scanf("%lf",&x);
        sum=sum+x/n;
    }
    //Read the values of the elements

    printf("\n\tAverage of %lf elements is %lf\n",n,sum);
    //Calculate the average

    return 0;
}
