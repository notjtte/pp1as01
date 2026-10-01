#include <stdio.h>

int main( void )
{
   int c = 5;
   printf( "c before postincrement: %d\n", c );
   printf( "printing c++          : %d\n", c++ ); // uses 5, then c becomes 6
   printf( "c after postincrement : %d\n\n", c );

   c = 5;
   printf( "c before preincrement : %d\n", c );
   printf( "printing ++c          : %d\n", ++c ); // c becomes 6, then uses 6
   printf( "c after preincrement  : %d\n", c );
}
