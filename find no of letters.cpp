#include<stdio.h>
#include<string.h>
main()
{
   int i,count=0;
   char c,str[100];
   printf("enter a sentence\n");
   gets(str);
   printf("enter a character to check how many times it is repeating\n");
   scanf("%c",&c);
   for(i=0;i<strlen(str);i++)
   {
      if(str[i]==c)
	  {
         count++;
      }
   }
   printf("Letter %c repeated %d times\n",c,count);
}
