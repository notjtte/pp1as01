#include <stdio.h>

int main( void )
{
   int account;
   printf( "%s", "Enter account number (-1 to end): " );
   scanf( "%d", &account );

   while ( account != -1 ) {
      double amount, rate;
      int term;

      printf( "%s", "Enter mortgage amount (in dollars): " );
      scanf( "%lf", &amount );
      printf( "%s", "Enter mortgage term (in years): " );
      scanf( "%d", &term );
      printf( "%s", "Enter interest rate (as a decimal): " );
      scanf( "%lf", &rate );

      double interest = amount * rate * term;
      double totalPayable = amount + interest;
      double monthly = totalPayable / ( term * 12 );

      printf( "The monthly payable interest is: $ %.0f\n\n", monthly );

      printf( "%s", "Enter account number (-1 to end): " );
      scanf( "%d", &account );
   }
}
