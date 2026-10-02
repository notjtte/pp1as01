#include <stdio.h>

int main( void )
{
   double population, ratePercent;
   printf( "%s", "Enter current world population: " );
   scanf( "%lf", &population );
   printf( "%s", "Enter annual growth rate (percent, e.g. 0.9): " );
   scanf( "%lf", &ratePercent );

   int year = 1;
   while ( year <= 5 ) {
      population *= 1 + ratePercent / 100;
      printf( "Estimated population after %d year(s): %.0f\n", year, population );
      ++year;
   }
}
