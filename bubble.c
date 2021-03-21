#include<stdio.h>

int main()
{
    int i,j,k,n,temp;
    int arr[100];

    printf("\nEnter the number of elements in the array : ");
    scanf("%d",&n);
    printf("\nEnter the elements : \n");

    for(i=0;i<n;i++)
    {
        printf("\nArray[%d] = ",i);
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\nThe Sorted Array is : \n\n");
    for(i=0;i<n;i++)
    {
        printf("%4d\t",arr[i]);
    }


    return 0;
}
