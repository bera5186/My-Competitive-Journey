/*








*/
#include <thread>
#include <cstdio>
#include <iostream>

using namespace std;

int stack1[5], stack2[5], top1= -1, top2= -1; // Static stacks and top pointers

// Helper functions
void push(int a[], int n, int top){
    cout<<" int push ";
    if(top == -1){
        top = top+1;
        a[top] = n;
        cout<<"done";
    }
    else{
        top = top+1;
        a[top] = n;
        cout<<" done ";

    }
}

int pop(int a[], int top){
    cout<<" in pop ";
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
    int hold;
    push(stack2,pop(stack1,top1),top2);
    while(top1 != -1){
        cout<<" in while";
        if(stack2[top2] > stack1[top1]){
            push(stack2, pop(stack1,top1), top2);
        }

        else{
            hold = stack1[top1];
            while(top2 != -1){
                push(stack1, pop(stack2,top2), top1);
            }
            top2 = top2 + 1;
            stack2[top2] = hold;
        }
        top1--;
    }
}

int main()
{
    push(stack1,2,top1);
    push(stack1,7,top1);
    push(stack1,3,top1);
    push(stack1,11,top1);
    push(stack1,9,top1);
    push(stack1,0,top1);

    sort();

    
    for(int i = 0; i < 6; i++)
    {
        /* code */
        cout<<stack2[i];
    }
    
    return 0;
}