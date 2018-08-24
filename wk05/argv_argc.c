// Program exploring the use of argv and argc
// Writen by Helena Kertesz
// 2019/08/21 (YYYY/MM/DD)

#include<stdio.h>

// argc - "argument count"
// the number of arguments given to main
// (including )
// argv - "argument vector" (I remember as "value")
// an arrays of strings
// a string is an array of chaarcters
//
// char* is a pointer to a character
// in this case it's a pointer to the first character in
// an array of characters
int main( int argc, char* argv[] ){
   

    int i = 0;
    while( i < argc ){
        printf("argument %d: %s\n", i, argv[i]);
        i++;
    }

    return 0;
}






