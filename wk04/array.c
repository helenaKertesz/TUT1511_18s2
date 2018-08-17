// Playing with Arrays
// Written by Helena Kertesz
// 2018/08/13 (YYYY/MM/DD)

# define SIZE 20

int main(void){

   // a few ways of making arrays
   int array1[SIZE] = {1, 2, 3, 4, 5} // I can initialise each element in an array using a list in curly braces
                                      // note the use of the #define for the size of the array

   int array2[SIZE] = {0};            // if I just have a zero in the curly braces it will set all the values to zero

   // what's wrong here
   int numbers[SIZE] = {0};
   int x = numbers[20];     // since indexing starts from 0, this is actually one past the end of the array

   // let's take it to another dimension!!
   int more_numbers[SIZE][SIZE] // this is a 2D array, which exists as an array of arrays.
   
   return 0;
}
