#include<stdio.h>
#define N 5
int queue[N];
int rear = -1;
int front = -1;
void enqueue(int x){
    if (front ==-1 && rear == -1){
        front = rear = 0;
        queue[rear] = x;
    }
    else if (rear == N-1){
        printf("Overflow\n");
    }
    else{
        rear++;
        queue[rear] = x;
    }
}
void dequeue(){
    if (front == -1 && rear == -1){
        printf("Underflow\n");
    }
    else if (front == rear){
        front = rear = -1;
    }
    else{
        front++;
    }
}
void display(){
    if (front == -1 && rear == -1){
        printf("Queue is empty\n");
    }
    else{
        for (int i = front; i <= rear; i++){
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
    return 0;
}