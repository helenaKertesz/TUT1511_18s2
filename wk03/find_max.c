// Print out the maxiumum on two read in nubers.
//
// By the students of tue17-sitar
//        students of fri11-oboe
//
// Written on 2017-08-07
// Written on 2017-08-10
//
// Tutor: Helena (tue17-sitar, fri11-oboe)

#include <stdio.h>

int maxNum( int a, int b ); // function prototype

int main(void) {
   int num1 = 0;
   int num2 = 0;
   printf("Enter 2 numbers, space separated: ");
   scanf("%d %d", &num1, &num2);

   // TODO write function to find max
   int max = maxNum(num1, num2);

   printf("%d is the maximum of %d and %d", max, num1, num2);

	return 0;
}

int maxNum( int a, int b ){

    int max = 0 ;
    if( a > b ){
        max = a;
    } else {
        max = b;
    }
    
    return max;
}


// RULES OF THUMB FOR FUNCTIONS:
// - A function should have ONE purpose
// - A function should easily fit on a screen
// - Each function should have a comment before it saying what it does
