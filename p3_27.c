#include <stdio.h>

int main( void )
{
   int passes = 0;
   int failures = 0;
   int student = 1;

   while ( student <= 10 ) {
      int result;
      printf( "%s", "Enter result ( 1=pass, 2=fail ): " );
      scanf( "%d", &result );

      while ( result != 1 && result != 2 ) {
         printf( "%s", "Invalid input. Enter result ( 1=pass, 2=fail ): " );
         scanf( "%d", &result );
      }

      if ( result == 1 ) {
         ++passes;
      }
      else {
         ++failures;
      }
      ++student;
   }

   printf( "Passed %d\nFailed %d\n", passes, failures );
   if ( passes > 8 ) {
      puts( "Bonus to instructor!" );
   }
}
