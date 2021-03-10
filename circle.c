#include<stdio.h>
#include<math.h>
int main()
{
    double x1,y1,x2,y2,r,d;

    printf("\nCoordinates of centre of the circle = ");
    scanf("%lf%lf",&x1,&y1);
    printf("\nRadius of the circle = ");
    scanf("%lf",&r);
    //Read the centre and radius of the circle

    printf("\n\n\tEnter coordinates of point x2 and y2 =");
    scanf("%lf%lf",&x2,&y2);
    //Read the coordinate values of x2 and y2

    d=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    printf("\n\n\tDistance of (%lf,%lf) from the (%lf,%lf) = %lf",x2,y2,x1,y1,d);
    //Read the distance of (x2,y2) from the centre of the circle

    if(d>r)
       {
         printf("\n\n\tPoint lies outside of the circle\n");
       }

    else if(d<r)
           {
             printf("\n\n\tPoint lies inside the circle\n");
           }

    else if(d=r)
           {
             printf("\n\n\tPoint lies on the circle\n");
           }

    return 0;
}
