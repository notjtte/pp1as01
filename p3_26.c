#include <stdio.h>
#include <limits.h>

int main( void )
{
   int counter = 1;
   int number;
   int largest = INT_MIN;
   int second = INT_MIN;

   while ( counter <= 10 ) {
      printf( "%s", "Enter a number: " );
      scanf( "%d", &number );

      if ( number > largest ) {   
         second = largest;
         largest = number;
      }
      else if ( number > second ) {
         second = number;
      }
      ++counter;
   }
   printf( "Largest: %d\nSecond largest: %d\n", largest, second );
}
