// Demonstrates #defines in C
//
// By Helena Kertesz
// Copied from a COMP1511 example
//
// Written on 2017-08-06

#include <stdio.h>

#define FIRST_NUMBER     10
#define SECOND_NUMBER    20
#define TOTAL   FIRST_NUMBER + SECOND_NUMBER
#define AVERAGE TOTAL / 2

int main(void) {
	printf("The average of %d and %d is %d\n",
			FIRST_NUMBER, SECOND_NUMBER, AVERAGE);

	return 0;
}



















// TOTAL -> FIRST_NUMBER + SECOND_NUMBER -> 10 + 20
// AVERAGE -> TOTAL / 2 -> 10 + 20 / 2 -> 20
