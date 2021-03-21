#include<stdio.h>
#include<string.h>
int main()
{
   char str[100];
   printf("Enter string: ");
   fgets(str, sizeof(str), stdin);

   strrev(str);
   printf("The reverse of the string is: ");
   puts(str);

   return 0;
}
