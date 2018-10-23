#include <stdio.h>
#include <malloc.h>

int count = 1;

struct Node
{
    /* data */
    int data;
    struct Node *next;
};
typedef struct Node Rahul;

Rahul *head = NULL;
Rahul *last = NULL;

void insert(int n){
    Rahul *x = (Rahul *)malloc(sizeof(Rahul));
    x->data = n;
    
    if(head == NULL){
        head = last = x;
        x->next = NULL;
    }
    
    else
    {
        last->next = x;
        x->next = NULL;
        last = x;
    }
    
}



void display(){
    Rahul *n = head;
    while(n != NULL){
        printf("%d -> ", n->data);
        n = n->next;
    }
    
}

void reverse(){
    Rahul *ptr,*cpt,*pptr;
    pptr = cpt = ptr = head;

    while(ptr->next != NULL){
        if(count == 1){
            cpt = cpt->next;
            pptr->next=NULL;
            ptr = cpt;
        }
        else{
            cpt=cpt->next;
            ptr->next=pptr;
            pptr=ptr;
            ptr=cpt;
        }
        count = count + 1;
    }
    ptr->next=pptr;
    head = ptr;
    display();

}

int main()
{
    
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    display();
    
    printf("\n\n");


    reverse();

    

    

    return 0;
}

