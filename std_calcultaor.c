#include<stdio.h>
#include<math.h>
main ()
{
    //This is the program of basic arithmetic operations of windows 10 standard calculator


    double n1,n2,result;
    n1=36;
    n2=20;
    result=n1+n2;
    printf("The sum of %lf+%lf=%lf",n1,n2,result);
    result=n1-n2;
    printf("\nThe subtraction of %lf-%lf=%lf",n1,n2,result);
    result=n1*n2;
    printf("\nThe product of %lf*%lf=%lf",n1,n2,result);
    result=n1/n2;
    printf("\nThe quotient of %lf/%lf=%lf",n1,n2,result);
    result=pow(n1,2);
    printf("\n Power of %lf^2=%lf",n1,result);
    result=sqrt(n1);
    printf("\n Square Root is %lf",result);
    result=pow(n2,-1);
    printf("\nThe reciprocal of %lf=%lf",n2,result);
    result=-n1;
    printf("\nThe negated value of %lf=%lf",n1,result);
}
