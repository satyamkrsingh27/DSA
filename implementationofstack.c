#include <stdio.h>
#include <stdlib.h>
#define N 5
int top=-1;
int stack[N];
void push(){
    int x;
    if(top==N-1){
        printf("Stack Overflow\n");
    }
    else{
        printf("Enter the element to be pushed: ");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop(){
    if(top==-1){
        printf("Stack Underflow\n");
    }
    else{
        printf("The popped element is: %d\n",stack[top]);
        top--;
    }
}
void display(){
    if(top==-1){
        printf("Stack is empty\n");
    }
    else{
        printf("The elements in the stack are: ");
        for(int i=top;i>=0;i--){
            printf("%d ",stack[i]);
        }
        printf("\n");
    }
}
int main(){
    int choice;
    while(1){
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}