#include <stdio.h>

int main( void )
{
   int n;
   printf( "%s", "Enter an integer (5 digits or fewer): " );
   scanf( "%d", &n );

   if ( n < 0 ) {
      n = -n;
   }

   int nines = 0;
   while ( n > 0 ) {
      if ( n % 10 == 9 ) {
         ++nines;
      }
      n /= 10;
   }
   printf( "The number contains %d nine(s)\n", nines );
}
