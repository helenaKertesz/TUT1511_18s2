// This program has memory leaks!!

#include <stdlib.h>

int main(){
    
    // malloc enough space for an array of 10 ints
    int * something = malloc( 10 * sizeof(int) );
    
    return 0;
}



