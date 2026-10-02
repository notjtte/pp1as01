#include <stdio.h>

int main( void )
{
   int a, b, c;
   printf( "%s", "Enter three nonzero integers: " );
   scanf( "%d%d%d", &a, &b, &c );

   if ( a > 0 && b > 0 && c > 0 &&
        a + b > c && a + c > b && b + c > a ) {
      puts( "These could be the sides of a triangle." );
   }
   else {
      puts( "These could NOT be the sides of a triangle." );
   }
}
