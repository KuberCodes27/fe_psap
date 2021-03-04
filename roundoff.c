#include <stdio.h>
int main()
{
	int i,j,result;
	printf("\n\tEnter the two integers:");
	scanf("%d%d",&i, &j);
	//Read the values of i and j

	result=i+j-i%j;
	printf("\n\tThe next largest integer is %d",result);
}
