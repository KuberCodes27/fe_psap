#include<stdio.h>
void main()
{
    int n;
    printf("\n\tEnter the number =>");
    scanf("%d",&n);
    if(n%3==0)
    {
        printf("\n\tNo %d is divisible by 3");
    }
        else if(n%5==0)
        {
             printf("\n\tNo %d is divisible by 5");
        }
             else if(n%7==0)
             {
                  printf("\n\tNo %d is divisible by 7");
             }
}
