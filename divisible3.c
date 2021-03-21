#include<stdio.h>
void main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);

	if(num%3==0 && num%5==0)
    {
        printf("\n\t %d is divisible by 3/5",num);
    }
    else if (num%3==0 && num%7==0)
    {
        printf("\n\t %d is divisible by 3/7",num);
    }
    else if (num%5==0 && num%7==0)
    {
        printf("\n\t %d is divisible by 5/7",num);
    }

	else if(num%3==0)
	{
		printf("\n\t %d is divisible by 3",num);
	}
	else if(num%5==0)
	{
		printf("\n\t %d is divisible by 5",num);
    }
    else if(num%7==0)
    {
        printf("\n\t %d is divisible by 7",num);
    }
    else
    {
        printf("\n\t %d is not divisible by 3/5/7");
    }


}
