// Requests and reads in the angles of a triangle
// and prints out if it is valid
//
// By the students of fri11-oboe
//
// Written on 2017-09-03
//
// Tutor: Helena (fri11-oboe)

#include<stdio.h>

int main(void){

    int a = 0; 
      // we always initialise variables so that we're never dealing with junk
    int b = 0;
    int c = 0;
    
    printf("Enter 3 angles, comma separated: ");
    scanf("%d,%d,%d", &a, &b, &c);
    
    int angle_sum = a + b + c; // SUGGESTION: we could make this a function
    
    if( a <= 0 || b <= 0 || c <= 0 ){
        printf("ERROR: some angle <=0 :(\n");
    } else {
        
         if( angle_sum == 180 ){
            printf("Triangle is Valid\n");
        } else {
            printf("Triangle is Invalid\n");
        }
    }

   return 0;
}






