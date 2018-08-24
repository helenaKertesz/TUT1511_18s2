// prints out the sum of all command , line arguments
// we're going to assume they are all numbers
// Writen by tue17-sitar and fri11-oboe
// 2019/08/21 (YYYY/MM/DD)

#include<stdlib.h>
#include<stdio.h>

int main(int argc, char* argv[]){

	int sum = 0;
    int argument = 1;  // TODO why start at 1?
    while (argument < argc) {
       sum = sum + atoi(argv[argument]);
       argument= argument + 1;
    }
    printf("sum of command-line arguments = %d\n", sum);

    return 0;
}
