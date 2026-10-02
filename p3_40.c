#include <stdio.h>

int main( void )
{
   unsigned int power = 3;
   while ( 1 ) {
      printf( "%u\n", power );
      power *= 3;
   }
}
