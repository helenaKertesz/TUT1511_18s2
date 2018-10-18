#include <stdio.h>
#include <stdlib.h>
#include "list.h"


// "zip" two lists together 
struct node* zip_lists( struct node* l1, struct node* l2 ){

    struct node* curr1 = l1;
    struct node* curr2 = l2;
    struct node* temp1;
    struct node* temp2;
    
    while( curr1 != NULL && curr2 != NULL ){
    
        temp1 = curr1->next;
        temp2 = curr2->next;
        
        curr1->next = curr2;
        
        if( temp1 != NULL ){
            curr2->next = temp1;
        }
        
        curr1 = temp1;
        curr2 = temp2;
    }
    if ( l1 == NULL ){
        l1 = l2;
    }

    return l1;
}
















// Remove the first element of a linked list, but keep track of the removed node
struct node* remove_head( struct node* l, struct node ** removed_node){
    return NULL;
}


// Given a node, add it to the start of the linked list
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
    // base case
    if( l == NULL ){
        return;
    }
    freeList(l->next);
    free(l);
    
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
            curr->next = NULL;
        } else {
            curr->next = malloc(sizeof(struct node));
            curr = curr->next;
            curr->value = a[i];
            curr->next = NULL;
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
