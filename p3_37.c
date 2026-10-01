#include <stdio.h>

int main( void )
{
   int count = 1;
   while ( count <= 500 ) {
      printf( "%s", "$ " );
      if ( count % 50 == 0 ) {
         puts( "" );
      }
      ++count;
   }
}
