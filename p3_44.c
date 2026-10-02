#include <stdio.h>

int main( void )
{
   int a, b, c;
   printf( "%s", "Enter three nonzero integers: " );
   scanf( "%d%d%d", &a, &b, &c );

   if ( a > 0 && b > 0 && c > 0 &&
        ( a * a + b * b == c * c ||
          a * a + c * c == b * b ||
          b * b + c * c == a * a ) ) {
      puts( "These could be the sides of a right triangle." );
   }
   else {
      puts( "These could NOT be the sides of a right triangle." );
   }
}
