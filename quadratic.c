#include <stdio.h>
#include <math.h>

void main()
{
   int a,b,c,d;
   float R1,R2;

   printf("Input the value of a,b & c : ");
   scanf("%d%d%d",&a,&b,&c);
   d=b*b-4*a*c;
   if(d==0)
   {
     printf("Both roots are equal.\n");
     R1=-b/(2.0*a);
     R2=R1;
     printf("First  Root Root1= %f\n",R1);
     printf("Second Root Root2= %f\n",R2);
   }
   else if(d>0)
	{
	   printf("Both roots are real and diff-2\n");
	   R1=(-b+sqrt(d))/(2*a);
	   R2=(-b-sqrt(d))/(2*a);
	   printf("First  Root Root1= %f\n",R1);
	   printf("Second Root root2= %f\n",R2);
	}
	else
	    printf("Root are imaginary;\nNo Solution. \n");
}
