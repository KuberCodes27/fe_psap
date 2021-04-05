#include<stdio.h>
void main()
{
  int a , b , width , i;
  double sum ;
  printf("\n\t ENTER THE LIMITS :");
  scanf("%d %d", &a , &b );
  sum = 0 ; width = 1 ; i = 0;
  for ( i = a ; b >= i ; i += width){
    sum = sum + cos(2*3.14/13*i) * width;
  }
  printf("Integration value = %d", sum);
}
/******************************************************************
OUTPUT:
         ENTER THE LIMITS :4 5
Integration value = 114294924
Process returned 29 (0x1D)   execution time : 4.429 s
Press any key to continue.


******************************************************************/
