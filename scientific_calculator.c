#include<stdio.h>
#include<math.h>
main()
{

//This is the basic arithmetic calculations section

double n1,n2,result;
printf("Enter a number for arithmetic operations =>");
scanf("%lf",&n1);
printf("\nEnter the second number for the operations =>");
scanf("%lf",&n2);
result=n1+n2;
printf("\nThe sum of %lf+%lf=%lf",n1,n2,result);
result=n1-n2;
printf("\nThe subtraction of %lf-%lf=%lf",n1,n2,result);
result=n1*n2;
printf("\nThe product of %lf*%lf=%lf",n1,n2,result);
result=n1/n2;
printf("\nThe quotient of %lf/%lf=%lf",n1,n2,result);
result=pow(n1,n2);
printf("\nThe power of %lf raised to %lf is :%lf",n1,n2,result);
result=pow(n1,2);
printf("\nThe square of %lf=%lf",n1,result);
result=sqrt(n1);
printf("\nThe square Root is %lf",result);
result=pow(n1,3);
printf("\nThe cube of %lf=%lf",n1,result);
result=cbrt(n1);
printf("\nThe cube root of %lf=%lf",n1,result);
result=pow(n1,(1/n2));
printf("\nThe %lf th root of %lf = %lf",n2,n1,result);
result=pow(2,n1);
printf("\nThe %lf th power of 2 = %lf",n1,result);
result=pow(n2,-1);
printf("\nThe reciprocal of %lf=%lf",n2,result);
result=-n1;
printf("\nThe negated value of %lf=%lf",n1,result);





//This is mod function to calculate remainder




int n3,n4;
float remainder;
printf("\n\nEnter the dividend to find remainder of :");
scanf("%d",&n3);
printf("\nEnter the divisor :");
scanf("%d",&n4);
remainder=(n3%n4);
printf("\nThe remainder of %d when divided by %d is :%f",n3,n4,remainder);




//This is the program to write absolute value



int m,n;
printf("\n\nEnter any two integers whose absolute value you desire to find :");
scanf("%d%d",&m,&n);
m = abs(m);     // m is assigned to 200
n = abs(n);    // n is assigned to -400
printf("\nAbsolute value of m = %d", m);
printf("\nAbsolute value of n = %d",n);




//This program is for exponents




double x,expo;
printf("\n\nEnter the number to be the exponent of euler's number,2 and 10 respectively :");
scanf("%lf",&x);
expo=pow(2.71828,x);
printf("\nThe value of e^%lf=%lf",x,expo);
expo=pow(2,x);
printf("\nThe value of 2^%lf=%lf",x,expo);
expo=pow(10,x);
printf("\nThe value of 10^%lf=%lf",x,expo);




//These programs are for trigonometric functions



float i,w,si,co,ta,csc,sc,ct;
printf("\n\nEnter the angle in degrees to find trigo ratios :");
scanf("%f",&i);
w=i*(3.142857143/180);
si=sin(w);
printf("\nThe value of sine(%f)=%f",w,si);
co=cos(w);
printf("\nThe value of cosine(%f)=%f",w,co);
ta=tan(w);
printf("\nThe value of tangent(%f)=%f",w,ta);
csc=(1/sin(w));
printf("\nThe value of cosec(%f)=%f",w,csc);
sc=(1/cos(w));
printf("\nThe value of sec(%f)=%f",w,sc);
ct=(1/tan(w));
printf("\nThe value of cot(%f)=%f",w,ct);



//This section is for hyperbolic trigonometric functions



float r,z,sih,coh,tah,csch,sch,cth;
printf("\n\nPlease enter angle in degrees to find hyperbolic trigo ratios :");
scanf("%f",&z);
r=z*(3.142857143/180);
sih=sinh(r);
printf("\nThe value of hyperbolic sine(%f)=%f",r,sih);
coh=cosh(r);
printf("\nThe value of hyperbolic cosine(%f)=%f",r,coh);
tah=tanh(r);
printf("\nThe value of hyperbolic tangent(%f)=%f",r,tah);
csch=(1/sinh(r));
printf("\nThe value of hyperbolic cosec(%f)=%f",r,csch);
sch=(1/cosh(r));
printf("\nThe value of hyperbolic sec(%f)=%f",r,sch);
cth=(1/tanh(r));
printf("\nThe value of hyperbolic tan(%f)=%f",r,cth);



//This section is for inverse trigonometric functions



double j,asi,asi1,aco,aco1,ata,ata1,acsc,acsc1,asc,asc1,act,act1;
printf("\n\nPlease enter the value in degree to get arc trigonometric ratios :");
scanf("%lf",&j);
asi=asin(j);
asi1=asi*(180/3.142857143);
printf("\nThe value of arcsine(%lf)=%lf",j,asi1);
aco=acos(j);
aco1=aco*(180/3.142857143);
printf("\nThe value of arccosine(%lf)=%lf",j,aco1);
ata=atan(j);
ata1=ata*(180/3.142857143);
printf("\nThe value of arctangent(%lf)=%lf",j,ata1);
acsc=(1/asin(j));
acsc1=acsc*(180/3.142857143);
printf("\nThe value of arccosec(%lf)=%lf",j,acsc1);
asc=(1/acos(j));
asc1=asc*(180/3.142857143);
printf("\nThe value of arcsec(%lf)=%lf",j,asc1);
act=(1/atan(j));
act1=act*(180/3.142857143);
printf("\nThe value of arccot(%lf)=%lf",j,act1);



//This section is for logarithmic purposes



float log_value,log10_value,q;
printf("\n\nEnter the argument for finding log of base e and 10 :");
scanf("%f",&q);
log_value = log(q);
printf("\nThe log to the base e of %f=%f",q,log_value);
log10_value = log10(q);
printf("\nThe log to the base 10 of %f=%f",q,log10_value);
float logh_g,h,g;
printf("\n\nPlease enter the argument and base to find log :");
scanf("%f%f",&h,&g);
logh_g=((log10(h))/(log10(g)));
printf("\nThe log of %f with base %f = %f",h,g,logh_g);



//This is factorial code



float y,fact=1,number;
 printf("\n\nEnter a number to find its factorial :");
  scanf("%f",&number);
    for(y=1;y<=number;y++){
      fact=fact*y;
  }
  printf("\nFactorial of %f is: %f",number,fact);



  //This is floor and ceil section



float val;
    float fVal,cVal;

    printf("\n\nEnter a float value to find its floor and ceil :");
    scanf("%f",&val);

    fVal=floor(val);
    cVal =ceil(val);
    printf("\nFloor value :%f\nCeil value :%f",fVal,cVal);



//This is conversions section in which we convert degrees to radians and vice versa.



float degree, radian;

    printf("\n\nEnter angle in Degrees :");
    scanf("%f", &degree);

    radian=degree*(M_PI/180.0);

    printf("\nAngle in Radian is %f",radian);

   printf("\n\nEnter angle in radians :");
   scanf("%f",&radian);

   degree=radian*(180.0/M_PI);

   printf("\nAngle in Degree is %f",degree);



// This section is used to print constants pi and euler's number present in windows 10 scientific calculator



double pi;
pi=M_PI;
printf("\n\nThe value of pi is :%lf",pi);

double eu;
eu=2.71828;
printf("\nThe value of euler's number is :%lf",eu);
}
