#include <stdio.h>

int main( void )
{
   int n = 100;
   while ( n <= 999 ) {
      int a = n / 100;
      int b = ( n / 10 ) % 10;
      int c = n % 10;
      if ( a * a * a + b * b * b + c * c * c == n ) {
         printf( "%d\n", n );
      }
      ++n;
   }
}
