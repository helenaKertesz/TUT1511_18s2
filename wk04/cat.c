// Playing with Structs
// This file contains function implementation
// for the cat struct
// Written by Helena Kertesz
// 2018/08/13 (YYYY/MM/DD)

#include "cat.h"


// takes in a cat struct and returns the age of that cat in human years
int cat_to_human_age( cat myCat){

    return myCat.age * 7; // one cat year is 7 human years
    
}

// We could have a lot more functions here
