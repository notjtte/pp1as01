#include <stdio.h>

int main( void )
{
   float radius;
   printf( "%s", "Enter the radius: " );
   scanf( "%f", &radius );

   printf( "Diameter: %.2f\n", 2 * radius );
   printf( "Circumference: %.2f\n", 2 * 3.14159 * radius );
   printf( "Area: %.2f\n", 3.14159 * radius * radius );
}
