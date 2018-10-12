// Header file for linked lists stuff
// DO NOT CHANGE THIS FILE

// header guard
#ifndef LIST_H_
#define LIST_H_

#define FALSE 0
#define TRUE (!FALSE)

// Node and list structures
// DO NOT CHANGE THIS

struct node {
    int value;
    struct node* next;
};


struct node* remove_head( struct node* l);

struct node *makeNode(int value);

struct node *list_append(struct node *list1, 
                         struct node *list2);

struct node *strings_to_list(int len, char *strings[]);

struct node *array_to_list( int size, int a[size] );

// This function prints a linked list in the format
// 1 -> 2 -> 3 -> X
void listPrint (struct node* l);



#endif // !defined(LIST_H_)
