#include <stdio.h>

#include "list.h"


int main(){

    int a1[] = {1, 2, 3};
    struct node* l1 = array_to_list( 3, a1 );
    int a2[] = {9, 8, 7};
    struct node* l2 = array_to_list( 3, a2 );

    listPrint(l1);
    listPrint(l2);

    // Append l2 to l1
    struct node* l3 = list_append(l1, l2);

    listPrint(l3);

    // create a linked list from an array of strings
    char* a4[] = {"7", "22", "4", "101"};
    struct node* l4 = strings_to_list(4, a4);
    listPrint(l4);

    return 0;
}
