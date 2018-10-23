#include <stdio.h>

int stack1[10], stack2[10], top1= -1, top2= -1; // Static stacks and top pointers

// Helper functions
void push(int a[], int n, int top){
    if(top == -1){
        top = top+1;
        a[top] = n;
    }
    else{
        a[top] = n;
    }
    top = top+1;
}
int pop(int a[], int top){
    int item;
    if(top == -1){
        printf("underFlow\n");
    }
    else{
        item = a[top];
        top = top -1;

    }
    return item;
}
void sort(){
    if(top2 == -1){
        push(stack2, pop(stack1), top2)
    }
    while(stack1[top] > stack2[top]){
        
    }
}