#include <stdio.h>

int main( void )
{
   int counter = 1;
   int number;
   int largest = 0;

   while ( counter <= 10 ) {
      printf( "%s", "Enter a non-negative number: " );
      scanf( "%d", &number );
      if ( number > largest ) {
         largest = number;
      }
      ++counter;
   }
   printf( "The largest number is %d\n", largest );
}
