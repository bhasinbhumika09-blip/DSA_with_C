//C code of creating an array:


#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node*next;
};
struct Node*head=NULL,*temp,*newnode;
int main(){
    int i,n;
    printf("Enter the no. of nodes:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        newnode=(struct Node*)malloc(sizeof(struct Node));
        printf("Enter data for node %d:",i);
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL){
            head=newnode;
            temp=head;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
    }
    printf("\n linked list:");
    temp=head;
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
    return 0;
}
    

    
  

