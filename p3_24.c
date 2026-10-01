#include <stdio.h>

int main( void )
{
   printf( "N\tN^2\tN^3\tN^4\n" );
   int n = 1;
   while ( n <= 10 ) {
      int n2 = n * n;
      int n3 = n2 * n;
      int n4 = n3 * n;
      printf( "%d\t%d\t%d\t%d\n", n, n2, n3, n4 );
      ++n;
   }
}
