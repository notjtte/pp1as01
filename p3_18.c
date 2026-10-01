#include <stdio.h>

int main( void )
{
   double sales;
   printf( "%s", "Enter sales in dollars (-1 to end): " );
   scanf( "%lf", &sales );

   while ( sales != -1 ) {
      double salary = 200.0 + 0.09 * sales;
      printf( "Salary is: $%.2f\n\n", salary );
      printf( "%s", "Enter sales in dollars (-1 to end): " );
      scanf( "%lf", &sales );
   }
}
