#include<stdio.h>
#include<string.h>

#define MAX_STRING_LENGTH 100

// Create a struct to store info about a pet
// name, age and type
struct pet {
    //char name[MAX_STRING_LENGTH];
    char name[];
    int age;
    char * type;
    //char type[MAX_STRING_LENGTH];
};

int main(void){

    // Create a Axolotyl aged 27 called "Fluffy"
    struct pet mypet;
    
    strcpy(mypet.name, "Fluffy");
    strcpy(mypet.type, "Axolotyl");
    mypet.age = 27;
    
    return 0;
}
