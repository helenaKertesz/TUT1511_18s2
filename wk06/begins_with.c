#include<stdio.h>

#define FALSE 0
#define TRUE !FALSE

int begins_with( char* string1, char* string2 );

int main(void){
    
    if( begins_with("APPLE", "APP" ) == TRUE ){
        printf("Test 2 PASSED\n");
    } else {
        printf("Test 2 FAILED\n");
    }
    
    if( begins_with("APPLE", "RAW") == FALSE ){
        printf("Test 1 PASSED\n");
    } else {
        printf("Test 1 FAILED\n");
    }

    if( begins_with("APP", "APPLE") == FALSE ){
        printf("Test 1 PASSED\n");
    } else {
        printf("Test 1 FAILED\n");
    }

    return 0;
}

int begins_with( char* string1, char* string2 ){

    int begins_with = TRUE;

    int i = 0;
    while( string1[i] != '\0' && string2[i] != '\0'){
        if( string1[i] != string2[i]){
            begins_with = FALSE;
        }
        i++;

        if( string1[i] == '\0'){
            begins_with = FALSE;
        }
    }

    return begins_with;

}
