#include <stdio.h>

int main( void )
{
   int number;
   printf( "%s", "Enter a four-digit encrypted integer: " );
   scanf( "%d", &number );

   int d1 = number / 1000;
   int d2 = ( number / 100 ) % 10;
   int d3 = ( number / 10 ) % 10;
   int d4 = number % 10;

   printf( "Decrypted: %d%d%d%d\n",
           ( d3 + 3 ) % 10, ( d4 + 3 ) % 10, ( d1 + 3 ) % 10, ( d2 + 3 ) % 10 );
}
