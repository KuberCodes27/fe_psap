#include<stdio.h>

int main()
{
    int i,j,n,temp;
    int arr[100],position;

    printf("\nEnter the number of elements : ");
    scanf("%d",&n);

    printf("\nEnter %d integers : ",n);

    for(i=0;i<n;i++)
    {
        printf("\nArray[%d] : ",i);
        scanf("%d",&arr[i]);
    }

    for(i=0;i<(n-1);i++)
    {
        position=i;

        for(j=i+1;j<n;j++)
        {
            if(arr[position]>arr[j])
            {
                position=j;
            }
            else if(position!=i)
            {
                temp=arr[i];
                arr[i]=arr[position];
                arr[position]=temp;
            }
        }
    }

    printf("\nSorted Array : \n");
    for(i=0;i<n;i++)
    {
        printf("\t%d",arr[i]);
    }

    return 0;

}
