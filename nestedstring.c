#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000],b[1000],con,*sub,ch1='y';
    int ch,len,value,i;

    do
    {
    printf("\nProgram based on Strings : ");
    printf("\n\tCase 1: With Library Functions ");
    printf("\n\tCase 2: Without Library Functions ");
    printf("\n\tEnter the choice : ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1 :
            printf("\n 1 : With Library Functions");
            do
            {
            printf("\nCase 1 : String Length Function (strlen)");
            printf("\nCase 2 : String Copy Function (strcpy)");
            printf("\nCase 3 : String Concatenation Function (strcat)");
            printf("\nCase 4 : String Compare Function (strcmp)");
            printf("\nCase 5 : To find sub string in given string (strstr)");
            printf("\nEnter the choice = ");
            scanf("%d",&ch);
            switch(ch)
            {
                case 1 :
                    printf("\n 1 : String Length Function (strlen)");
                    printf("\nEnter a string to calculate its length : ");
                    scanf("%s",a);

                    len=strlen(a);

                    printf("\nLength of the string = %d ",len);

                    break;

                case 2 :
                    printf("\n 2 : String Copy Function (strcpy)");
                    printf("\nEnter a string : ");
                    scanf("%s",a);

                    strcpy(b,a);

                    printf("\nGiven string is : %s ",a);
                    printf("\nCopied sting is : %s ",b);

                    break;

                case 3 :
                    printf("\n 3 : String Concatenation Function (strcat)");
                    printf("\nEnter the first string : ");
                    scanf("%s",a);

                    printf("\nEnter the second string : ");
                    scanf("%s",b);

                    strcat(a,b);
                    printf("\nThe concatenated string is : %s ",a);

                    break;

                case 4 :
                    printf("\n 4 : String Compare Function (strcmp)");
                    printf("\nEnter the first string : ");
                    scanf("%s",a);
                    printf("\nEnter the second string : ");
                    scanf("%s",b);

                    value=strcmp(a,b);

                    if(value==0)
                    {
                        printf("\nBoth th strings are same");
                    }
                    else
                    {
                        printf("\nStrings are different");
                    }

                    break;

                case 5 :
                    printf("\n 5 : To find sub string in given string (strstr)");
                    const char a[1000]="This is Ishan from Mechanical Branch";
                    const char b[1000]="Branch";

                    sub=strstr(a,b);

                    if(sub)
                    {
                        printf("\nString found!");
                        printf("\nFirst occurrence of string '%s' in '%s' is '%s'",b,a,sub) ;
                    }
                    else
                    {
                        printf("\nString not found!");
                    }
                    break;
            default:
                    printf("\nWrong choice");
            }
            printf("\nDo you want to repeat? \n (y/n) ");
            scanf("%c",&ch1);
            }while(ch1=='y');

            break;

        case 2 :
            printf("\n 2 : Without Library Functions : ");
            do
            {
                printf("\nCase 1 : String Length Function (strlen)");
                printf("\nCase 2 : String Copy Function (strcpy)");
                printf("\nCase 3 : String Concatenation Function (strcat)");
                printf("\nCase 4 : String Compare Function (strcmp)");
                printf("\nCase 5 : To find sub string in given string (strstr)");
                printf("\nCase 6 : To reverse the given string (In-pace logic)");
                printf("\nCase 7 : To find number of occurrences of sub string in given string");
                printf("\nEnter the choice = ");
                scanf("%d",&ch);
                switch(ch)
                {
                    case 1:
                        printf("\n 1 : String Length Function (strlen)");
                        printf("\nEnter the string : ");
                        scanf("%s",a);

                        for(i=0;a[i] != '\0';++i)
                        {
                            printf("\nLength of the string : %d",i);
                        }

                        break;


                default:
                        printf("\nWrong choice");
                }
                printf("\nDo you want to repeat? \n(y/n) ");
                scanf("%c",&ch1);
            }while(ch1=='y');

            break;
    default:
            printf("\nWrong choice");

    }
    printf("\nDo you want to repeat? \n (y/n) ");
    scanf("%c",&ch1);
    }while(ch1=='y');
}
