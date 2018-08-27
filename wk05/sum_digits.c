// Adds all the digits given by startdard input, ignoring
// charcters, and prints result
// Writen by tue17-sitar and fri11-oboe
// 2019/08/21 (YYYY/MM/DD)

#include<stdio.h>

int main(void){

    char c = getchar();
    int sum = 0, digits = 0;
    while (c != EOF) {
        if (c >= '0' && c <= '9') {
            digits++;   
            // normalise to the integer 0-9
            // rather than character '0'-'9'
            sum += c - '0'; 
        }
        c = getchar(); // keep getting characters
    }
    printf("sum = %d, count = %d\n", sum, digits);
    return 0;
}
