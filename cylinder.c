#include<stdio.h>
#include<math.h>
void main()
{
    float r,h,pi=3.14,sa,v;
    printf("\n\tEnter the r and h =>");
    scanf("%f%f",&r,&h);

    printf("\n\tSurface area of Cylinder is...");
    sa=2*pi*r*(r+h);
    printf(" %f",sa);

    printf("\n\tVolume of Cylinder is...");
    v=pi*pow(r,2)*h;
    printf(" %f",v);
}
