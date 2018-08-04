// Reads in a temperature in fahrenheit and converts to celcius
//
// Written by: Helena Kertesz
//
// Date: 2018/07/31
//
// Tutor: Helena (tue17-sitar, fri11-oboe)

#include<stdio.h>

int main(void){

   double fahrenheit = 0;

   scanf("%lf", &fahrenheit);

   // which of these will work? 
   double celsius_1 = ( fahrenheit - 32 ) * ( 5 / 9 );
   double celsius_1 = ( fahrenheit - 32 ) *  5 / 9 ;
   double celsius_1 = ( fahrenheit - 32.0 ) * ( 5.0 / 9.0 ); 

   printf("%.2lf Fahrenheit is %lf Celcius\n", fahrenheit, celsius);

   return 0;
}

// 1) since ( 5 / 9 ) is an integer divided by an integer, the result is an integer
//    this will trancate to 0 and be incorrect;
// 2) Each calculation is a double and an integer. This "raises" the integer to a double
//    so the result is a double
// 3) we only have doubles here
