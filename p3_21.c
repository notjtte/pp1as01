#include <stdio.h>

int main( void )
{
   int c = 5;
   printf( "c before postincrement: %d\n", c );
   printf( "printing c++          : %d\n", c++ ); 
   printf( "c after postincrement : %d\n\n", c );

   c = 5;
   printf( "c before preincrement : %d\n", c );
   printf( "printing ++c          : %d\n", ++c ); 
   printf( "c after preincrement  : %d\n", c );
}
