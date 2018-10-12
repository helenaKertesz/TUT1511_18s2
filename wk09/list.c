#include <stdio.h>
#include <stdlib.h>
#include "list.h"


struct node* remove_head( struct node* l){
    return NULL;
}

struct node* push_node( struct node* l, struct node* newNode){
    return NULL;
}


// Append one linked list onto the end of another
struct node *list_append(struct node *list1, 
                         struct node *list2){
    
    // find end of list 1
    struct node * curr = list1;
    while( curr->next != NULL ){
        curr = curr->next;
    }
    
    curr->next = list2;
    
    return list1;
}

// given an array of strings,
//create a linked list containing ints
struct node *strings_to_list(int len, 
                             char *strings[]){
                             
    
    struct node* head = NULL;
    
    int i = len-1;
    while( i >= 0 ){
        
        struct node* new = malloc( sizeof( struct node) );
        new->next = NULL;
        new->value = atoi(strings[i]);
        
        if( head == NULL ){
            head = new;
        } else {
            //struct node* temp = head;
            //head = new;
            //new->next = temp;
            
            new->next = head;
            head = new;
        }
        
        i--;
    }
    
    return head;
}


void freeList( struct node* l ){
    
}

struct node *array_to_list( int size, int a[size] ){
    struct node* curr = NULL;
    struct node* head = NULL;
    int i;
    for(i = 0; i < size; i++ ){
        // First Node
        if( curr == NULL){
            curr = malloc(sizeof(struct node));
            head = curr;
            curr->value = a[i];
        } else {
            curr->next = malloc(sizeof(struct node));
            curr = curr->next;
            curr->value = a[i];
        }
    }
    return head;
}


// This function prints a linked list in the format
// 1 -> 2 -> 3 -> X
void listPrint (struct node* l){
    struct node* curr = l;
    while( curr != NULL ){
        printf("%d -> ", curr->value );
        curr = curr->next;
    }
    printf("X\n");
}
