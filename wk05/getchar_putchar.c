// Program exploring getchar and putchar
// Written by Helena Kertesz
// 2018/08/21 (YYYY/MM/DD)

#include<stdio.h>

int main(void){

    char c = getchar(); // reads one character from input and stores in c
    putchar(c);         // prints out the value stored in c

    // I can do this in a loop!
    c = getchar();
    while( c != EOF ){ // EOF is End Of File. Can be given using Ctrl-D
        putchar(c);
        c = getchar();
    }

    return 0;
}
