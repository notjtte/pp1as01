#include <stdio.h>

int main( void )
{
   int number = 1;
   int row = 1;
   while ( row <= 10 ) {         
      int col = 1;
      while ( col <= row ) {
         printf( "%4d", number );
         ++number;
         ++col;
      }
      puts( "" );
      ++row;
   }
}
