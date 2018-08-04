// A description about the program
//
// By fri11-oboe
//
// Written on 2017-09-03
//
// Helena (fri11-oboe)

#include<stdio.h>

int main(void){

    int a = 0;
    int b = 0;
    int c = 0;
    
    printf("Enter 3 angles, comma separated: ");
    scanf("%d,%d,%d", &a, &b, &c);
    
    int angle_sum = a + b + c; // TODO make function
    
    
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






