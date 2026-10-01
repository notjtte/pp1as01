#include <stdio.h>

int main( void )
{
   int binary;
   printf( "%s", "Enter a binary integer (5 digits or fewer): " );
   scanf( "%d", &binary );

   int original = binary;
   int decimal = 0;
   int place = 1;
   int valid = ( binary >= 0 && binary <= 11111 );

   while ( binary > 0 ) {
      int digit = binary % 10;
      if ( digit > 1 ) {
         valid = 0;
      }
      decimal += digit * place;
      place *= 2;
      binary /= 10;
   }

   if ( valid ) {
      printf( "The decimal equivalent of %d is %d\n", original, decimal );
   }
   else {
      puts( "Invalid: enter only 0s and 1s (5 digits or fewer)." );
   }
}
