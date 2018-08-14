// Reads in a size from the user and
// prints out a square of *'s (and variations)
//
// By the students of tue17-sitar
//        students of fri11-oboe
//
// Written on 2017-08-07
// Written on 2017-08-10
//
// Tutor: Helena (tue17-sitar, fri11-oboe)

#include<stdio.h>

int main(void){
   // read in user input
   int num = 0;
   printf("Please enter square size: ");
   scanf("%d", &num);

   // print square

    int row = 0;
    int col = 0;
    while( row < num ){

        // print one line of *'s
        col = 0;
        while( col < num ){
                if( col >= row ){ // modifying this if can make pretty much any shape
                    printf("*");
                } else {
                    printf(" ");
                }
                col = col + 1;
        }
        printf("\n");
        row = row + 1;
   
   }
   return 0;
}
