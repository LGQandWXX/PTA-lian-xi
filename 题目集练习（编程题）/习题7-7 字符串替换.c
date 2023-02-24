#include <stdio.h>
 int main()
{ 
   char a;

   while((a=getchar())!='\n')
   {
   	  if(a>='A'&&a<='Z')
   	  a=155-a;
   	  printf("%c",a);
   }
   return  0;
}