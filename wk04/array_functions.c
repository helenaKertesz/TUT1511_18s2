// Contains some functions that use arrays
//  - dot product
//  - find if an array is increasing
// Written by tue17sitar & fri11oboe
// 2018/08/14 (YYYY/MM/DD)

#include<stdio.h>

#define VECTOR_LENGTH 5

int dot_product( int vector1[VECTOR_LENGTH], int vector2[VECTOR_LENGTH] );

int main(void){

   // one dot product test
   // TODO you should always have more than one test!
   int array1[VECTOR_LENGTH] = {1, 3, 1, 3, 2};
   int array2[VECTOR_LENGTH] = {2, 1, 2, 1, 2};
   int product = dot_product( array1, array2 );
   if( product == 14 ){
      printf("dot_product PASSED!\n");
   } else {
      printf("dot_product FAILED!\n");
   }

   return 0;
}



// TODO remember to have a comment decribing the function!
// This function calculates the dot product of two vectors (passed in as arrays)
int dot_product( int vector1[VECTOR_LENGTH], int vector2[VECTOR_LENGTH] ){
    int i = 0;
    int sum = 0;
    while (i < VECTOR_LENGTH) {          // we use while loops to loop through arrays
        sum += vector1[i] * vector2[i];
        i++;
    }
    return sum;
}
