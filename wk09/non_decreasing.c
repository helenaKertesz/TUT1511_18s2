#include<stdio.h>

#define TRUE  1
#define FALSE 0

int non_decreasing( int size, int a[size]);

int main(){

    int a1[] = {1, 2, 3, 4, 5};  // non-decreasing
    int a2[] = {1, 5, 5, 10, 9}; // not non-decreasing
    int a3[] = {-1, 0, 100};     // non-decreasing

    if( non_decreasing(5, a1) == TRUE ){
        printf("Test 1 PASSED\n");
    } else {
        printf("Test 1 FAILED\n");
    }

    if( non_decreasing(5, a2) == FALSE ){
        printf("Test 2 PASSED\n");
    } else {
        printf("Test 2 FAILED\n");
    }
    
    if( non_decreasing(3, a3) == TRUE ){
        printf("Test 3 PASSED\n");
    } else {
        printf("Test 3 FAILED\n");
    }
}

int non_decreasing( int size, int a[size]){
    
   return 0; 
}





















