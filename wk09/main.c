#include <stdio.h>

#include "list.h"

void testAppendList();
void testStringsToList();
void testZipLists();

int main(){

    //testAppendList();
    //testStringsToList();
    testZipLists();

    return 0;
}

void testAppendList(){
    int a1[] = {1, 2, 3};
    struct node* l1 = array_to_list( 3, a1 );
    int a2[] = {9, 8, 7};
    struct node* l2 = array_to_list( 3, a2 );

    listPrint(l1);
    listPrint(l2);

    // Append l2 to l1
    struct node* l3 = list_append(l1, l2);

    listPrint(l3);

}

void testStringsToList(){
    // create a linked list from an array of strings
    char* a4[] = {"7", "22", "4", "101"};
    struct node* l4 = strings_to_list(4, a4);
    listPrint(l4);
}

void testZipLists(){

    int a1[6] = {0,   1,  2,  3,  4,  5};
    int a2[6] = {10, 11, 12, 13, 14, 15};

    struct node* l1;
    struct node* l2;
    struct node* zipped;

    // test 1: both lists empty
    l1 = NULL;
    l2 = NULL;
    zipped = zip_lists(l1, l2);
    listPrint(zipped);
    freeList(l1);
    freeList(l2);

    // test 2: second list empty
    l1 = array_to_list(6, a1);
    l2 = NULL;
    zipped = zip_lists(l1, l2);
    listPrint(zipped);
    freeList(l1);
    freeList(l2);

    // test 3: first list empty
    l1 = NULL;
    l2 = array_to_list(6, a2);
    zipped = zip_lists(l1, l2);
    listPrint(zipped);
    freeList(l1);
    freeList(l2);

    // test 4: both lists same size
    l1 = array_to_list(6, a1);
    l2 = array_to_list(6, a2);
    zipped = zip_lists(l1, l2);
    listPrint(zipped);
    freeList(l1);
    freeList(l2);

    // test 5: first list bigger
    l1 = array_to_list(6, a1);
    l2 = array_to_list(2, a2);
    zipped = zip_lists(l1, l2);
    listPrint(zipped);
    freeList(l1);
    freeList(l2);

    // test 6: second list bigger
    l1 = array_to_list(2, a1);
    l2 = array_to_list(6, a2);
    zipped = zip_lists(l1, l2);
    listPrint(zipped);
    freeList(l1);
    freeList(l2);

}
