// Playing with Arrays
// Written by Helena Kertesz
// 2018/08/13 (YYYY/MM/DD)

# define SIZE 20

int main(void){

    // a few ways of making arrays
    int array1[SIZE] = {1, 2, 3, 4, 5} // I can initialise each element in an array using a list in curly braces
    // note the use of the #define for the size of the array

    int array2[SIZE] = {0};            // if I just have a zero in the curly braces it will set all the values to zero

    // we can access elements in arrays by index
    array1[0] = 1;     // this sets the first element in this array to 1
    int i = array2[3]; // this stores the 4th item in array "array2" in the variable i
                       // it's the 4th element not the 3rd because indexes start at 0

    // what's wrong here
    int numbers[SIZE] = {0};
    int x = numbers[SIZE];     // since indexing starts from 0, this is actually one past the end of the array (ie the 21st element)

    // let's take it to another dimension!!
    int more_numbers[SIZE][SIZE]; // this is a 2D array, which exists as an array of arrays.
                                  // in this case it's an array of 20 elements, where each element is annother array of 20 elements

    more_numbers[0][0] // index access is the same as with 1D arrays 
                       // this gets us the first element in the first row of this array

    return 0;
}
