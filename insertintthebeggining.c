#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
struct Node* head=NULL,*newnode,*temp;
void createNode(){
    newnode=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter the data");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==NULL){
        head=temp=newnode;
    }
    else{
        temp->next=newnode;
        temp=newnode;
    }
}
void display(){
    temp=head;
    if(temp==NULL){
        printf("List is empty");
    }
    else{
        printf("List elements are ");
        while(temp!=NULL){
            printf("%d",temp->data);
            temp=temp->next;
        }
    }
    printf("\n");
}
void insertAtBeginning(){
    newnode=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter the data");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;
}
void insertAtEnd(){
    newnode=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter the data");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==NULL){
        head=temp=newnode;
    }
    else{
        temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
    }
}
void main(){
    int choice;
    while(1){
        printf("1. Create Node\n2. Display\n3. Insert at Beginning\n4. Insert at End\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                createNode();
                break;
            case 2:
                display();
                break;
            case 3:
                insertAtBeginning();
                break;
            case 4:
                insertAtEnd();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice");
        }
    }
}
