#include <stdio.h>

int main( void )
{
   double principal;
   printf( "%s", "Enter loan principal (-1 to end): " );
   scanf( "%lf", &principal );

   while ( principal != -1 ) {
      double rate;
      int days;
      printf( "%s", "Enter interest rate: " );
      scanf( "%lf", &rate );
      printf( "%s", "Enter term of the loan in days: " );
      scanf( "%d", &days );

      double interest = principal * rate * days / 365;
      printf( "The interest charge is $%.2f\n\n", interest );

      printf( "%s", "Enter loan principal (-1 to end): " );
      scanf( "%lf", &principal );
   }
}
