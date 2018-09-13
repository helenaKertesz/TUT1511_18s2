#include<stdio.h>
#include<string.h>

#define MAX_STRING_LENGTH 100

// Create a struct to store info about a pet
// name, age and type
struct pet {
    char name[MAX_STRING_LENGTH];
    int age;
    char type[MAX_STRING_LENGTH];
};

struct pet_short {
    int age;
    char name[];
};


int main(void){

    // Create a Axolotyl aged 27 called "Fluffy"
    struct pet pet1 = {
        .name = "Fluffy",
        .type = "Axolotyl",
        .age  = 27
    };

    struct pet pet2;
    // If I have already made the struct I need to strcpy strings
    // pet2.name = "Mittens"; // => WILL BE AN ERROR
    strcpy(pet2.name, "Spud");
    strcpy(pet2.type, "Cat");
    pet2.age = 17;

    /*struct pet_short pet3 = {
        .age = 6,
        .name = "Orange"
    };*/
    
    struct pet_short pet4;
    pet4.age = 2;
    strcpy(pet2.name, "Basil");

    printf("%s\n", pet4.name);

    return 0;
}
