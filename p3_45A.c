#include <stdio.h>

int main( void )
{
   int n;
   printf( "%s", "Enter a nonnegative integer (0-20): " );
   scanf( "%d", &n );

   if ( n < 0 || n > 20 ) {
      puts( "Out of range: enter a value from 0 to 20." );
   }
   else {
      unsigned long long factorial = 1;
      int i = 2;
      while ( i <= n ) {
         factorial *= i;
         ++i;
      }
      printf( "%d! = %llu\n", n, factorial );
   }
}
