#include<stdio.h>
int main()
{
    double SI,P,N,R;

    printf("\nEnter the value of Principal Amount => ");
    scanf("%lf",&P);
    printf("\n\nEnter the value of Time(in Years) => ");
    scanf("%lf",&N);
    printf("\n\nEnter the value of Annual Rate of Interest in percentage => ");
    scanf("%lf",&R);
    //Read the values of Principal Amount, Time and Annual Rate of Interest

    SI=(P*N*R)/100.0;
    printf("\n\n\tTotal Interest of customers fixed deposit is %lf\n",SI);
    //Caclculate the Simple interest from the formula

    return 0;
