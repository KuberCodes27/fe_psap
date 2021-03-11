#include<stdio.h>
void main()
{
float p,c,m,b,e,total=500,sum=0;
float per;
printf("ENTER MARKS OF PHY,CHEM,MATHS,BIO,ENGLISH ");
scanf("%f %f %f %f %f",&p,&c,&m,&b,&e);
sum=p+c+m+b+e;
printf("Sum of 5 subjects is %f\n",sum);
per=(sum*100)/total;
printf("Total is %f\n",total);
printf("percentage=%.2f\n",per);
if(per>=90)
printf("DISTINCTION");
else if(per>=80 && per<90)
printf("FIRST CLASS");
  else if(per>=70 && per<80)
printf("HIGHER SECOND CLASS");
  else if(per>=60 && per<70)
printf("SECOND CLASS");
  else if(per>=40 && per<60)
printf("PASS CLASS");
  else if(per<40)
printf("FAIL");
  else if(per<0 || per>100)
printf("INVALID ENTRY");
getch();
}
