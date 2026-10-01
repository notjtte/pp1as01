#include <stdio.h>

int main( void )
{
   double total;
   char month[ 20 ];

   printf( "%s", "Enter total amount collected (-1 to quit): " );
   scanf( "%lf", &total );

   while ( total != -1 ) {
      printf( "%s", "Enter name of month: " );
      scanf( "%19s", month );

      double sales = total / 1.09;
      double county = sales * 0.05;
      double state = sales * 0.04;

      printf( "Total Collections: $ %.2f\n", total );
      printf( "Sales: $ %.2f\n", sales );
      printf( "County Sales Tax: $ %.2f\n", county );
      printf( "State Sales Tax: $ %.2f\n", state );
      printf( "Total Sales Tax Collected: $ %.2f\n\n", county + state );

      printf( "%s", "Enter total amount collected (-1 to quit): " );
      scanf( "%lf", &total );
   }
}
