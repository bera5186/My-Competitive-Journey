#include <stdio.h>
#include <malloc.h>


struct rotate
{
    int data;
    struct rotate *next;
};
typedef struct rotate  r;

r *head = NULL;
r *tail = NULL ;

//circular linked list
void create(int num){
    r *newnode = (r*)malloc(sizeof(struct rotate));
    newnode->data = num ;
    
    if(head == NULL){
        head = tail = newnode;
        newnode->next = head;
    }  else {
        head->next = newnode;
        newnode  = tail ;
        newnode->next = head ;
    }
}

void rotate(int factor){
    r *tptr = head, *cptr;

    for (int i=0; i<factor; i++){
        tptr = tptr->next;
    }
    cptr = tptr->next;

    while(cptr != tptr){
        printf("%d", cptr->data);
        cptr = cptr->next;
    }
}



int main(){
    int t, n, k, temp;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d", &n, &k);
        for(int i=0; i<n; i++){
            scanf("%d", &temp);
            create(temp);
        }

        rotate(k);

    }
}
