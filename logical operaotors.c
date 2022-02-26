#include <stdio.h>
int main() 
{
   int a = 5;
   int b = 20;
   int c ;

   if ( a && b ) 
   {
      printf("Condition is true\n" );
   }
	
   if ( a || b )
   {
      printf("Condition is true\n" );
   }
   
   /* lets change the value of  a and b */
   a = 0;
   b = 10;
	
   if ( a && b )
   {
      printf("Condition is true\n" );
   } else
   {
      printf("Condition is not true\n" );
   }
   return 0;
}
