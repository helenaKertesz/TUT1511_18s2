// Playing with Structs
// .h file contain struct and function definietion
// for the cat struct
//
// note this only contains struct declarations
// and functions prototypes, no runnable code
//
// Written by Helena Kertesz
// 2018/08/13 (YYYY/MM/DD)

#ifndef CAT
#define CAT

typedef struct _cat {
    double weight; // weight
    int age;       // age
    int numPats;   // num pats
} cat ; // the typedef allows us to refer to this type as just "cat"


int cat_to_human_age( cat myCat );

#endif
