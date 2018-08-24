// Given a single character as an argument to
// main, shifts it by three (according to Caesar Cypher)
// and prints out result
// Writen by Helena Kertesz
// 2019/08/21 (YYYY/MM/DD)

#include<stdio.h>

int main(int argc, char* argv[]){

    // given incorrect input
    if( argc != 2 ){
        printf("Usage: ./shift_by_3 <char to shift>\n");
        return 1;
    }

    // TODO 
    char c = argv[1][0];
    
    printf("%c\n", c+3);

    return 0;
}




