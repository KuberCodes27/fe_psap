#include<stdio.h>
int main()
{
    int i,j,n,temp;
    int arr[100];

    printf("\nEnter the number of elements : ");
    scanf("%d",&n);

    printf("\nEnter %d elements : ",n);

    for(i=0;i<n;i++)
    {
        printf("\nArray[%d] : ",i);
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

    printf("\nSorted Array : \n");
    for(i=0;i<n;i++)
    {
        printf("\t%d",arr[i]);
    }

    return 0;
}
