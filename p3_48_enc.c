#include <stdio.h>

int main( void )
{
   int number;
   printf( "%s", "Enter a four-digit integer to encrypt: " );
   scanf( "%d", &number );

   int d1 = number / 1000;
   int d2 = ( number / 100 ) % 10;
   int d3 = ( number / 10 ) % 10;
   int d4 = number % 10;

   d1 = ( d1 + 7 ) % 10;
   d2 = ( d2 + 7 ) % 10;
   d3 = ( d3 + 7 ) % 10;
   d4 = ( d4 + 7 ) % 10;

   printf( "Encrypted: %d%d%d%d\n", d3, d4, d1, d2 );
}
