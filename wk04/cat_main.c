// Playing with Structs
// This file contains the main function
// for playing with the cat struct
// Written by Helena Kertesz
// 2018/08/13 (YYYY/MM/DD)

#include<stdio.h>
#include "cat.h"


int main(void){

   cat mittens; // this is a variable with name "mittens" and type "cat"
                // (our custom struct type)
   
   mittens.age = 12;
   mittens.weight = 2.3;
   mittens.numPats = 3;
   
   printf("Mittens is %d in human years\n", cat_to_human_age(mittens.age));
   

   return 0;
}
