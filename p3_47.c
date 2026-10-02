#include <stdio.h>

int main( void )
{
   int bMonth, bDay, bYear, cMonth, cDay, cYear;

   printf( "%s", "Enter your birthday (month day year): " );
   scanf( "%d%d%d", &bMonth, &bDay, &bYear );
   printf( "%s", "Enter today's date (month day year): " );
   scanf( "%d%d%d", &cMonth, &cDay, &cYear );

   int age = cYear - bYear;
   if ( cMonth < bMonth || ( cMonth == bMonth && cDay < bDay ) ) {
      --age;
   }

   int maxRate = 220 - age;
   printf( "Age: %d years\n", age );
   printf( "Maximum heart rate: %d beats per minute\n", maxRate );
   printf( "Target heart rate range: %.0f - %.0f beats per minute\n",
           maxRate * 0.50, maxRate * 0.85 );
   puts( "(AHA estimates; consult a physician before changing your exercise program.)" );
}
