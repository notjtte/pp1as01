#include <stdio.h>

int main( void )
{
   int side;
   printf( "%s", "Enter side (1-20): " );
   scanf( "%d", &side );
   while ( side < 1 || side > 20 ) {
      printf( "%s", "Invalid. Enter side (1-20): " );
      scanf( "%d", &side );
   }

   int row = 1;
   while ( row <= side ) {
      int col = 1;
      while ( col <= side ) {
         printf( "%s", "*" );
         ++col;
      }
      puts( "" );
      ++row;
   }
}
