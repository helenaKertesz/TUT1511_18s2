// Requests and reads in the angles of a triangle and prints out if it is valid

#include<stdio.h>

int main(void){

    double a1;
    double a2;
    double a3;
    
    printf("Enter angles of a triangle, space separted: ");

    printf("%lf %lf %lf\n", a1, a2, a3);
    scanf("%lf %lf %lf", &a1, &a2, &a3);
    printf("%lf %lf %lf\n", a1, a2, a3);
    
    if( a1 > 0 && a2 > 0 && a3 > 0 ){
    
        if( (a1 + a2 + a3) == 180 ){
            printf("Triangle is valid.\n");
        } else {
            printf("Triangle is invalid.\n");
        }
        
    } else {
        printf("Invalid Input, angles should not be <= 0\n");
    }
 
   return 0;
}
