// circular queue

#include <stdio.h>

void enqueue(int q[], int *r, int *f, int e, int size){
    if ((*r==size-1 && *f==0) || (*f==*r+1)){
        printf("\noverflow");
    } else{
        if(*f==-1){
            *f=0;
        }
        *r = (*r + 1)%size;
        q[*r] = e;
        printf("\nelement inserted: %d", e);
    }
}

void dequeue(int q[], int *r, int *f, int size){
    if(*f==-1){
        printf("\nunderflow");
    } else{
        if(*f==*r){
            printf("\ndeleted: %d", q[*f]);
            *f=-1;
            *r=-1;
        } else{
            (*f)++;
        }  
    printf("\ndeleted: %d", q[*f]);
    } 
}

int main() {
    int size = 5;
    int queue[size];
    int rear = -1;
    int front = -1;
    
    char elem;
    
    enqueue(queue, &rear, &front, 1, size);
    enqueue(queue, &rear, &front, 2, size);
    enqueue(queue, &rear, &front, 3, size);
    enqueue(queue, &rear, &front, 4, size);
    enqueue(queue, &rear, &front, 5, size);
    dequeue(queue, &rear, &front, size);
    dequeue(queue, &rear, &front, size);
    dequeue(queue, &rear, &front, size);
    dequeue(queue, &rear, &front, size);
    enqueue(queue, &rear, &front, 6, size);
    enqueue(queue, &rear, &front, 7, size);
    enqueue(queue, &rear, &front, 8, size);
    enqueue(queue, &rear, &front, 9, size);
    enqueue(queue, &rear, &front, 6, size);
    enqueue(queue, &rear, &front, 7, size);
    enqueue(queue, &rear, &front, 8, size);
    enqueue(queue, &rear, &front, 9, size);
    enqueue(queue, &rear, &front, 6, size);
    enqueue(queue, &rear, &front, 7, size);
    enqueue(queue, &rear, &front, 8, size);
    enqueue(queue, &rear, &front, 9, size);
    enqueue(queue, &rear, &front, 6, size);
    enqueue(queue, &rear, &front, 7, size);
    enqueue(queue, &rear, &front, 8, size);
    enqueue(queue, &rear, &front, 9, size);
    enqueue(queue, &rear, &front, 6, size);
    enqueue(queue, &rear, &front, 7, size);
    enqueue(queue, &rear, &front, 8, size);
    enqueue(queue, &rear, &front, 9, size);
    enqueue(queue, &rear, &front, 6, size);
    enqueue(queue, &rear, &front, 7, size);
    enqueue(queue, &rear, &front, 8, size);
    enqueue(queue, &rear, &front, 9, size);
    
    // dequeue(queue, &rear, &front, size);
    // dequeue(queue, &rear, &front, size);
    // dequeue(queue, &rear, &front, size);
    // dequeue(queue, &rear, &front, size);
    // dequeue(queue, &rear, &front, size);
    // dequeue(queue, &rear, &front, size);
    // dequeue(queue, &rear, &front, size);
    
    return 0;
}

