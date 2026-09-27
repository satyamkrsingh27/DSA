#include<stdio.h>
struct Node{
    int data;
    struct Node* next;
};
struct Node* head=NULL;
struct Node* newnode;
struct Node* temp;
void main(){
    newnode=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter the data: ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==NULL){
        head=temp=newnode;
    }
    else{
        temp->next=newnode;
        temp=newnode;
    }
    printf("Do you want to add another node? (1 for yes, 0 for no): ");
    int choice;
    scanf("%d",&choice);
    temp=head;
    while(choice==1){
        printf("%d ",temp->data);
        temp=temp->next;


    }
    getch();


}