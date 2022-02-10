// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

struct node{
  int data;
  struct node * next;
};

void display(struct node * ptr){
    while(ptr!=NULL){
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// add a node at the starting
struct node * addAtStart(struct node * head, int elem){
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = elem;
    ptr->next = head;
    return ptr;
}

// add a node at the ending
struct node * addAtEnd(struct node * head, int elem){
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    struct node * p = head;
    while(p->next!=NULL){
        p = p->next;
    }
    ptr->data = elem;
    ptr->next = NULL;
    p->next = ptr;
    return head;
}

// add a node at particular index
struct node * addAtIndex(struct node * head, int elem, int index){
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    struct node * p = head;
    int i = 0;
    while(i!=index-1){
        p = p->next;
        i++;
    }
    ptr->data = elem;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

int main() {
    struct node * head;
    struct node * second;
    struct node * third;
    struct node * fourth;
    
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    
    head->data = 1;
    head->next = second;
    
    second->data = 2;
    second->next = third;
    
    third->data = 3;
    third->next = fourth;
    
    fourth->data = 4;
    fourth->next = NULL;
    
    printf("\nbefore insertion at start\n");
    display(head);
 
    // head = addAtStart(head, 0);
 
    // printf("\nafter insertion at start\n");
    // display(head);
    
    // printf("\nafter insertion at index\n");
    // display(addAtIndex(head, 900, 1));
    
    printf("\nafter insertion at end\n");
    display(addAtEnd(head, 900));
    
    return 0;
}