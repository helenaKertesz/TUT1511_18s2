// Adds all the digits given by startdard input, ignoring
// chaarcters, and prints result
// Writen by tue17-sitar and fri11-oboe
// 2019/08/21 (YYYY/MM/DD)

#include<stdio.h>

int main(void){

    // TODO !
    char c = getchar();
    int sum = 0, digits = 0;
    while (c != EOF) {
        if (c >= '0' && c <= '9') {
            digits++;
            sum += c - 48;
        }
    }
    printf("sum = %d, count = %d", sum, digits);
    return 0;
}
