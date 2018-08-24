// Progam exploring ascii values of characters
// Writen by Helena Kertesz
// 2019/08/21 (YYYY/MM/DD)

#include<stdio.h>

int main(void){

    // characters are ecoded to number by ascii
    printf("%d - %c\n", 'a', 'a');
    
    // a char is just a number going from 0 to 255
    char i = 0;
    while( i < 127 ){
        printf("\t%d -\t %c\n", i, i);
        i++;
    }

    return 0;
}
