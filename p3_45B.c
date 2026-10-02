#include <stdio.h>

int main( void )
{
   int terms;
   printf( "%s", "Enter number of terms: " );
   scanf( "%d", &terms );

   double e = 1.0;
   double term = 1.0;
   int n = 1;
   while ( n <= terms ) {
      term /= n;
      e += term;
      ++n;
   }
   printf( "e is approximately %.10f\n", e );
}
