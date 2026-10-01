#include <stdio.h>

int main( void )
{
   int n;
   printf( "%s", "Enter an integer: " );
   scanf( "%d", &n );

   int isPrime = ( n > 1 ); 
   int i = 2;
   while ( isPrime && i * i <= n ) { 
      if ( n % i == 0 ) {
         isPrime = 0;
      }
      ++i;
   }

   if ( isPrime ) {
      printf( "%d is a prime number\n", n );
   }
   else {
      printf( "%d is not a prime number\n", n );
   }
}
