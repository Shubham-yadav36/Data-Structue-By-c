#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node* top=0;
void push(int);
void disply();
void pop();
void main(){
    push(20);
    push(30);
    push(40);
    push(45);
    push(46);
     disply();
    pop();
    pop();
    pop();
    pop();
    pop();
    getch();
}
void push(int data){
   struct node *temp;
   temp = (struct node*)malloc(sizeof(struct node));
   temp->data=data;
   temp->next = top;
   top = temp;
}
void disply()
{
    if(top==0){
        printf("Stack is Empty");
    }
    else {
        while(temp!=0){
             printf("%d ",temp->data);
             temp = temp->data;
        }
    }
}
void pop(){
    struct node *temp;
    temp=top;
    if(top==0)
        printf("Stack is Empty");
    else{
        int i=0;
        printf("\nPoped Item : %d = %d\n",i,top->data);
        top = temp->next;

    }
}
