// Demonstrates the consequences of integer truncation
// In C the order of operations is ( * / % ) then (+ -)
//
// By Helena Kertesz
//
// Written on 2017-08-06

#include<stdio.h>

int main(void){

   // what will each of these expressions be?
	printf("1 / 2 * 500 = %d\n"             , 1 / 2 * 500            );
	printf("1 / 2.0 * 500 = %f\n"           , 1 / 2.0 * 500          );
	printf("(17 / 5) * 5 + (17 %% 5) = %d\n", (17 / 5) * 5 + (17 % 5));
	printf("(12 - 17) %% 6 - 4) = %d\n"     , (12 - 17) % 6 - 4      );

	return 0;
}
